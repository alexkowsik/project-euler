#include <iostream>

using namespace std;



int main()
{
	unsigned long number;
	unsigned long counter = 0;
	unsigned long larger = 0;
	unsigned long max = 1;

	for (int i = 2; i <= 1000000; i++)
	{
		counter = 1;
		number = i;

		while (number > 1)
		{
			if ((number % 2) == 0)
				number = (number / 2);
			else
				number = (number * 3) + 1;

			counter++;
		}

		if (counter > larger) {
			larger = counter;
			max = i;
			cout << max << endl;
		}
	}


	cout << counter << endl;
	cin >> max;

	return 0;
}
