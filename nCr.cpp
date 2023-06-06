#include<iostream>
using namespace std;

int factorial(int n){
    int fact =1;
    for(int i = 1;i<=n;i++){
        fact = fact * i;
    }
    //cout<<fact<<endl;
    return fact;
}

int nCr(int n, int r){
    int num = factorial(n);
    int deno = factorial(r)*factorial(n-r);
    int comb = num/deno;
    //cout<<comb<<endl;
    return comb;
}

int main(){
    int n;
    int r;
    cin>>n>>r;
    cout<<nCr(n,r)<<endl;

    return 0;
}