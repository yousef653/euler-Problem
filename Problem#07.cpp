/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?
*/
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
