#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
using namespace std;
void bs(int a[],int n,int target){
	int i=0,j=n-1;
	int mid=(i+j)/2;
	while(i<j){
      mid=(i+j)/2;
     if(a[mid]>a[mid+1] and a[mid]<a[mid-1]){
     	int k=a[mid-1];
     	break;
     }
     else if()
	}
}

int main(){
	int n; cin>>n;
	int *a=new int[n];

	for(int i=0;i<n;i++) cin>>a[i];


	return 0;
}