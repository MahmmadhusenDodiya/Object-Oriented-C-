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
		cout<<a<<((b<0)?"-":"+")<<"i"<<abs(b)<<"\n";
	}
	
	friend Complex operator+(Complex,Complex);
	friend Complex operator-(Complex);
};

Complex operator-(Complex X)
{
	Complex temp;
	temp.a=-X.a;
	temp.b=-X.b;
	return temp;
}

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
	c3=-c3;
	c3.showData();
	return 0;
}
