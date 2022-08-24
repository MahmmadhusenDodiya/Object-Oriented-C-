#include<bits/stdc++.h>
using namespace std;


class Complex{
	
private:
	int a,b;
public:
	
	Complex(int x,int y)
	{
		a=x;
		b=y;
	}
	Complex()
	{
			
	}
	Complex(const Complex &c)
	{
		a=c.a;
		b=c.b;
	}
	
	void setData(int a,int b)
	{
		this->a=a;
		this->b=b;
	}
	
	void Print()
	{
		cout<<a<<" + "<<b<<"i\n";
	}
	
	
	static void OK()
	{
		cout<<"This is static Method\n";
	}
	
	// Normal Function
	Complex add(Complex c)
	{
		Complex temp;
		temp.a=a+c.a;
		temp.b=b+c.b;
		return temp;
	}
	
	
	// https://youtu.be/bxSFAmzH8ps <= Where i learn this 
	Complex operator + (const Complex &c)
	{
		Complex temp;
		temp.a=a+c.a;
		temp.b=b+c.b;
		return temp;
	}
	
	Complex operator - (const Complex &c)
	{
		Complex temp;
		temp.a=c.a-a;
		temp.b=c.b-b;
		return temp;		
	}
	
	
	void operator += (Complex &c)
	{
		c.a=a+c.a;
		c.b=b+c.b;
	}
	
	void operator -= (Complex &c)
	{
		c.a=a-c.a;
		c.b=b-c.b;
	}

	bool operator == (const Complex &c)
	{
		return (c.a==a and c.b==b);
	}

};

int main()
{	
	Complex::OK();
	
	Complex c1,c2,c3;
	c1.setData(2,4);
	c2.setData(4,3);
	
// Note: all this are same
//	c3=c2.add(c1);
//	c3=c2.operator +(c1);
//  c3=c2+c1        
	
	c3=c2+c1;
    c2=c2-c1;
    c3=c3+c2;
    
	c3.Print();
	c3+=c3;
	c3.Print();
	
	c2=c3;
	if(c3==c2)
	{
		cout<<"Equal\n";
	}
	else
	{
		cout<<"Not Equal\n";
	}
	
	
	return 0;	
}
