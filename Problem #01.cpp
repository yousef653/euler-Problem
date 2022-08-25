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