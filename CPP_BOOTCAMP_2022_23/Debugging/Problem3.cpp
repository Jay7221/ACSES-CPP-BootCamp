#include<iostream>
using namespace std;
class Person
{
	public:
		string name;
		void setName(string name)
		{
			this -> name = name;
		}
		string getName()
		{
			return (this -> name);
		}
};
class SY : public Person
{

};
class FY :public Person
{
};
class Student : public SY, public FY
{
	public:
		int PRN;
		friend ostream& operator << (ostream &out, Student st)
		{
			out << "Name : " << st.name << endl << "PRN : " << st.PRN << endl;
			return out;
		} 
		friend istream operator >> (istream &in, Student &st)
		{
			in >> st.name >> st.PRN;
			return in;
		}
};
int main()
{
	int n;
	cin >> n;
	Student st;
	while(n--)
	{
		cin >> st;
		cout << st;
	}
	return 0;
}
