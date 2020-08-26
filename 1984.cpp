#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(int argc, char** argv)
{
	int T;
	int result;
	double sum;
	cin >> T;

	for (int test_case = 1; test_case <= T; test_case++)
	{
		result = 0;
		sum = 0;
		int arr[10] = {};
		for (int i = 0; i < 10; i++)
			cin >> arr[i];

		sort(arr, arr + 10);
		for (int i = 1; i < 9; i++)
			sum += arr[i];
		sum /= 8;
		result = round(sum);
		
		cout << "#" << test_case << " " << result << endl;
	}

	return 0;
}