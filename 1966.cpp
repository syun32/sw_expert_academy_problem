#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
	int T;
	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++) {
		int arr[50] = {};
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> arr[i];

		sort(arr, arr + n);

		cout << "#" << test_case << " ";
		for (int i = 0; i < n; i++)
			cout << arr[i] << " ";
		cout << endl;
	}

	return 0;
}