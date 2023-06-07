#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    //to check whether 1 is present in the array or not
    bool key = false;
    int a = 1;
    for(int i=0;i<10;i++){
        if(a == arr[i]){
            key = true;
             if(key == true){
            cout<<"Number found at "<<arr[i]<<endl;
             }
            else{
            cout<<"Number not found";
            }
    
        }
    }
   


    return 0;
}