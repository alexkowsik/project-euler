#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
	int u = 0;
	unsigned long long sum = 0;
	unsigned long long a[310];

	for (int i = 0; i < 310; i++) {
		a[i] = 0;
	}

	a[309] = 1;

	for (int i = 1; i < 1001; i++) {
		for (int j = 309; j > 1; j--) {
			a[j] *= 2;
			//cout << a[309] << endl << a[308] << endl;
		}
		for (int j = 309; j > 1; j--) {
			if (a[j] > 9) {
				a[j] -= 10;
				a[j - 1] += 1;
			}
		}
	}

	//cout << "\n\n\n\n";

	for (int i = 0; i < 310; i++) {
		//cout << i << " " << a[i] << endl;
		sum += a[i];
	}

	cout << sum;
	cin >> sum;



	return 0;
}