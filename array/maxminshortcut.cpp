#include<iostream>

using namespace std;
int getmin(int arr[] ,int size)
{
    int mini = INT16_MAX;

    for (int i = 0; i < size; i++)
    {
      mini=min(mini,arr[i]);
        
    }
    cout<< mini;
     return mini;
}

int getmax(int arr[] ,int size)
{
    int maxi = INT16_MIN;

    for (int i = 0; i < size; i++)
    {

        maxi=max(maxi,arr[i]);
    //    if (max<arr[i])
    //    {
    //     /* code */max=arr[i];
    //    }
        
    }
    cout<< maxi;
     return maxi;
}

int main()
{
    int arr[5];

    for(int i=0; i<5;i++)
    {
        cin>> arr[i];
    }

    getmax(arr,5);
    getmin(arr,5);
}