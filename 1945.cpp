#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int t;
	cin >> t;

	for (int test_case = 1; test_case <= t; test_case++) {
		int n;
		int result[5] = {};
		cin >> n;

		while (n > 0) {
			if (n % 2 == 0) {
				result[0]++;
				n /= 2;
			}
			else if (n % 3 == 0) {
				result[1]++;
				n /= 3;
			}
			else if (n % 5 == 0) {
				result[2]++;
				n /= 5;
			}
			else if (n % 7 == 0) {
				result[3]++;
				n /= 7;
			}
			else if (n % 11 == 0) {
				result[4]++;
				n /= 11;
			}
			else
				break;
		}

		cout << "#" << test_case << " "
			<< result[0] << " " << result[1] << " " << result[2] << " " << result[3] << " " << result[4] << endl;
	}

	return 0;
}