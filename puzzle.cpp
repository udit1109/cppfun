#include <iostream>


int main()
{		
		int a,b,c;
		int i,count=1;
		
		std:: cout<<"Enter total kgs of sugercane:";
		std:: cin>>a;
		std:: cout<<"Enter capacity of elephant:";
		std:: cin>>b;
		std:: cout<<"Enter total distance:";
		std:: cin>>c;
		for(i=0;i<=a;i=i+b)
		{
			count=count+1;
		}
		int sugercane=a-b;
		
		int d=(a-sugercane)/count;
		
		int r=c-d;//remaining distance
		count=0;
		for(i=0;i<=sugercane;i=i+b)
		{
			count=count+1;
		}
		
		int e=(a-sugercane)/count;//remaining distance
		
		
		d=d+e;
		
		sugercane=c-d;
		std::cout<<"\nTotal required sugercane="<<sugercane;
		return 0;
		
}
