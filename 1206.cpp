#include <iostream>
using namespace std;

int main(int argc, char** argv) {

	for (int test_case = 1; test_case <= 10; test_case++) {
		int tc;
		int result = 0;
		int arr[1000] = {};
		cin >> tc;

		for (int i = 0; i < tc; i++)
			cin >> arr[i];

		for (int i = 2; i < tc - 2; i++) {
			if (arr[i]) {
				int j = 1;
				while (1) {
					if (arr[i - 2] <= arr[i] - j && arr[i + 2] <= arr[i] - j
						&& arr[i - 1] <= arr[i] - j && arr[i + 1] <= arr[i] - j)
						result++;
					else
						break;
					j++;
				}
			}
		}

		cout << "#" << test_case << " " << result << endl;
	}

	return 0;
}