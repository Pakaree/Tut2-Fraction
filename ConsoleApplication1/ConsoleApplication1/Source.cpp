#include <iostream>
using namespace std;

int raisepower(int base, int exp) {
	int p = 1;
	int i;
	for (i = 0; i < exp; i++) {
		p = p*base;
	}
	return p;
}
int main() {
	int threeexpfour = raisepower(3, 4);
	cout << "" << threeexpfour << endl;
}
