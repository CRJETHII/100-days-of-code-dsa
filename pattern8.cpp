#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        cout<<i;
        for (int j=1; j<i; j++)
        {
            cout<<"*"<<i;
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        cout<<i;
        for(int j=i;j>1;j--){
            cout<<"*"<<i;
        }
        cout<<endl;
    }
    return 0;
}