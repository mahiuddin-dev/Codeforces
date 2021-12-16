// #include <iostream>

// using namespace std;

// int main(){
//     short int n,i;
//     cin >> n;
    
//     // for(i=1; i < n; i++){
//     //     cout<<" "<<i;
//     // }cout<<endl;

//     //  for (int i = 1; i <= n; ++i){
//     //     cout << " " << i;
//     // }cout<<endl;
//     short int m = n;
//     while(m--){
//         cout<<" "<<n;
//         n--;
//     }cout<<endl;

//     return 0;
// }


#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << n;
    for (int i = 1; i < n; ++i)
    {
        cout << " " << i;
    }
    cout << endl;
    return 0;
}