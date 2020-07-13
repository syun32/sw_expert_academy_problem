#include <iostream>
using namespace std;

int main() {
	int t;
	int arr[10] = {};
	int result = 0;
	cin >> t;

	for (int i = 0; i < t; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> arr[j];
			if (arr[j] % 2 == 1)
				result += arr[j];
		}

		cout << "#" << i + 1 << " " << result << endl;
		result = 0;
	}
	return 0;
}