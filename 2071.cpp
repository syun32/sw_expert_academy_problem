#include<iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	int arr[10] = {};
	double result = 0;
	
	cin >> T;
	
	for (test_case = 1; test_case <= T; ++test_case)
	{
		for (int i = 0; i < 10; i++) {
			cin >> arr[i];
			result += arr[i];
		}
		result = round(result / 10);
		cout << "#" << test_case << " " << result << endl;
		result = 0;
	}
	return 0;
}