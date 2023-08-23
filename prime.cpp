#include <iostream>
using namespace std;
int main(){
	int i,n,count=0;
	cin>>n;
	if(n==0 || n==1){
		cout<<"enter a valid number\n";
	}
	else{
	for (i=2;i<=n/2;i++)
	{
		if(n%i==0){
			count=count +1;
		}
		
	}
	if (count==0){
		cout<<"prime";
	}
	else{
		cout<<"composite";
	}}
	
	return 0;
}
