#include <iostream>
using namespace std;
int main()
{
	int n;
    while (cin >> n) {
		int arr[100] = {};
		for (int a = 0; a < n; a++) {
			cin >> arr[a];
		}
		int count[11] = {};
		// 统计每个数出现的次数
		for (int a = 0; a < n; a++) {
			count[arr[a]]++;
		}
		int max = count[0];
		int b = 0;
		// 从 0 到 10 找出现次数最多的数
		for (int i = 1; i <= 10; i++) {
			if (count[i] > max) {
				max = count[i];
				b = i;
			}
		}
		cout << b << endl;
	}
	return 0;
}
