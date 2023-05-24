#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i = 1;
    int j = 1;
   
    while(i<=n){
         int count = 1;
        while(count<=n){
            cout<<j;
            j = j+1;
            count = count +1;
        }
        cout<<endl;
        i = i+1;
        
    }

    return 0;
}