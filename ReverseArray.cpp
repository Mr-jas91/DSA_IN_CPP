#include <iostream>
using namespace std;

int reverseArray(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    while (s != e && s < e)
    {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
    return 0;
}
void printArray(int arr[],int size){
    cout << "The reverse array is: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout <<" "<< arr[i];
    }
    cout << endl;

}
int main()
{
    int arr[10] = {1, 7, 9, 13, 19, 31, 37, 42, 46, 53};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, size);
    printArray(arr,size);
    return 0;
}