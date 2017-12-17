#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	unsigned long long arr[21][21];

	for (int i = 0; i < 21; i++) {
		arr[i][0] = 1;
		arr[0][i] = 1;
	}

	arr[0][0] = 0;

	for (int i = 1; i < 21; i++) {
		for (int j = 1; j < 21; j++) {
			arr[j][i] = arr[j][i - 1] + arr[j - 1][i];
			cout << arr[j][i] << endl;
		}
	}

	cout << arr[20][20];
	cin >> arr[0][0];



	return 0;
}