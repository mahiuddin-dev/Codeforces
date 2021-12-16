// #include <bits/stdc++.h>

// using namespace std;

// int main(){
//     int n,i,cnt=0;

//     cin >> n;
//     int a[n];

//     for(i=0;i<n;i++) cin >> a[i];

//     int maxx=a[0],minn=a[0];

//     for(i=0;i<n;i++){
//         if(a[i]>maxx){
//             maxx=a[i];
//             cnt++;
//         }
//         if(a[i]<minn){
//            minn=a[i];
//            cnt++;
//         }
//     }
//     printf("%d\n",cnt);

//     return 0;
// }


#include <iostream>

using namespace std;

int main(){
    short int n;
    int points;
    cin >> n >> points;

    int min(points), max(points), amazing(0);
    
    while (--n){
        cin >> points;
        if (points < min){
            min = points;
            ++amazing;
        }
        if (points > max){
            max = points;
            ++amazing;
        }
    }
    cout << amazing << endl;
    return 0;
}