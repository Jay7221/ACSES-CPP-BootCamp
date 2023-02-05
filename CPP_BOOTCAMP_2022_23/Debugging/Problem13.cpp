#include<iostream>
using namespace std;
class Vector
{
	int n;
	int *arr;
	public:
		Vector(int n)
		{
			n = n;
			arr = new int[n];
		}
		int operator [] (int ind)
		{
			if((ind >= 0) && (ind < n))
			{
				return arr[ind];
			}
			throw "Index out of range!";
		}
		void push_back(int a)
		{
			int* tmp = new int[n + 1];
			delete arr;
			arr = tmp;
			arr[n] = a;
			++n;
		}
		int size()
		{
			return n;
		}
};
int main()
{
	int n;
	cin >> n;
	Vector v(n);
	for(int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	int m;
	cin >> m;
	for(int i = 0; i < m; ++i)
	{
		int a;
		cin >> a;
		v.push_back(a);
	}
	for(int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << ' ';
	}
	cout << endl;
	return 0;
}
