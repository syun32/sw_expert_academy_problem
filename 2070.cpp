#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	int arr[2] = {};

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		for (int i = 0; i < 2; i++) {
			cin >> arr[i];
		}

		cout << "#" << test_case << " ";

		if (arr[0] > arr[1])
			cout << ">" << endl;
		else if (arr[0] == arr[1])
			cout << "=" << endl;
		else if (arr[0] < arr[1])
			cout << "<" << endl;

	}
	return 0;
}