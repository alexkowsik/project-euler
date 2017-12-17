#include <iostream>

using namespace std;


int main()
{
	unsigned long number, counter, larger = 0, max = 1;

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
		}
	}

	cout << max << endl;
	
	system("PAUSE");
	return 0;
}
