#include<iostream>
using namespace std;
void move(string t1, string t2)
{
	cout << "Moving Disk from tower" << t1 << " to tower" << t2 << endl;
}
void moveDisks(string t1, string t2, string t3, int n)
{
	moveDisks(t1, t3, t2, n - 1);
	move(t1, t3);
	moveDisks(t2, t1, t3, n - 1);
}
int main()
{
	int n;
	cin >> n;
	string tower1, tower2, tower3;
	cin >> tower1 >> tower2 >> tower3;
	moveDisks(tower1, tower2, tower3, n);
	return 0;
}
