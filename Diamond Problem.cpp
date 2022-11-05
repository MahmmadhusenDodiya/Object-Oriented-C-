#include<bits/stdc++.h>
using namespace std;


class A{

public:
	int _a;
	
	
};
class B:virtual public A{

public:
	int _b;
	
	
};
class C:virtual public A{

public:
	int _c;
	
	
};
class D:public C,public B{

public:
	int _d;
	
	
};



int main()
{
	A a;
	B b;
	C c;
	D d;
	
	
	
}
