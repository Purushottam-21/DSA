#include<bits/stdc++.h>

using namespace std;

int main(){

int n;
cin>>n;
vector<int>arr;
while(n--){
	int a;
	cin>>a;
	arr.push_back(a);
}

for(int i=0;i<arr.size()-1;i++){
	int miniindex = i;
	for(int j=i;j<=arr.size()-1;j++){
		if(arr[j]<arr[miniindex]){
			miniindex = j;
			
		}
	}
	swap(arr[i],arr[miniindex]);
}


for(auto it:arr){
	cout<<it<<" ";
}

return 0;
}


