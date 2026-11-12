#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[100];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	// 输出第一个元素
	cout << arr[0];
	//只输出与前一个不同的
	for (int i = 1; i < n; i++) {
		if (arr[i] != arr[i - 1]) {
			cout << " " << arr[i];
		}
	}
	cout << endl;
	return 0;
}
