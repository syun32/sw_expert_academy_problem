#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int t;
	cin >> t;

	for (int test_case = 1; test_case <= t; test_case++) {
		cout << "#" << test_case << endl;
		int n;
		int arr[11][11] = { 1,0, };
		cin >> n;

		for (int i = 1; i < n; i++) {
			arr[i][0] = 1;
			for (int j = 1; j <= i; j++) {
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j <= i; j++) {
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}

	}

	return 0;
}