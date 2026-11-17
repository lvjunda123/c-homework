#include <iostream>
using namespace std;
int main(){
    int arr[10] = {};
	int ans = -1;
	for (int a = 0; a < 10; a++) {
		cin >> arr[a];
		if (arr[a] % 2 != 0) {
			ans = a;
			break;
		}
	}
	cout << ans << endl;
	return 0;
}
