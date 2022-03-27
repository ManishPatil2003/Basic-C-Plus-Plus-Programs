#include<iostream.h>

int main ()
{
	
	int a=10, b=20;      
	
	cout<<"Before Swap A="<<a <<" , B="<<b <<endl;
	      
	a=a+b;    
	b=a-b;    
	a=a-b;
	    
	cout<<"After Swap A= "<<a <<" , B="<<b;
	    
	return 0;
}