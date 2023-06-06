#include<iostream>
using namespace std;

bool EvenOdd(int num1){

    if(num1&1){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int a;
    cin>>a;
    if(EvenOdd(a)){
        cout<<"The number is odd"<<endl;
    }
    else{
        cout<<"The number is even"<<endl;
    }
}