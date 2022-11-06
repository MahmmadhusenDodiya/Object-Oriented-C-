#include<bits/stdc++.h>
using namespace std;


class A{
public:
	int a,b;
	const int rate;  // we can't write rate=x here inside class
	
	int &z;  // refrance variable
	A(int x,int y,int &r):a(x),rate(y),z(r)   // initializer list
	{
		z++;
	}
	
};



int main()
{
	int x=12;
	A obj(1,2,x);
	cout<<"x="<<x<<"\n";
	return 0;
}
