#include<iostream>
using namespace std;
class Student
{
	public:
		int score;
		string name;
		Student(string name, int score)
		{
			this -> name = name;
			this -> score = score;
		}
};
istream& operator >> (istream &in, Student &s)
{
	cout << "Enter name of the student : ";
	in >> s.name;
	cout << "Enter score of the student : ";
	in >> s.score;
	return in;
}
ostream& operator << (ostream &out, Student s)
{
	cout << s.name << " " << s.score << "\n";
	return out;
}
Student max(Student s1, Student s2)
{
	if(s1.score > s2.score)
	{
		return s1;
	}
	return s2;
}
void print(Student s)
{
	cout << s.name;
}
int main()
{
	Student s1("Someone", 12), s2("Someone else", 34);
	cin >> s1 >> s2;
	cout << s1 << ' ' << s2 << "\n";
	cout << max(s1, s2);
	return 0;
}
