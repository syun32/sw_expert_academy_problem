#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; test_case++) {
		int arr[5] = {};
		int result = 0;
		for (int i = 0; i < 5; i++) {
			cin >> arr[i];
			if (arr[i] < 40)
				result += 40;
			else
				result += arr[i];
		}
		result /= 5;

		cout << "#" << test_case << " " << result << "\n";

	}

	return 0;
}