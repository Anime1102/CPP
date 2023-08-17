#include<iostream>

using namespace std;



void reversed(int arr[],int n)
{ int i=0;
    for ( i = n; i >=0; i--)
    {
    
    cout << " "<<arr[i];
       
    }

}

int main()
{
    int n;

    cout << "Enter the index length"<< endl;

    cin >> n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

reversed(arr,n);

    
}