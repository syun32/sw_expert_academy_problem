#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int t;
	cin >> t;

	for (int test_case = 1; test_case <= t; test_case++) {
		int result = 0;
		int n, m;
		int max, min;
		int a[20] = {};
		int b[20] = {};
		cin >> n >> m;

		if (n < m) {
			for (int i = 0; i < n; i++)
				cin >> a[i];
			for (int i = 0; i < m; i++)
				cin >> b[i];
			max = m;
			min = n;
		}
		else {
			for (int i = 0; i < n; i++)
				cin >> b[i];
			for (int i = 0; i < m; i++)
				cin >> a[i];
			max = n;
			min = m;
		}

		int temp = 0;
		for (int i = 0; i <= max - min; i++) {
			for (int j = 0; j < min; j++) {
				temp += a[j] * b[j + i];
			}
			result = (temp > result) ? temp : result;
			temp = 0;
		}

		cout << "#" << test_case << " " << result << endl;
	}

	return 0;
}