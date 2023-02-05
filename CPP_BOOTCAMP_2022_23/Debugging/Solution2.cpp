#include<iostream>
using namespace std;
int main()
{
	long long initial;
	cin >> initial;
	int years;
	cin >> years;
	while(years--)
	{
		initial *= 2;
	}
	cout << "Final Amount : " << initial << endl;
	return 0;
}
