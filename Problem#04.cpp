/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*/
#include<iostream>
#include<conio.h>
using namespace std;
int inline reverse(int);
int main()
{
	int max=0;
	for (int i = 100; i < 1000; i++)
	{
		for (int j = 100; j < 1000; j++)
		{
			if ((i * j) == reverse(i * j))
			{
				if (max == 0)
				{
					max = i * j;
					continue;
				}
				max = max > i * j ? max : i * j;
			}
		}
	}
	cout << "max = " << max;
	cin.ignore();
	cin.get();
}
int inline reverse(int number)
{
	int t,R=0;
	while (number > 0)
	{
		t = number % 10;
		number /= 10;
		R = R * 10 + t;
	}
	return R;
}