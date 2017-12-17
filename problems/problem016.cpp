#include <iostream>

using namespace std;


int main()
{
	unsigned long long sum = 0, a[310];

	for (int i = 0; i < 310; i++) 
		a[i] = 0;

	a[309] = 1;

	for (int i = 1; i < 1001; i++) {
		for (int j = 309; j > 1; j--) 
			a[j] *= 2;
		
		for (int j = 309; j > 1; j--) {
			if (a[j] > 9) {
				a[j] -= 10;
				a[j - 1] += 1;
			}
		}
	}


	for (int i = 0; i < 310; i++) 
		sum += a[i];

	cout << sum << endl;

	system("PAUSE");
	return 0;
}
