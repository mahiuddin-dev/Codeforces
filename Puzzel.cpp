#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    // short int n, m,i;
    // cin >> n >> m;
    // short int are[i];

    // for (int i = 0; i < m; ++i) cin >> are[i];
    
    // sort(are, are + m);

    // short int least = are[n-1] - are[0];

    // for ( i = 1; i <= m - n; ++i){
    //     if (are[i+n-1] - are[i] < least){
    //         least = are[i+n-1] - are[i];
    //     }
    // }

    // cout << least << endl;

    	int n,m,i;
        cin>>n>>m;
        int mini=100000;
        int arr[m];
        for( i=0;i<m;i++){
            cin>>arr[i];
        }
        sort(arr,arr+m);
        for( i=n;i<=m;i++){
            mini=min(mini,abs(arr[i-1]-arr[i-n]));
        }
        cout<<mini<< endl;


    return 0;
}