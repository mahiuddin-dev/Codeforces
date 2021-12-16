#include <iostream>
#include <string.h>

using namespace std;

int main(){
    string word;
    short int n;
    int size;
    cin >> n; 

    while(n--){
        cin >> word;
        size = word.size();
        
        if(size > 10) cout<< word[0]<< size - 2 << word[size-1] << endl;
        else cout<< word <<endl;
    }   
    return 0;
}

