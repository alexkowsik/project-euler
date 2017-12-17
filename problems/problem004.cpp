#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string Reverse(string s);


int main()
{
	int temp;
	string temp1, temp2;
	int largest = 0;


	for (int i = 999; i > 100; i--) {
		for (int j = 999; j > 100; j--) {
			temp = i * j;
			temp1 = to_string(temp);
			temp2 = Reverse(temp1);

			if (temp1 == temp2)
				if (temp > largest)
					largest = temp;
		}
	}
	cout << largest << endl;
	
	system("PAUSE");
	return 0;
}


string Reverse(string s) 
{
	int length = s.length();

	for (int i = 0; i < (length / 2); i++) {
		swap(s[i], s[length - 1 - i]);
	}

	return s;
}
