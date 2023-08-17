#include<iostream>
using namespace std;

int sum(int arr[],int n){
    int add=0;
    for(int i=0;i<n;i++){
        add=add+arr[i];

    }
    cout<< add;
   

   
}

int main()
{
    int arr[5];
    cout << "intput";

    for(int i=0;i<5;i++)
    {
        cin >> arr[i];
    }
    sum(arr,5); 
    
   
}