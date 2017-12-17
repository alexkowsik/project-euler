#include <iostream>

using namespace std;


int main()
{
	int a, b, arr[165] = { 0 }; arr[165] = 1;
	unsigned long long sum = 0;

	for (int i = 2; i <= 100; i++) {
		a = 0;
		b = 0;

		for (int j = 165; j >= 1; j--) {
			
			b = (arr[j] * i) / 10;
			arr[j] = (arr[j] * i) % 10;
			arr[j] += a;
			
			if((arr[j] / 10) != 0) {
				b += (arr[j] / 10);
				arr[j] = arr[j] % 10;
			}
			a = b;
		}
	}

	for (int i = 0; i <= 165; i++) {
		sum += arr[i];
	}
	cout << sum << endl;

	system("PAUSE");
	return 0;
}
