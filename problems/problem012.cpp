#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	long sum = 0, sqr = 0, factors = 0, a = 20;

	while ((2 * factors) < 500) {

		factors = 0;
		sum = a*(a + 1) / 2;
		sqr = sqrt(sum);

		for (int i = 1; i <= sqr; i++) {
			if ((sum % i) == 0)
				factors++;
		}
		a++;
	}

	cout << sum << endl;
	system("PAUSE");

	return 0;
}
