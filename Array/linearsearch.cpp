#include <iostream>
using namespace std;
int linear_search(int arr[],int n,int key){ //time complexity is order of n

    for (int i = 0; i < n;i++){
        if(arr[i]==key)
            return i;
    }
    return -1;
}
int main(){
    int arr[] = {10, 15, 14, 5, 1, 4, 8, 6, 4, 7, 5, 5, 5, 233, 47, 8, 47};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;
    int index = linear_search(arr, n, key);
    if(index==-1)
        cout << "not found";
    else{
        cout << "found at index : " << index;
    }
    return 0;
}