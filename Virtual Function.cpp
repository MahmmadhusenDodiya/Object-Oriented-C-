#include<bits/stdc++.h>
using namespace std;

// base class pointer can point any of its decendent class
// its reverse is not true

class A{
	public:
		// virtual keyword thi late binding thay che
		// early binding=> binding using pointer type
		virtual void f1()
		{
			cout<<"This is Class A\n";
		}
};


class B:public A
{
	public:
		void f1() 
		{
			cout<<"This is Class B\n";	
		}
		void f2()
		{
			cout<<"This is F2 of class B\n";
		}
};

int main()
{
	
	A *p;
	A obj1;
	B obj2;
	
	p=&obj2;
	obj2.f1();
	p->f1();
	
	return 0;
}
