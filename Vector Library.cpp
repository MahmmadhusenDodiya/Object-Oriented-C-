#include<bits/stdc++.h>
using namespace std;

template<class T>
class Vector{
	T *data;
	int size;	
	int cap;
public:
	
	Vector(){
		data=NULL;
		size=0;
		cap=0;
	}
	Vector(T ar[],int n){
		size=n;
		cap=n;
		data=new T[n];
		for(int i=0;i<n;i++)
		{
			data[i]=ar[i];
		}
	}
	void push_back(const T& item)
	{	
		if(cap==size)
		{
			
			if(cap==0)
			{
				cap=1;
				T *temp=new T[cap];
				for(int i=0;i<size;i++) temp[i]=data[i];
				
				temp[size]=item;
				
				if(data!=NULL) delete []data;
				
				data=temp;
				size++;	
				return;
			}
			T *temp=new T[cap*2];
			cap=cap*2;
			for(int i=0;i<size;i++) temp[i]=data[i];
			
			temp[size]=item;
			
			if(data!=NULL) delete []data;
			
			data=temp;
			size++;
		}
		else
		{
			data[size]=item;
			size++;
		}
		
	}
	
	
	
	T operator[](int i)
	{
		
		return data[i];
	}
	int Size()
	{
		return size;
	}
	int Capacity()
	{
		return cap;
	}
};

int main()
{
	int ar[]={1,2,72,74,90,56,18,112,86};
	Vector<int> a;
	a.push_back(101);
	cout<<"size="<<a.Size()<<" cap="<<a.Capacity()<<"\n";
	a.push_back(75);
	cout<<"size="<<a.Size()<<" cap="<<a.Capacity()<<"\n";
	a.push_back(99);
	cout<<"size="<<a.Size()<<" cap="<<a.Capacity()<<"\n";
	a.push_back(84);
	cout<<"size="<<a.Size()<<" cap="<<a.Capacity()<<"\n";
	a.push_back(95);
	cout<<"size="<<a.Size()<<" cap="<<a.Capacity()<<"\n";
	a.push_back(74);
	cout<<"size="<<a.Size()<<" cap="<<a.Capacity()<<"\n";
	cout<<"This is Vector= ";
	for(int i=0;i<a.Size();i++) 
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
