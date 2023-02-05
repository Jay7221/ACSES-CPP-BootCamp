#include<iostream>
using namespace std;
bool isPrime(int n)
{
	for(int j = 2; j * j < n; ++j)
	{
		if(n % j == 0)
		{
			return false;
		}
	}
	return true;
}
void printAllPrimes(int N)
{
	for(int i = 2; i < N; ++i)
	{
		if(isPrime(i))
		{
			cout << i << ' ';
		}
	}
}
int main()
{
	int N;
	cin >> N;
	printAllPrimes(N);
	return 0;
}
