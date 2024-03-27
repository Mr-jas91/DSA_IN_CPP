#include <iostream>
using namespace std;

int LinearSearch(int arr[], int num, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int num;
    int arr[10] = {1, 7, 9, 13, 19, 31, 37, 42, 46, 53};
    cout << "Enter the number to search in array" << endl;
    cin >> num;
    int index = LinearSearch(arr, num,10);
    if (index == -1)
    {
        cout << "Number is not exist" << endl;
    }
    else
    {
        cout << "Number " << num << " is exist at index: " << index << endl;
    }

    return 0;
}