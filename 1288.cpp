#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int t;
	cin >> t;

	for (int test_case = 1; test_case <= t; test_case++) {
		int result;
		int n;
		int num[10] = {};
		cin >> n;

		int i = 1;
		while(1) {
			int temp = n * i;

			if (temp < 10)
				num[temp % 10]++;
			else if (temp < 100) {
				num[temp % 100 / 10]++;
				num[temp % 10]++;
			}
			else if (temp < 1000) {
				num[temp % 1000 / 100]++;
				num[temp % 100 / 10]++;
				num[temp % 10]++;
			}
			else if (temp < 10000) {
				num[temp / 1000]++;
				num[temp % 1000 / 100]++;
				num[temp % 100 / 10]++;
				num[temp % 10]++;
			}
			else if (temp < 100000) {
				num[temp / 10000]++;
				num[temp % 10000 / 1000]++;
				num[temp % 1000 / 100]++;
				num[temp % 100 / 10]++;
				num[temp % 10]++;
			}
			else if (temp < 1000000) {
				num[temp / 100000]++;
				num[temp % 100000 / 10000]++;
				num[temp % 10000 / 1000]++;
				num[temp % 1000 / 100]++;
				num[temp % 100 / 10]++;
				num[temp % 10]++;
			}
			else {
				num[temp / 1000000]++;
				num[temp % 1000000 / 100000]++;
				num[temp % 100000 / 10000]++;
				num[temp % 10000 / 1000]++;
				num[temp % 1000 / 100]++;
				num[temp % 100 / 10]++;
				num[temp % 10]++;
			}

			for (int j = 0; j < 10; j++) {
				if (num[j] == 0)
					break;
				if (j == 9 && num[j] != 0) {
					result = (i)*n;
					goto finish;
				}
 			}
			i++;
		}

	finish:;

		cout << "#" << test_case << " " << result <<  endl;
	}

	return 0;
}