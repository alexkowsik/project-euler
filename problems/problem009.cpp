#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	int a, b, c = 3;
	double temp = 0;

	for (int i = 4; i < 1000000; i++) {
		a = i;
		b = a + 1;

		for (int i = b; i < 1000000; i++) {
			b = i;
			temp = sqrt((a * a) + (b * b));
			if (temp == floor(temp)) {
				if ((a + b + temp) == 1000)
				break;
			}
		}
			if ((a + b + temp) == 1000)
				break;
	}

	cout << (a * b * temp) << endl;
	
	system("PAUSE");
	return 0;
}
