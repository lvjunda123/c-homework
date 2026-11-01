#include<iostream>
using namespace std;
int main(){
	int n=100;
	for(int a20=1;a20*20<n;a20++){
		for(int a10=1;a10*10<n-a20*20;a10++){
			for(int a5=1;a5*5<=n-a20*20-a10*10;a5++){
				if(20*a20+10*a10+5*a5==n){
					cout<<a20<<" "<<a10<<" "<<a5<<endl;
				}
			}
		}
	}
	return 0;
}
