#include<iostream>
using namespace std;
const int N = 1e5;
int n = 0;
string PRN[N];
int Marks[N];
string Name[N];
string def = "";
void add(string prn, string name, int marks, int ind)
{
	PRN[ind] = prn;
	Name[ind] = name;
	Marks[ind] = marks;
	cout << "Added data for PRN : " << prn << endl;
}
void show(int ind)
{
	cout << "PRN : " << PRN[ind] << endl;
	cout << "Name : " << Name[ind] << endl;
	cout << "Marks : " << Marks[ind] << endl;
}
void del_ind(int ind)
{
	cout << "Deleted data for PRN : " << PRN[ind] << endl;
	PRN[ind] = def;
}
void store(string prn, string name, int marks)
{
	for(int i = 0; i < n; ++i)
	{
		if(PRN[i] == prn)
		{
			add(prn, name, marks, i);
			return ;
		}
	}
	add(prn, name, marks, n);
	++n;
}
void view(string prn)
{
	for(int i = 0; i < n; ++i)
	{
		if(PRN[i] == prn)
		{
			show(i);
			return ;
		}
	}
	cout << "Data not found!" << endl;
}
void del(string prn)
{
	for(int i = 0; i < n; ++i)
	{
		if(PRN[i] == prn)
		{
			del_ind(i);
			return ;
		}
	}
	cout << "Data not found!" << endl;
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
			for(int i = 0; i < n; ++i)
			{
				if(PRN[i] != def)
				{
					show(i);
					cout << endl;
				}
			}
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
