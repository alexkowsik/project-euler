#include <iostream>

using namespace std;


int main()
{
	long a = 1, b = 2, c = 0, sum = 0;

	while (b <= 4000000) {
		if ((b % 2) == 0)
			sum += b;

		c = b;
		b += a;
		a = c;
	}

	cout << sum << endl;

	system("PAUSE");
	return 0;
}
