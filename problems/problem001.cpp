#include <iostream>

using namespace std;


int main()
{
	long sum3 = 0, sum5 = 0;
	int a = 1;

	while ((3 * a) < 1000) {
		sum3 += (3 * a);
		a++;
	}

	a = 1;

	while ((5 * a) < 1000) {
		if (((5 * a) % 3) != 0)
			sum5 += (5 * a);
		a++;
	}

	cout << sum3 + sum5 << endl;

	system("PAUSE");
	return 0;
}
