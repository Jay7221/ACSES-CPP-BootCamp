#include<iostream>
using namespace std;
class A
{
	int x, y, z, d;
	public:
		virtual void print()
		{
			cout << "A ...\n";
		}
};
class B : public A
{
	int sad, as, asd;
	public:
		void print()
		{
			cout << "B ...";
		}
};
class C : public B
{
	public:
};
int main()
{
	A *c = new C();
	B *b = new B();
	A *a = new A();
	cout << sizeof(*c) << ' ' << sizeof(*a) << ' ' << sizeof(*b) << '\n';
	c -> print();
	return 0;
}
