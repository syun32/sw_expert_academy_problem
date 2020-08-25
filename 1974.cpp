#include <iostream>
using namespace std;

int arr[9][9] = {};
bool row[9], col[9], sqr[9];

void initArray() {
	for (int i = 0; i < 9; i++) {
		row[i] = false;
		col[i] = false;
		sqr[i] = false;
	}
}

int main(int argc, char** argv) {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; test_case++) {
		int result = 1;
		for (int i = 0; i < 9; i++)
			for (int j = 0; j < 9; j++)
				cin >> arr[i][j];

		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				row[arr[i][j] - 1] = true;
				col[arr[j][i] - 1] = true;
			}

			for (int test = 0; test < 9; test++) {
				if (!row[test] || !col[test]) {
					result = 0;
					goto ResultIsFalse;
				}
			}
			initArray();
		}

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				for (int x = 0; x < 3; x++)
					for (int y = 0; y < 3; y++)
						sqr[arr[x + 3 * i][y + 3 * j] - 1] = true;

				for (int test = 0; test < 9; test++) {
					if (!sqr[test]) {
						result = 0;
						goto ResultIsFalse;
					}
				}
			}

			initArray();
		}

	ResultIsFalse:;
		cout << "#" << test_case << " " << result << endl;
	}

	return 0;
}