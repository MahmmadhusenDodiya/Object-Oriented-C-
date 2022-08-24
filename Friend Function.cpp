#include<bits/stdc++.h>
using namespace std;

class Complex{

private:
	int a,b;
public:
	Complex()
	{
		a=0;
		b=0;
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
	friend ostream& operator<<(ostream&,Complex);
	friend istream& operator>>(istream&,Complex&);
	
};

ostream& operator<<(ostream &dout,Complex C)
{
	cout<<"a="<<C.a<<" b="<<C.b<<"\n";
	return dout;
}

istream& operator>>(istream &din,Complex &C)
{
	cin>>C.a>>C.b;
	return din;
}


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
	
	cin>>c1;
	cin>>c2;
	cout<<(c1+c2)<<"\n";
	
	// cin>>c1;  => operator(cin,c1);   diffrent class friend 
	// operator>>(cin,c1);
	
	
	return 0;
}
