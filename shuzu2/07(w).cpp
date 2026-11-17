#include<iostream>
using namespace std;
int main(){
	int m,n;
	while(cin>>m>>n){
		int arr[50][50];
		for(int h=0;h<m;h++){
			for(int l=0;l<n;l++){
				cin>>arr[h][l];
			}
		}
		int a1=0,a2=0;
		int maxx=arr[0][0];
		int minn=arr[0][0];
		for(int h=0;h<m;h++){
			int maxx=arr[h][0];
			for(int l=0;l<n;l++){
				if(arr[h][l]>maxx){
					maxx=arr[h][l];
					a2=l;
					for(int h=0;h<m;h++){
						for(int l=0;l<n;l++){
							if(arr[h][a2]<minn){
								a1=h;break;
							}
						}
					}
				}
				else{
					cout<<"no"<<endl;
					break;
				}
			}
		}
		cout<<a1<<" "<<a2;
	}
	return 0;
}
