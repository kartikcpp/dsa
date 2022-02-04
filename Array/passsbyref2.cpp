#include<iostream>
using namespace std;
void printArray(int * arr,int n){ //int * arr --same here
    for (int i = 0; i < n;i++){
        cout << arr[i];
        //arrays are passed by refrence
    }
}
int main(){

    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(int);
    cout << sizeof(int)<<endl;
    printArray(arr,n);
    return 0;
}