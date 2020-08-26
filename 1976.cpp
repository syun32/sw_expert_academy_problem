#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; test_case++) {
		int a_hour, a_min;
		int b_hour, b_min;
		int result_hour, result_min;
		cin >> a_hour >> a_min >> b_hour >> b_min;

		result_hour = a_hour + b_hour;
		result_min = a_min + b_min;

		if (result_min > 59) {
			result_hour++;
			result_min -= 60;
		}

		if (result_hour > 12)
			result_hour -= 12;

		cout << "#" << test_case << " " << result_hour << " " << result_min << endl;
	}

	return 0;
}