#include<bits/stdc++.h>
using namespace std;

template<class T>
class Vector{
	T *data;
	int size;	
public:
	
	Vector(){
		data=NULL;
		size=0;
	}
	Vector(T ar[],int n){
		size=n;
		data=new T[n];
		for(int i=0;i<n;i++)
		{
			data[i]=ar[i];
		}
	}
	void push_back(const T& item)
	{
		T *temp=new T[size+1];
		for(int i=0;i<size;i++) temp[i]=data[i];
		
		temp[size]=item;
		
		if(data!=NULL) delete []data;
		
		data=temp;
	}
	
	T& operator[](int i)
	{
		
		return data[i];
	}
	int size()
	{
		return size;
	}
};

int main()
{
	int ar[]={1,2,72,74,90,56,18,112,86};
	return 0;
}
