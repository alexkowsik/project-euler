#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main()
{
	long x[150], y[150];
	string s, s2;

	ifstream file;
	file.open("problem013.txt");

	for (int i = 0; i < 100; i++) {
		x[i] = 0;
		y[i] = 0;
	}

	getline(file, s);

	for (int i = 100; i < 150; i++) 
		x[i] = s[i - 100] - 48;

	for (int n = 1; n < 100; n++) {
		getline(file, s2);

		for (int i = 100; i < 150; i++) 
			y[i] = s2[i - 100] - 48;

		for (int i = 149; i > -1; i--) {
			x[i] += y[i];
			if (x[i] > 9) {
				x[i] -= 10;
				x[i - 1]++;
			}
		}
	}

	for (int i = 1; i < 150; i++) 
		cout << x[i];

	cout << endl;

	system("PAUSE");
	return 0;
}
