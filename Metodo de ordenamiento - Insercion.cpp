#include<iostream>
using namespace std;

int main(){
	int num[5],posic,aux;
	
	for(int i=0;i<5;i++){
		cin>>num[i];
	}	
	for(int i=0;i<5;i++){
		posic=i;
		aux=num[i];	
		while((posic>0)&&(num[posic-1]>aux)){
			num[posic]=num[posic-1];
			posic--;
		}
		num[posic]=aux;
	}
	for(int i=0;i<5;i++){
		cout<<num[i]<<" ";
	}
	return 0;
}
