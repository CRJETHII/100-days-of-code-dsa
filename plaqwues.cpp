#include<iostream>
using namespace std;
int main()
{
    int M,n,e,w;
    int k=5;
    cout<<" Please enter the total number of trees";
    cin>>M;
    cout<<" Please enter the number of fruits required";
    cin>>n;
    cout<<" Please enter the number of fruits in east";
    cin>>e;
    cout<<" Please enter the number of fruits in west";
    cin>>w;

    if(M<=n*k){
        cout<<"Problem solved";
    }
    else if (M<=((n*k)+e+w)){
        cout<<"Problem solved";
    }
    else(
        return -1;
    )
    

 
    return 0;
}