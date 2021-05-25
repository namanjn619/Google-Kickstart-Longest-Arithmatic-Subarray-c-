#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	int length = 1;
	int diff = 0;
	int currentdiff;
	int max=0;
	for(int i=0; i<n; i++){
		
		currentdiff = arr[i]-arr[i+1];
		
		if(currentdiff == diff){
			length++;
		}
		
		if(currentdiff != diff and length==1){
			diff = currentdiff;
			length++;
		}
		
		if(currentdiff != diff and length!=1){
			if(length>=max){
				max = length;
			}
			length=2;
			diff = currentdiff;
		}
	}
	cout<<"Max Length: "<<max;
	return 0;
}
