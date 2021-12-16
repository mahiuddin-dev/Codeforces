#include <iostream>

using namespace std;

int main(){
    short int n;
    cin>> n ;
    bool a,b,c;
    short int count = 0;
    while(n--){
        cin >> a >> b >> c;
        if( (a == 1 &&  b == 1 && c == 1) || (a ==1 && b == 1) || (a ==1 && c == 1)  || (c ==1 &&  b == 1)) count++;
    }
    cout << count <<endl;
    return 0;
}