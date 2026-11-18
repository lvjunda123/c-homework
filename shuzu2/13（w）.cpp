#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
	int arr[100][100];
    int arr2[100][100];
	for(int a=0;a<n;a++){
		for(int a2=0;a2<n;a2++){
			cin>>arr[a][a2];
		}
	}
	for(int h=0;h<n;h++){
		for(int l=0;l<n;l++){    
			int h2,l2;
			h2=l;       //以后有下标交换就这么写吧，要不理解不了
			l2=n-1-h;
			arr2[h2][l2]=arr[h][l]; //由推理可知，新的行=原来的列 新的列=n-1-原来的行
		}
	}
	for(int a=0;a<n;a++){
		for(int a2=0;a2<n;a2++){
			cout<<arr2[a][a2]<<" ";
		}
		cout<<endl;
	}
}
	return 0;
}
