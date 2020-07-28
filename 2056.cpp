#include <iostream>

using namespace std;

int main(int argc, char** argv){
	int T;
	int n;
	int year, month, day;
	cin >> T;

	for (int test_case = 1; test_case <= T; test_case++) {
		cin >> n;
		year = n / 10000;
		month = n % 10000 / 100;
		day = n % 100;

		cout << "#" << test_case << " ";
		if (month < 1 || month>12 || day < 1) {
			cout << "-1" << endl;
		}
		else if (month == 4 || month == 6 || month == 9 || month == 11) {
			if (day > 30)
				cout << "-1" << endl;
			else
				printf("%04d/%02d/%02d\n", year, month, day);
		}
		else if (month == 2) {
			if (day > 28)
				cout << "-1" << endl;
			else
				printf("%04d/%02d/%02d\n", year, month, day);
		}
		else {
			if (day > 31)
				cout << "-1" << endl;
			else
				printf("%04d/%02d/%02d\n", year, month, day);
		}

	}
	
	return 0;
}