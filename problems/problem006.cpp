#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	unsigned long a = 0, b = 0;

	for (int i = 1; i < 101; i++)
		a += (i*i);

	for (int i = 1; i < 101; i++)
		b += i;

	b = (b*b) - a;

	cout << b << endl;
	cin >> a;


	return 0;
}