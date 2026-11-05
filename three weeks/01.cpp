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


