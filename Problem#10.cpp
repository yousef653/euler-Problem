#include<iostream>
#include<conio.h>
#define N 2000000
using namespace std;
int inline prime(int);
int main()
{
	long long int sum = 0;
	for (int i = 2; i < N; i++)
	{
		if (prime(i) == 1)
		{
			sum += i;
			cout << "sum = " << sum << endl;

		}
	}
	cin.ignore();
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