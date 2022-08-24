#include<bits/stdc++.h>
using namespace std;

class Complex{

private:
	int a,b;
public:
	Complex()
	{
		
	}
	Complex(int x,int y){
		a=x;
		b=y;
	}
	
	void showData()
	{
		cout<<a<<"+ i"<<b<<"\n";
	}
	
	friend Complex operator+(Complex X,Complex Y);
};

Complex operator+(Complex X,Complex Y)
{
	Complex temp;
	temp.a=X.a+Y.a;
	temp.b=X.b+Y.b;
	return temp;
}

int main()
{
	
	Complex c1(2,3);
	Complex c2(3,3);
	Complex c3=c1+c2;
	c3.showData();
	
	return 0;
}
