#include<iostream>
using namespace std;
class Student
{
	string name;
	int marks;
	public:
		Student(string name, int marks)
		{
			this -> name = name;
			this -> marks = marks;
		}
		int getMarks()
		{
			return marks;
		}
		string getName()
		{
			return name;
		}
};
bool operator > (Student s1, Student s2)
{
	return (s1.getMarks() > s2.getMarks());
}
ostream& operator << (ostream &out, Student* &s)
{
	out << "Name : " << s -> getName() << endl << "Marks : " << s -> getMarks() << endl;
	return out;
}
istream& operator >> (istream &in, Student* &s)
{
	string name;
	int marks;
	in >> name >> marks;
	s = new Student(name, marks);
	return in;
}
void sort(Student* arr[], int n)
{
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < n - 1; ++j)
		{
			if((*arr[j]) > (*arr[j + 1]))
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}
int main()
{
	int n;
	cin >> n;
	Student *arr[n];
	for(int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	sort(arr, n);
	for(int i = 0; i < n; ++i)
	{
		cout << arr[i];
	}
	return 0;
}
