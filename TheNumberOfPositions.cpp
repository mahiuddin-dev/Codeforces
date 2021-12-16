#include <iostream>

using namespace std;

int main(){
    short int n,a,b;

    cin >> n >> a >> b;

    cout<< min(n-a,b+1) <<endl;
    
    return 0;
}