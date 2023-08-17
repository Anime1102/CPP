#include <iostream>

using namespace std;

int main()
{
    int n[5]={1,2,3,4,5};
    // index {0,1,2,3,4}

    int a[5];
    


    // to access the array

    cout << n[1] << endl;


    // taking input 

    for (int i = 0; i < 5; i++)
    {
       cin >> a[i]; /* code */
    }
    for (int j = 0; j < 5; j++)
    {
        cout<<a[j]<<" ";
    }
    
    return 0;
}