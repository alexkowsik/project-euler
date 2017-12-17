#include <iostream>

using namespace std;


int main()
{
	unsigned long a = 0, b = 100;

	for (int i = 1; i < 101; i++)
		a += (i * i);

	b = b * (b + 1) / 2;
	b *= b;

	cout << b - a << endl;

	system("PAUSE");
	return 0;
}
