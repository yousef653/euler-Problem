/*The sum of the squares of the first ten natural numbers is , The square of the sum of the first ten natural numbers is,

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/
#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
template <class T>
T f(T n)
{
	T p=0,sum=0;
	for (int i = 1; i <= n; i++)
	{
		sum += pow(i, 2);
		p += i;
	}
	p = pow(p, 2);
	return p - sum;
}
int main()
{
	cout << f(100);
	cin.ignore();
	cin.get();
}