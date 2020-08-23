#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; test_case++) {
		int n;
		int arr[7][7] = {};
		cin >> n;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				cin >> arr[i][j];

		cout << "#" << test_case << endl;

		for (int i = 0; i < n; i++) {
			for (int x = n - 1; x >= 0; x--)
				cout << arr[x][i];
			cout << " ";

			for (int x = n - 1; x >= 0; x--)
				cout << arr[n - 1 - i][x];
			cout << " ";

			for (int x = 0; x < n; x++)
				cout << arr[x][n - 1 - i];
			
			cout << endl;
		}
	}

	return 0;
}