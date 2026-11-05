/*#include<iostream>
using namespace std;
int main(){
	int m,p,q,k,flag1,flag2;
	cin>>m;
	for (p = 3; p <= m / 2; p = p + 2) {
		flag1 = 1;  // 假设 p 是素数
		// 判断 p 是不是素数
		for (k = 2; k * k <= p; k++) {
			if (p % k == 0) {
				flag1 = 0;  // 有因子，p 不是素数
				break;
			}
		}
			if (flag1 == 0) {
			continue;
		}
		q = m - p;
		flag2 = 1;
		// 判断 q 是不是素数
		for (k = 2; k * k <= q; k++) {
			if (q % k == 0) {
				flag2 = 0;
				break;
			}
		}
			if (flag2 == 1) {
			printf("%d=%d+%d\n", m, p, q);
			break;
		}
	}
	return 0;
}*/


#include<iostream>
using namespace std;
int main(){
	int m;
	cin>>m;
	for(int p=3;p<m;p+=2){
		int flag=1;
		int flag1=1;
		for(int k=2;k<p;k++){
			if(p%k==0){
				flag=0;break;
			}
		}
		if(flag==0){
			continue;
		}
		int q=m-p;
		for(int k=2;k<q;k++){
			if(q%k==0){
				flag1=0;
			}
		}
		if(flag1==1){
			cout<<m<<"="<<p<<"+"<<q<<endl;
			;
		}
	}
	return 0;
}
