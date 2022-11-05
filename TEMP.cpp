#include<bits/stdc++.h>
using namespace std;


class A{

public:
	int _a;
	
	
};
class B:public A{

public:
	int _b;
	
	
};
class C:public B{

public:
	int _c;
	
	
};
class D:public C,public B{

public:
	int _d;
	
	
};



int main()
{
	D obj;
//	obj._d=2;
//	cout<<obj._d<<"\n";
	
}
