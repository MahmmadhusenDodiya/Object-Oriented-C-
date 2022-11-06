#include<bits/stdc++.h>
using namespace std;

// if we made function virtual then late binding happens


// this is abstract class it contain pure virtual function
// in Java there is abstract keyword but in c++ there is no
class Person{
	public:
		virtual void fun()=0; 
		// this is pure virtual function
		// we must provide the implimentation of this fun in its derived class 
	 
};


class Student:public Person
{
	public:
		void fun()
		{
			
		}
};

int main()
{
	
	Student p;
//	p.fun();
	
	return 0;
}
