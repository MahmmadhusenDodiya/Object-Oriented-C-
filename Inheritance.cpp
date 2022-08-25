#include<bits/stdc++.h>
using namespace std;


// constractor of class B called first it call constrator A using Init-list
// distractor of class B called first it call distractor of A at last  

class A{
	
	int a;
public:
	A(int x)
	{
		a=x;
		cout<<"Constractor of class A\n";
	}
	~A()
	{
		cout<<"Distractor of class A\n";
	}
	
};

class B:public A{
	int b;
public:
	B(int x,int y):A(x)
	{
		b=y;
		cout<<"Constractor of class B\n";
	}
	~B()
	{
		cout<<"Distractor of class B\n";
	}
	
};

int main()
{
	B obj(2,3);
	return 0;
}
