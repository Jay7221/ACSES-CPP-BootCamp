#include<iostream>
using namespace std;
class Person
{
	public:
		string name;
		Person()
		{
		}
		Person(string name)
		{
			this -> name = name;
		}
};
istream& operator >> (istream &in, Person &p)
{
	cout << "Enter the name of person : ";
	in >> p.name;
	return in;
}
class Student : public Person
{
	public:
		int score;
		Student()
		{
		}
		Student(string name, int score)
		{
			this -> name = name;
			this -> score = score;
		}
};
class Staff : public Person
{
	public:
		int salary;
		Staff()
		{
		}
		Staff(string name, int salary)
		{
			this -> name = name;
			this -> salary = salary;
		}
};
istream& operator >> (istream &in, Student &p)
{
	cout << "Enter the name of person : ";
	in >> p.name;
	cout << "Enter score : ";
	cin >> p.score;
	return in;
}
ostream& operator << (ostream& out, Person &p)
{
	out << "Name : " << p.name << "\n";
	return out;
}
ostream& operator << (ostream& out, Student &p)
{
	out << "Name : " << p.name << " " << "Score : " << p.score << "\n";
	return out;
}
Person operator + (Person &p1, Person &p2)
{
	Person res = Person();
	res.name = p1.name + p2.name;
	return res;
}
int main()
{
	int numPeople;
	cin >> numPeople;
	Student arr[numPeople];
	for(int i = 0; i < numPeople; ++i)
	{
		cin >> arr[i];
	}
	for(int i = 0; i < numPeople; ++i)
	{
		cout << arr[i];
	}
	Person p = arr[0] + arr[1];
	cout << p << '\n';
	return 0;
}
