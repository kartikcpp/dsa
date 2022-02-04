#include <iostream>

using namespace std;

int binarysearch(int arr[], int n, int key) //works only for sorted array or monotonic -- non decreasing non increasing
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1,2,56,489,789,7444,8898};
    int n = sizeof(arr) / sizeof(int);

    cout << "enter no: ";
    int key;
    cin >> key;


    int index = binarysearch(arr, n, key);
    if(index==-1)
        cout << "not found";
    else{
        cout << "found at index : " << index;
    }
    return 0;
}