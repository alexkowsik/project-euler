#include <iostream>

using namespace std;

int main()
{
	int a;

	for (unsigned long i = 1000; i < 999999999; i+=20) {
		a = 0;
		
		for (int j = 1; j <= 20; j++) {
			if ((i % j) == 0)
				a++;
			else
				break;
		}

		if (a == 20) {
			cout << i << endl;
			break;
		}
	}

	system("PAUSE");
	return 0;
}
