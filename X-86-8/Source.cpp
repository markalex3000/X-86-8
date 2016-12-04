// Read an integer and detemrine if odd or even

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

inline void keep_window_open() { char ch; cin >> ch; }

inline void simple_error(string s)	// write ``error: s and exit program
{
	cerr << "error: " << s << '\n';
	keep_window_open();		// for some Windows environments
	exit(1);
}

int main() {
	cout << "Please enter a few integers separated by spaces: ";

	int temp{ 0 };

	while (cin >> temp)
	{
		if (temp % 2 == 0) cout << temp << " is an even number\n";
		else cout << temp << " is an odd number\n";
	}

	cout << "\n We are done here...\n";
	keep_window_open();
	return 0;

}