#include <iostream>
using namespace std;

int main() {
	int so, x = 1;
	cout << "Bang cuu chuong so: ";
	cin >> so;
	for (x = 1; x <= 10; x++) {
		cout << so << " * " << x << " = " << so * x << "\n";
	}
	return 0;
}