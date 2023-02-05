#include<iostream>
using namespace std;
class Vehicle
{
	int speed;
	public:
		void setSpeed(int x)
		{
			speed = x;
		}
		int getSpeed()
		{
			return speed;
		}
};
class Truck : public Vehicle
{
	string company;
	public:
		void setCompany(string x)
		{
			company = x;
		}
		string getCompany()
		{
			return company;
		}
};
ostream& operator << (ostream &out, Truck &t)
{
	out << "Company : " << t.company << endl << "Speed : " << t.speed  << endl;
	return out;
}
istream& operator >> (istream &in, Truck &t)
{
	in >> t.company >> t.speed;
	return in;
}
int main()
{
	int n;
	cin >> n;
	Truck* truck[n];
	for(int i = 0; i < n; ++i)
	{
		cin >> truck[i];
	}
	for(int i = 0; i < n; ++i)
	{
		cout << truck[i] << endl;
	}
	return 0;
}
