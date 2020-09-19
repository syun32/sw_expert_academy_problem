#include <iostream>
#include <cmath>
using namespace std;

bool isPalindrome(double n) {
	int num = n / 1;
	if (n - num != 0)
		return false;

	if (num < 10) {
		return true;
	}
	else if (num >= 10 && num < 100) {
		if (num / 10 == num % 10)
			return true;
		else
			return false;
	}
	else if (num >= 100 && num < 1000) {
		if (num / 100 == num % 10)
			return true;
		else
			return false;
	}
	else
		return false;
}

int main(int argc, char *argv[]) {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; test_case++) {
		int result = 0;
		int a, b;
		double temp = 0;
		cin >> a >> b;
		for (int i = a; i <= b; i++) {
			if (isPalindrome(i)) {
				temp = sqrt(i);
				if (isPalindrome(temp) && temp != 0)
					result++;
			}
		}
		cout << "#" << test_case << " " << result << "\n";
	}

	return 0;
}