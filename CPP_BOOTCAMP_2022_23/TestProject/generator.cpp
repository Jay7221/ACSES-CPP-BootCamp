#include<iostream>
using namespace std;
const int sz = 100;
string PRN[sz];
string getCmd()
{
	int n = rand() % 4;
	if(n == 0)
	{
		return "STORE";
	}
	else if(n == 1)
	{
		return "VIEW";
	}
	else if(n == 2)
	{
		return "DELETE";
	}
	else
	{
		return "VIEWALL";
	}
}
string getPrn()
{
	int ind = rand() % sz;
	return PRN[ind];
}
string getName()
{
	int n = (rand() % 100);
	string s;
	for(int i = 0; i < n; ++i)
	{
		s.push_back('a' + (rand() % 26));
	}
	return s;
}
int getMarks()
{
	return (rand() % 200);
}
int main()
{
	srand(time(0));
	string cur;
	cur = "21510026";
	for(int i = 0; i < sz; ++i)
	{
		PRN[i] = cur;
		int k = stoi(cur);
		cur = to_string(k + 1);
	}
	int n = rand() % (1000);
	n = 30;
	for(int i = 0; i < n; ++i)
	{
		cur = getCmd();
		cout << cur << ' ';
		if(cur == "STORE")
		{
			cout << getPrn() << ' ' << getName() << ' ' << getMarks();
		}
		else if(cur == "VIEW")
		{
			cout << getPrn();
		}
		else if(cur == "DELETE")
		{
			cout << getPrn();
		}
		cout << endl;
	}
	cout << "EXIT";
	cout << endl;
	return 0;
}
