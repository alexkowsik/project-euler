#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	unsigned long long n = 600851475143, sqr = sqrt(n);
	long long sum = 0;

	for (int i = 2; i <= sqr; i++) {
		if ((n % i) == 0) {
			n /= i;
			if (sum < i)
				sum = i;
		}
	}

	cout << sum << endl;

	system("PAUSE");
	return 0;
}
