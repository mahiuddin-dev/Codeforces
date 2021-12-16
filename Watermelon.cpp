#include <iostream>

using namespace std;

int main(){
    
    short int n;

    cin>>n;
    
    if ((n & 1) == 0 && n > 2){
        cout<< "YES" <<endl;
    }else cout<< "NO" <<endl;

    return 0;
}
