#include <iostream>

using namespace std;

int main() {
	int i = 0;
	int j = 10;
	
	cout << "i = " << i << " - j = " << j << "\n";
	i = 5 + ++j;
	cout << "i = " << i << " - j = " << j << "\n";
	
	i = 5 + j++;
	cout << "i = " << i << " - j = " << j << "\n";
    return 0;
}