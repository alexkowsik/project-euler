#include <iostream>

using namespace std;


int main()
{
	int b, sum, end = 0;

	for (int i = 4; i < 10000; i++) {
		b = 0;
		sum = 0;

		for (int j = 1; j < i; j++) 
			if ((i % j) == 0)
				b += j;
		
		for (int j = 1; j < b; j++) 
			if ((b % j) == 0)
				sum += j;

		if ((i == sum) && (i != b))
			end += i;
	}
	cout << end << endl;

	system("PAUSE");
	return 0;
}