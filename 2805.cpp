#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; test_case++) {
		int result = 0;
		int n;
		int arr[50][50] = {};
		cin >> n;
		string str;
		for (int i = 0; i < n; i++) {
			cin >> str;
			for (int j = 0; j < n; j++) {
				arr[i][j] = str.at(j) - 48;
			}
		}

		for (int i = 0; i < n / 2; i++) {
			for (int j = n / 2 - i; j <= n / 2 + i; j++) {
				result += arr[i][j];
			}
		}
		for (int i = n / 2; i >= 0; i--) {
			for (int j = 0 + n / 2 - i; j <= n / 2 + i; j++) {
				result += arr[n - 1 - i][j];
			}
		}
		cout << "#" << test_case << " " << result << "\n";
	}

	return 0;
}