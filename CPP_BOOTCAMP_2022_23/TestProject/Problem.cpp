#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void store(string prn, string name, int marks)
{
}
void view(string prn)
{
}
void del(string prn)
{
}
void view_all()
{
}
int main()
{
	string cur;
	int n = 0;
	while(cin >> cur)
	{
		++n;
		if(cur == "STORE")
		{
			string name;
			string prn;
			int marks;
			cin >> prn >> name >> marks;
			store(prn, name, marks);
		}
		else if(cur == "VIEW")
		{
			string prn;
			cin >> prn;
			view(prn);
		}
		else if(cur == "DELETE")
		{
			string prn;
			cin >> prn;
			del(prn);
		}
		else if(cur == "VIEWALL")
		{
			view_all();
		}
		else
		{
			cout << "Exiting ..." << endl;
			break;
		}
		cout << "---------- * ----------" << endl;
	}
	return 0;
}
