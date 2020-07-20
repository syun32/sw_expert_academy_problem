#include <iostream>
using namespace std;

int main(int argc, char** argv){
	int a, b;
	cin >> a >> b;

	if (a == 3) {
		if (b == 1)
			cout << 'B' << endl;
		else if (b == 2)
			cout << 'A' << endl;
	}
	else if (a == 2) {
		if (b == 1)
			cout << 'A' << endl;
		else if (b == 3)
			cout << 'B' << endl;
	}
	else {
		if (b == 2)
			cout << 'B' << endl;
		if (b == 3)
			cout << 'A' << endl;
	}

	return 0;
}