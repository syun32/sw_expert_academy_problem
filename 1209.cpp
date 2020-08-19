#include <iostream>
using namespace std;

int main(int argc, char** argv) {

	for (int test_case = 1; test_case <= 10; test_case++) {
		cin >> test_case;

		int result = 0;
		int arr[100][100] = {};
		int col[100] = {};
		int row[100] = {};
		int diag[2] = {};

		for (int i = 0; i < 100; i++) {
			for (int j = 0; j < 100; j++) {
				cin >> arr[i][j];
				col[i] += arr[i][j];
				row[j] += arr[i][j];
				if (i == j)
					diag[0] += arr[i][j];
				if (j == 99 - j)
					diag[1] += arr[i][j];
			}
		}

		for (int i = 0; i < 100; i++) {
			if (col[i] > result)
				result = col[i];
			if (row[i] > result)
				result = row[i];
		}

		if (diag[0] > result)
			result = diag[0];
		if (diag[1] > result)
			result = diag[1];

		cout << "#" << test_case << " " << result << endl;
	}

	return 0;
}