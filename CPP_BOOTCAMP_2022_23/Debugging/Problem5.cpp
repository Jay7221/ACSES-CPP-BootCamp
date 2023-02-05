#include<iostream>
using namespace std;
class Student
{
	private:
		string name;
		int id;
		friend istream& operator >> (istream &in, Student &st)
		{
			in >> st.name;
			in >> st.id;
			return in;
		}
		friend iostream& operator << (iostream &in, Student &st)
		{
			in << "Name : " <<  st.name << endl;
			in << "ID : " <<  st.id << endl;
			return in;
		}

};
int main()
{
	Student st;
	cin >> st;
	cout << st;
	return 0;
}
