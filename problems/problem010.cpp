
#include <iostream>
#include <cmath>

using namespace std;



int main()
{
	unsigned long End = 2000000;
	bool *list;

	list = new bool[End + 1];
	for (int i = 0; i <= End; i++)
		list[i] = 0;

	for (unsigned long i = 3; i <= sqrt(End); i += 2) {
		for (unsigned long j = i; i * j <= End; j += 2)
			list[(i*j)] = true;
	}

	unsigned long long x = 2;
	for (unsigned long i = 3; i <= End; i += 2) {
		if (!list[i])
			x = x + i;
	}

	cout << x;
	cin >> x;
	return 0;
}

