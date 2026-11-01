#include<iostream>
using namespace std;
int main(){
	int n=36;
	for(int m=0;m*3<=n;m++){
		for(int k=0;k/2<=n-m*3;k+=2){
			for(int w=0;w*1<=n-m*3-k*0.5;w++){
				if(3*m+w*1+k/2==36&&m+w+k==36){
					cout<<m<<" "<<w<<" "<<k<<endl;
				}
			}
		}
	}
	return 0;
}
