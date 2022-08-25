#include<iostream>
#include<conio.h>
#define N 4000000
using namespace std;
long int inline fibonacci(long int);
int main()
{
	int sum = 0;
	for (int counter = 1; fibonacci(counter)<N; counter++)
	{
		if (fibonacci(counter) % 2 == 0)
		{
			sum += fibonacci(counter);
		}
	}
	cout << "sum = " << sum;
	cin.ignore();
	cin.get();
}
long int inline fibonacci(long int n)
{
	if (n == 0 || n == 1)
	{
		return n;
	}
	else
	{
		return (fibonacci(n - 1) + fibonacci(n - 2));
	}
}