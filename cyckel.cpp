#include <iostream>

using namespace std;

int main(){
    int n, m, b, max=0, count=1,i,j,x;
    cin >> n;
    int a[n];
    for ( i = 0; i < n; ++i) cin >> a[i];
    
    cin >> m;
    for ( i = 0; i < m; ++i){
        cin >> b;
        for ( j = 0; j < n; ++j){
            if (b % a[j] == 0){
                 x = b / a[j];
                if (x > max){
                    max = x;
                    count = 1;
                }
                else if (x == max){
                    count += 1;
                }
                break;
            }
        }
    }
    cout << count << endl;
    return 0;
}