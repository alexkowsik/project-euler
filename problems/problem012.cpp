#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	long sum = 0;
	long sum2 = 0;
	long x=100;

	for (long i = 20; i < 1000000; i++) {
		x = 0;
		sum = 0;

		sum = i*(i + 1) / 2;
		sum2 = floor(sqrt(sum));
		
		for (int j = 1; j <= sum2; j++) {
			if ((sum % j) == 0)
				x++;
		}

		if ((2*x) >= 500)
			break;
	}

	cout << sum << endl;
	system("PAUSE");

	return 0;
}
