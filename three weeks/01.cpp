#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++){
		int sum=0;
		for(int y=1;y<i;y++){
			
			if(i%y==0){
				sum=sum+y;
			}
			
		}
		if(sum==i){
			cout<<i<<"=";
			int flag=1;
			for(int y1=1;y1<i;y1++){
				if(i%y1==0){
					if(flag==1){
					cout<<y1;
					flag=0;
					}
					else{
						cout<<"+"<<y1;
					}
					
				}
			}
			cout<<endl;
		}
		
	}
	return 0;
}

/*#include <iostream>
using namespace std;

int main()
{
	int n;
	
	while (cin >> n) {
		for (int i = 1; i <= n; i++) {
			int sum = 0;
			
			// 找 i 的所有真因子并累加
			for (int y = 1; y < i; y++) {
				if (i % y == 0) {
					sum = sum + y;
				}
			}
			
			// 所有因子找完后，判断是否为完数
			if (sum == i) {
				cout << i << "=";
				
				int first = 1;
				
				// 输出因子
				for (int y = 1; y < i; y++) {
					if (i % y == 0) {
						if (first == 1) {
							cout << y;
							first = 0;
						} else {
							cout << "+" << y;
						}
					}
				}
				
				cout << endl;
			}
		}
	}
	
	return 0;
}*/
