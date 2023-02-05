#include<iostream>
using namespace std;
class Shape
{
	public:
		virtual double area()
		{
			cout << "This is area of base class!" << endl;
			return 0;
		}
};
class Circle : public Shape
{
	public:
		int r;
		Circle(int r)
		{
			this -> r = r;
		}
		double area()
		{
			return (r * r);
		}
};
class Rectangle : public
{
};
int main()
{
	return 0;
}
