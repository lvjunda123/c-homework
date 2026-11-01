#include<iostream>
using namespace std;
int main(){
	int n=50;
	for(int a10=0;a10*10<=n;a10++){
		for(int a5=0;a5*5<=n-a10*10;a5++){
			if(a10*10+a5*5==n){
				cout<<a10<<" "<<a5<<endl;
			}
		}
	}
}
