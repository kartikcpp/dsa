//sum of first n natural numbers
#include <iostream>
using namespace std;
int sum(int n){

    if(n==1){
        return 1;}
        else{
            return sum(n - 1) + n;
        }
    }

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Sum of first "<<n<<" natural numbers is: "<<sum(n);
    return 0;
}