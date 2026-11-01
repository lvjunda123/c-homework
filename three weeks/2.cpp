#include<iostream>
using namespace std;
int main(){
	int m;
	cin>>m;
	for(int n=6;n<m;n+=2){
		for(int a=2;a<m;a++){
			int flag=1;
			for(int t=2;t<a;t++){
				if(a%t=0){
					flag=0;
					break;
				}
			}
		}
		int b=m-a;
		for(int t2=2;t2<b;t2++){
			 int flag2=1;
			if(b%t2==0){
				flag2=0;
			}
		}
	}
}

