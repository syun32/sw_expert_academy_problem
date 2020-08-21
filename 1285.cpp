#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; test_case++) {
		int n;
		int arr[1000];
		int cmp = 100000;
		int result = 0;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			if (cmp > abs(arr[i]))
				cmp = abs(arr[i]);
		}

		for (int i = 0; i < n; i++)
			if (abs(arr[i]) == cmp)
				result++;

		cout << "#" << test_case << " " << cmp << " " << result << endl;
	}

	return 0;
}