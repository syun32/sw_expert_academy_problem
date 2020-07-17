#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	int value;
	int result = -1;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		for (int i = 0; i < 10; i++) {
			cin >> value;
			if (value > result)
				result = value;
		}

		cout << "#" << test_case << " " << result << endl;
		result = -1;
	}
	return 0;
}