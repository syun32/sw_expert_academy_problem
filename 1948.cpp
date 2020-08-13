#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int t;
	cin >> t;

	for (int test_case = 1; test_case <= t; test_case++) {
		int result = 0;
		int s_month, s_day, f_month, f_day;
		cin >> s_month >> s_day >> f_month >> f_day;

		int temp = 0;
		for (int i = s_month; i <= f_month; i++) {
			switch (i) {
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				result += 31;
				if(i==f_month)
					result -= (31 - f_day);
				break;
			case 2:
				result += 28;
				if (i == f_month)
					result -= (28 - f_day);
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				result += 30;
				if (i == f_month)
					result -= (30 - f_day);
				break;
			}
		}
		result -= s_day;

		cout << "#" << test_case << " " << ++result << endl;
	}

	return 0;
}