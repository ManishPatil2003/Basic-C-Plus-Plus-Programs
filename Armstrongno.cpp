#include <iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n, r, sum = 0, temp;
	cout << "Enter the Number=  ";
	cin >> n;
	temp = n;
	while (n > 0)
	{
		r = n % 10;
		sum = sum + (r * r * r);
		n = n / 10;
	}
	if (temp == sum)
	{
		cout << "\nArmstrong Number." ;
	}
	else
	{
		cout << "\nNot Armstrong Number.";
	}
	getch();
}