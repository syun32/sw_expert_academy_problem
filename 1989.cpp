#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	int t;
	cin >> t;

	for (int test_case = 1; test_case <= t; test_case++) {
		string str;
		int result = 0;
		cin >> str;

		for (int i = 0; i < str.length() / 2; i++) {
			if (str.at(i) != str.at(str.length() - i - 1)) {
				break;
			}
			else {
				if (i == str.length() / 2 - 1)
					result = 1;
			}
		}

		cout << "#" << test_case << " " << result << endl;
	}

	return 0;
}