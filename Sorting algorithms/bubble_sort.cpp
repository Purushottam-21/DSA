#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;
	int number = 0;
	vector<int>arr;
	while(number<n){
		int a;
		cin>>a;
		arr.push_back(a);
		number++;
	}




	for(int i=n-1;i>=0;i--){
		for(int j=0;j<=i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}

	for(auto it : arr){
		cout<<it<<" ";
	}





	return 0;
}