#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int are[4],i,count = 3;
    for( i=0;i<4;i++) cin >> are[i];
    
    sort(are,are+4);

    for( i=0;i<3; i++){
        if(are[i] != are[i+1]) count--;
    }
    cout<< count <<endl;
}