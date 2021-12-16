#include <iostream>

using namespace std;


int main(){
    
    short int n,i;
    cin>>n;
    int are[n];

    for(i=0; i<n; i++) cin>>are[i];
    

    int m = 1001, d;

    d = abs(are[0] - are[n-1]);
    m = min(m,d);

    int index1 = 1,index2 = n;

    for( i=0; i<n; i++){
        d = abs(are[i] - are[i+1]);
        if(m > d){
            m = d;
            index1 = i+1;
            index2 = i+2;
        }
    }
    cout<<index1<<" "<<index2<<endl;

    return 0;
}