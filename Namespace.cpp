#include<bits/stdc++.h>
using namespace std;

// Declare namespace before using statement

namespace Add{
	int add(int a,int b)
	{
		return (a+b)%20;
	}
}

using namespace Add;



int main()
{
	int a=10;
	int b=37;
	cout<<add(a,b)<<"\n";
	
}
