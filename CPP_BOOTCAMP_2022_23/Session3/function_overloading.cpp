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
	print(max(s1, s2));
	return 0;
}
