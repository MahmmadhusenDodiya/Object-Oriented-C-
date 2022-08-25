#include<bits/stdc++.h>
using namespace std;


// Reference variable?
//  int &y=x;
//	here y is ref variable. it must initialize at declaration
//	variable's name contain &
//  it is internal pointer .it is not address of
//  it can not updated




int main()
{
	int x=0;
	int &y=x;
	cout<<"x="<<x<<"\n";
	y++;
	cout<<"x="<<x<<"\n";
	
//	means same variable with diff name
	
	return 0;
}
