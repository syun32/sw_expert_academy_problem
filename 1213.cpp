#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int T = 10;

	for (int test_case = 1; test_case <= T; test_case++) {
		cin >> test_case;
		string str1, str2;
		cin >> str1;
		cin >> str2;

		int cnt = 0;
		int temp;
		temp = str2.find(str1);
		while (temp != -1) {
			cnt++;
			temp = str2.find(str1, temp + str1.length());
		}

		cout << "#" << test_case << " " << cnt << "\n";

	}

	return 0;
}