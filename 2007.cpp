#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	int t;
	cin >> t;

	for (int test_case = 1; test_case <= t; test_case++) {
		string str;
		int result;
		cin >> str;

		char c = str.at(0);
		for (int i = 1; i < str.length(); i++) {
			if (str.at(i) == c) {
				for (int j = 1; j < i; j++) {
					if (str.at(j) != str.at(j + i)) {
						goto cont;
					}
				}
				result = i;
				break;
			}
		cont:;
		}

		cout << "#" << test_case << " " << result << endl;
	}

	return 0;
}