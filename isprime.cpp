#include<iostream>
using namespace std;

void isPrime(int num1){
    for(int i = 2;i<=num1/2;i++){
        if(num1 % i != 0){
            continue;
        }
        else{
            cout<<"Number is not prime"<<endl;
            return ;
        }
    }
    cout<<"Number is prime"<<endl;
}

int main()
{

    int a;
    cin>>a;
    isPrime(a);
 
    return 0;
}