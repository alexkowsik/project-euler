#include <iostream>

using namespace std;


int main()
{
	// unter 10               3, 3, 5, 4, 4, 3, 5, 5, 4 --> 36
	// unter 20               3, 3, 5, 4, 4, 3, 5, 5, 4, 3, 6, 6, 8, 8, 7, 7, 9, 8, --> 98
	// über 20                36*8+8 --> 296 ; 296 + 10(6, 6, 6, 5, 5, 7, 6, 6) --> 766 
	// unter 100              766 + 98 --> 864
	// in einem tausender     864
	// hunderter              900*7+100(3, 3, 5, 4, 4, 3, 5, 5, 4) --> 6300 + 100(3, 3, 5, 4, 4, 3, 5, 5, 4) --> 9900
	// ands                   900 * 3 --> 2700
	// gesamt                 abzug der fehler auf papier: 21124  

	cout << "well.... 21124" << endl;
	
	system("PAUSE");
	return 0;
}
