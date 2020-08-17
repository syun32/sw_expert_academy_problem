#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {

	for (int test_case = 1; test_case <= 10; test_case++) {
		int dump;
		int result;
		int arr[100] = {};
		cin >> dump;

		for (int i = 0; i < 100; i++)
			cin >> arr[i];

		sort(arr, arr + 100);
		for (int i = 0; i < dump; i++) {
			arr[99]--;
			arr[0]++;
			sort(arr, arr + 100);
		}

		result = arr[99] - arr[0];
		cout << "#" << test_case << " " << result << endl;
	}

	return 0;
}