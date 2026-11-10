#include<iostream>
using namespace std;
int main()
{   int m;
	while(cin >> m){
		for(int i=m+1;;i++){
			int flag=1;
			for(int t=2;t<i;t++){
				if(i%t==0){flag=0;}
			}
			if(flag==1){cout << i<< endl;break;}
		}
	}
	return 0;
}
