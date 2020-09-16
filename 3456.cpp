#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; test_case++) {
		int result = 0;
		int a, b, c;
		cin >> a >> b >> c;

		if (a == b)
			result = c;
		else if (a == c)
			result = b;
		else
			result = a;

		cout << "#" << test_case << " " << result << "\n";
	}

	return 0;
}