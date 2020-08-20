#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int T;
	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++) {
		int n;
		int speed = 0;
		int state, accel;
		int result = 0;
		cin >> n;

		for (int i = 0; i < n; i++) {
			cin >> state;
			if (state)
				cin >> accel;

			if (state == 1)
				speed += accel;
			else if (state == 2)
				speed -= accel;

			if (speed < 0)
				speed = 0;			

			result += speed;
		}

		cout << "#" << test_case << " " << result << endl;
	}

	return 0;
}