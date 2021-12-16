// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int n,i,j,Count=0;
//     bool up[200],low[200],left[200],right[200];
//     cin>>n;

//     int x[n],y[n];

//     for(i=0;i<n;i++) cin>>x[i]>>y[i];
    
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             if(x[i]==x[j] && y[i]<y[j]) up[i]=true;
//             else if(x[i]==x[j] && y[i]>y[j]) low[i]=true;
//             else if(x[i]>x[j] && y[i]==y[j]) left[i]=true;
//             else if(x[i]<x[j] && y[i]==y[j]) right[i]=true;
//         }
//     }
//     for(i=0;i<n;i++){
//         if(low[i]==true && up[i]==true && right[i]==true && left[i]==true) Count++;
//     }

//     cout<<Count<<endl;

//     return 0;
// } 


#include <iostream>

using namespace std;

int main(){
    int n, answer(0),i,bit,j;
    cin >> n;
    
    int x[n],y[n];

    for ( i = 0; i < n; ++i) cin >> x[i] >> y[i];
    

    for ( i = 0; i < n; ++i){
         bit = 15;
        for ( j = 0; j < n && bit != 0; ++j){
            if (x[j] == x[i]){
                if (y[j] < y[i]){
                    bit &= (15 - 1);
                }
                if (y[j] > y[i]){
                    bit &= (15 - 2);
                }
            }
            if (y[j] == y[i]){
                if (x[j] < x[i]){
                    bit &= (15 - 4);
                }
                if (x[j] > x[i]){
                    bit &= (15 - 8);
                }
            }
        }
        if (bit == 0) answer += 1;
        
    }
    cout << answer << endl;
    return 0;
}