#include<iostream>
using namespace std;
int main(){
	int h;
	while(cin >> h){    
		for(int i = 1; i <= h; i++){
			for(int j = 1; j <= i; j++){
				printf("%2d*%d=%2d", i, j, i*j);
			}
			printf("\n");
		}
	}
	return 0;
}
