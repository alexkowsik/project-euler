#include <iostream>
#include <vector>

using namespace std;


int main()
{
	int div = 0;
	unsigned long long end = 0;
	vector<long> adb, sum;
	sum.push_back(0);

	for (int i = 1; i < 28111; i++) {
		for (int j = 1; j < i; j++) 
			if ((i % j) == 0)
				div += j;
	
		if (i < div) 
			adb.push_back(i);
		
		div = 0;
	}

	for (int i = 0; i < adb.size(); i++) 
		for (int j = i; j < adb.size(); j++) 
			if (find(sum.begin(), sum.end(), (adb[i] + adb[j])) == sum.end()) 
				sum.push_back(adb[i] + adb[j]);

	for (int i = 0; i < 28123; i++) 
		if (find(sum.begin(), sum.end(), i) == sum.end()) 
			end += i;

	cout << end << endl;

	system("PAUSE");
	return 0;
}