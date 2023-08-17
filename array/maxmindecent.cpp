#include<iostream>

using namespace std;
int getmin(int arr[] ,int size)
{
    int min = INT16_MAX;

    for (int i = 0; i < size; i++)
    {
       if (min>arr[i])
       {
        /* code */min=arr[i];
       }
        
    }
    cout<< min;
     return min;
}

int getmax(int arr[] ,int size)
{
    int max = INT16_MIN;

    for (int i = 0; i < size; i++)
    {
       if (max<arr[i])
       {
        /* code */max=arr[i];
       }
        
    }
    cout<< max;
     return max;
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