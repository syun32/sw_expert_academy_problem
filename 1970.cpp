#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	int T;
	int n;
	cin >> T;

	for (int test_case = 1; test_case <= T; test_case++)
	{
		cin >> n;
		int arr[8] = {};

		while (n >= 10) {
			if (n >= 50000) {
				arr[0]++;
				n -= 50000;
			}
			else if (n >= 10000) {
				arr[1]++;
				n -= 10000;
			}
			else if (n >= 5000) {
				arr[2]++;
				n -= 5000;
			}
			else if (n >= 1000) {
				arr[3]++;
				n -= 1000;
			}
			else if (n >= 500) {
				arr[4]++;
				n -= 500;
			}
			else if (n >= 100) {
				arr[5]++;
				n -= 100;
			}
			else if (n >= 50) {
				arr[6]++;
				n -= 50;
			}
			else if (n >= 10) {
				arr[7]++;
				n -= 10;
			}
			else
				cout << "error!" << endl;
		}
		
		cout << "#" << test_case << endl;
		for (int i = 0; i < 8; i++)
			cout << arr[i] << " ";
		cout << endl;
	}

	return 0;
}