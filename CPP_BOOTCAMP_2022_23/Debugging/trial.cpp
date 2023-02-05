#include<iostream>
using namespace std;
int main()
{
	srand(time(0));
	int n = 100;
	int m = 100;
	cout << n << endl;
	for(int i = 0; i < m; ++i)
	{
		cout << (rand()) << ' ';
	}
	cout << m << endl;
	for(int i = 0; i < m; ++i)
	{
		cout << (rand()) << ' ';
	}
	return 0;
}
