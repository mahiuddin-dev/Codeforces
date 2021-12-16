#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int main(){
    int size,i,count=1;
    char s[101];
    cin >> s;

    size=strlen(s);

    sort(s,s+size);
    --size;
    for(i=0;i<size;i++){
        if(s[i]!=s[i+1]) count++;  
    }

    count % 2 == 1 ? cout<< "IGNORE HIM!" <<endl:cout<< "CHAT WITH HER!" <<endl;

    return 0;
}

