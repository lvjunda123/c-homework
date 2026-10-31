#include<iostream>
using namespace std;
int main(){
	for(int i=0;i<=1000;i++){
		if(i%3==0&&i%10==6){
			cout<<i<<endl;
		}
	}
	return 0;
}
