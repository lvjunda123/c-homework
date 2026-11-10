#include<iostream>
using namespace std;
int main(){
	for(int b=0;3*b<=100;b++){
		for(int m=0;2*m<=100-3*b;m++){
			for(int s=0;s/2<=100-3*b-2*m;s+=2){
				if(s+b+m==100&&3*b+2*m+s/2==100){
					cout<<b<<" "<<m<<" "<<s<<endl;
				}
			}
		}
	}
	return 0;
}
