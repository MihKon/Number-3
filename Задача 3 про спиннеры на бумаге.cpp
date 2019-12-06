#include <iostream>
using namespace std;

int F(int a)
{
	int f=1;
	if (a==0)
	f=1;
	else
	{
		while (a>0)
		{
			f*=a;
			a--;
		}
	}
	return f;
}

int main()
{
	int n, m, p=1, k=1;
	cin>>n>>m;
	int c1, c2;
	c1=F(n+1)/(F(n+1-2)*2);
	c2=F(m+1)/(F(m+1-2)*2);
	int s = c1*c2;
	cout<<s;
}
