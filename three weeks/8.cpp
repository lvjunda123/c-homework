#include<iostream>
using namespace std;
int main(){
	for(int m=0;5*m<=100;m++){
		for(int w=0;w*3<=100-5*m;w++){
			for(int k=0;k/3<=100-5*m-3*w;k+=3){
				if(w+k+m==100&&5*m+3*w+k/3==100){
					cout<<m<<" "<<w<<" "<<k<<endl;
				}
			}
		}
	}
}
