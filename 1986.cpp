#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int t;
	cin >> t;

	for (int test_case = 1; test_case <= t; test_case++) {
		int n;
		int result = 0;
		cin >> n;

		int sign = 1;
		for (int i = 1; i <= n; i++) {
			result += i * sign;
			sign *= -1;
		}

		cout << "#" << test_case << " " << result << endl;
	}

	return 0;
}