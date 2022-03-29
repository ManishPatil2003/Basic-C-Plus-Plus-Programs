#include<iostream.h>
#include <conio.h>
void main()
{
	clrscr();

	int n, i, flag = 1;

	cout << "Enter The Number To Check Prime Number Or Not " << endl;
	cin >> n;

	for (i = 2; i <n; i++)
	{
		if (n % i == 0)
		{
			flag = 0;
			break;
		}
	}

	if (flag == 1)
		cout << n << "  Is Prime Number ";
	else
		cout << n << "  Is Not Prime Number";

	getch();
}