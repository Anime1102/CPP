#include <iostream>

using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i]; /* code */
    }
}

int main()
{
    int n;

    cout << "how many number you want to take " << endl;

    cin >> n;

    int arr[n];

    printArray(arr, n);
    int max = 0, min;

    for (int j = 0; j < n; j++)
    {

        if (max < arr[j])
        {
            max = arr[j];
        }
    }
    cout << "max" << max << endl;
    int temp = 0;

    min = max;
    for (int j = 0; j < n; j++)
    {
        if (min > arr[j])
        {
            min = arr[j];
        }
    }
    cout << "min" << min << endl;
}