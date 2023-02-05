#include<iostream>
using namespace std;
int divide(int n, int m)
{
	int ans = -1;
	try
	{
		if(m == 0)
		{
			throw "Division By Zero";
		}
		ans = n / m;
	}
	catch(int n)
	{
		cout << "Error Caught with Error Code : " << n << endl;
	}
	return ans;
}
int main()
{
	int n, m;
	cin >> n >> m;
	string ans = to_string(divide(n, m));
	cout << ((ans == "-1") ? "" : ans) << endl;
	return 0;
}
