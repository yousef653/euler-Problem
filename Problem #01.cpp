/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/
#include<iostream>
#include<conio.h>
using namespace std;
int m(int, int);
int main()
{
	int sum;
	sum = m(3, 5);
	cout << "sum = " << sum;
}
int m(int x, int y)
{
	int sum = 0;
	for (int i = 1; i < 1000; i++)
	{
		if (i % x == 0 || i % y == 0)
		{
			sum += i;
		}
	}
	return sum;
}
