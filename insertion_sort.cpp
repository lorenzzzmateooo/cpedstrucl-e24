#include <iostream>
using namespace std;

int main(){
	int x=1 ,n=5,j;
	int A[n]={40,30,20,50,10};
	cout<<"Insertion Sort"<<endl;
	for(int i=1;i<n;i++){
		int tmp=A[i];
		j=i-1;
		while(j>=0 && tmp<A[j]){
			A[j+1]=A[j];
			j=j-1;
		}
		A[j+1]=tmp;
		cout<<"Pass"<<x++<<": ";
		for(int i=0;i<n;i++){
		cout <<A[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
