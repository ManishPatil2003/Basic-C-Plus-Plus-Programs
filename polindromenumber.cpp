#include <iostream.h>
#include <conio.h>
void main()
{
	clrscr();
	int Number, Temp, Reminder, Reverse = 0;

	cout << "\nPlease Enter any value  : ";
	cin >> Number;

	Temp = Number;

	while (Temp > 0)
	{
		Reminder = Temp % 10;
		Reverse = Reverse * 10 + Reminder;
		Temp = Temp / 10;
	}

	cout << "\nIn Reverse :" << Reverse << endl;

	if (Number == Reverse)
	{
		cout << Number << "  is Palindrome Number";
	}

	else
	{
		cout << Number << "  is not Palindrome Number";
	}

	getch();
}