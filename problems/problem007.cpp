#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	bool *numberList;
	int a = 0, b = 0;

	numberList = new bool[10000000];

	for (int i = 0; i < 10000000; i++)
		numberList[i] = false;

	for (int i = 0; i < 10000000; i += 2) 
		numberList[i] = true;


	for (unsigned long i = 3; i <= sqrt(10000000); i += 2){
		for (unsigned long j = i; i * j <= 10000000; j += 2)
			numberList[(i*j)] = true;
	}


	while(b<10001)
	{
		if (!numberList[a]) 
			b++;
		a++;
	}

	cout << a-1 << endl;

	system("PAUSE");
	return 0;
}
