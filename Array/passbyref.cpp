#include<iostream>
using namespace std;
void printArray(int arr[]){ //int * arr --same here 
    cout <<endl<< sizeof(arr);
}
int main(){

    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr);
    cout << n/sizeof(int);
    printArray(arr);
    return 0;
}