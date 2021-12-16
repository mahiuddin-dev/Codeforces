#include <iostream>

using namespace std;

int main(){
    
    int k,l,m,n,d,count = 0;

    cin >> k >> l >> m >> n >> d;

    if(k == 1) count = d;
    else {
        int i;
        for( i = 2; i <= d; i++){
            if(i % k == 0 || i%l== 0 || i%m == 0 || i%n == 0) count++;
        }
    }
    
    cout<< count <<endl;

    return 0;
}