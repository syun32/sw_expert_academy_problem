#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; test_case++) {
		int arr[20] = {};
		int result_cnt = 0;
		int result = 0;
		int n, m;
		cin >> n >> m;
		for (int i = 0; i < n; i++) {
			int cnt = 0;
			for (int j = 0; j < m; j++) {
				cin >> arr[j];
				if (arr[j])
					cnt++;
			}
			if (cnt > result) {
				result_cnt = 1;
				result = cnt;
			}
			else if (cnt == result) {
				result_cnt++;
			}
		}

		cout << "#" << test_case << " " << result_cnt << " " << result << "\n";

	}

	return 0;
}