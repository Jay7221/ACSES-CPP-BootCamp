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
class SY : virtual public Person
{

};
class FY :virtual  public Person
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
		friend istream& operator >> (istream &in, Student &st)
		{
			in >> st.name >> st.PRN;
			return in;
		}
};
int main()
{
	int n;
	cin >> n;
	Student st[n];
	for(int i = 0; i < n; ++i)
	{
		cin >> st[i];
	}
	for(int i = 0; i < n; ++i)
	{
		cout << st[i];
	}
	return 0;
}
