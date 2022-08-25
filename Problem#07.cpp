#include<iostream>
#include<conio.h>
using namespace std;
int inline prime(int);
int main()
{
	int counter = 0;
	for (int i = 2; i < 1000000; i++)
	{
		if (prime(i) == 1)
		{
			counter++;
			if (counter == 10001)
			{
				cout << i << endl;
				break;
			}
		}
	}
	cin.ignore();
	cin.get();
}
int inline prime(int number)
{
	int t = 1;
	for (int i = 2; i <= sqrt(number); i++)
	{
		if (number % i == 0)
		{
			t = 0;
		}
	}
	if (t == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}