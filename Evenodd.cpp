#include <iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int n;
 
    cout<<"Enter a number: ";
    cin>>n;
    if(n% 2 ==0)
    {
    	cout<<n<<" is Even Number";
    }
    else {
    	cout<<n<<" is a odd number";
    }

		getch();
}