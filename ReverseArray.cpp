#include <iostream>
using namespace std;

int reverseArray(int arr[], int size)
{
    cout << "Reverse array is: ";
    for (int i = size-1; i >=0; i--)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;

    return 0;
}

int main()
{
    int arr[10] = {1, 7, 9, 13, 19, 31, 37, 42, 46, 53};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, size);
    return 0;
}