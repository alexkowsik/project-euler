#include <iostream>
#include <cmath>
#include <string>

using namespace std;


//unsigned long --> 4294967295
//unsigned long long --> 18446744073709551615


int main()
{
	int a;

	for (unsigned long i = 1000; i < 4294967000; i++) {
		a = 0;
		
		for (int j = 1; j < 21; j++) {
			if ((i % j) == 0)
				a++;
		}
		if (a == 20) {
			cout << i << endl;
			break;
		}
	}

	cout << "hey" << endl;
	cin >> a;

	return 0;
}