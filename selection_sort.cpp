#include <iostream>
using namespace std;

int main(){
	int x=1 ,n=5;
	int A[n]={30,40,20,50,10};
	cout<<"Selection Sort"<<endl;
	for(int i=0;i<n-1;i++){
		int min=A[i],index=i;
		for(int j=i+1;j<n;j++){
			if (A[j]<min){
				min=A[j];
				index=j;
			}
		}
		A[index]=A[i];
		A[i]=min;
		cout<<"Pass"<<x++<<": ";
		for(int i=0;i<5;i++){
		cout <<A[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
