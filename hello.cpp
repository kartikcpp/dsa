#include <iostream>
using namespace std;
int main(){

    int marks[100]={0};
    int n;
    cout << "enter the  no of students : ";
    cin >> n;

    for (int i = 0; i < n;i++){
        cin >> marks[i];
    }
    for (int i = 0; i < 56;i++){
        cout <<marks[i]<<",";
    }
    cout << endl;
    return 0;
}