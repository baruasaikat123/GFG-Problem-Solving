#include<bits/stdc++.h>
using namespace std;
void subarray(int arr[],int n,int m){
    
    int x = arr[m-1]-arr[0];
    for(int i=1;i<n-m+1;i++){
        
        int y = arr[m+i-1]-arr[i];
        x = min(x,y);
    }
    cout << x << endl;
}
int main()
 {
	
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
	    
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int j=0;j<n;j++){
	        
	        cin >> arr[j];
	    }
	    sort(arr,arr+n);
	    int m;
	    cin >> m;
	    subarray(arr,n,m);
	    
	}
	return 0;
}