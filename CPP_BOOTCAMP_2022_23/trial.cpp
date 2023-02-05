#include<iostream>
using namespace std;
void start_session(string name)
{
	cout << "Welcome to Session" << endl;
	cout << "The name of the session is : " << name << endl;
}
void multiply_matrix(int a[3][3], int b[3][3], int result[3][3])
{
	for(int i = 0; i < 3; ++i)
	{
		for(int j = 0; j < 3; ++j)
		{
			result[i][j] = 0;
			for(int k = 0; k < 3; ++k)
			{
				result[i][j] += a[i][k] * b[k][j];
			}
		}
	}
}
void inputMatrix(int matrix[3][3])
{
	for(int i = 0;  i < 3; ++i)
	{
		for(int j = 0; j < 3; ++j)
		{
			cin >> matrix[i][j];
		}
	}
}
void print(int matrix[3][3])
{
	for(int i = 0; i < 3; ++i)
	{
		for(int j = 0; j < 3; ++j)
		{
			cout << matrix[i][j] << ' ';
		}
		cout << endl;
	}
}
char get()
{
	return 44.34;
}
int main()
{
	start_session("Functions & Pointers");
	cerr << get() << '\n';
	int a[3][3], b[3][3], result[3][3];
	inputMatrix(a);
	inputMatrix(b);

	multiply_matrix(a, b, result);

	print(result);
	return 0;
}
