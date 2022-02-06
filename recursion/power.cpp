#include <iostream>
using namespace std;


int power(int n,int p){
    if(p==0){
        return 1;
    }
    else{
       return power(n, p - 1) * n;
    }
}
int main(){
    int n,p;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the power: ";
    cin>>p;
    cout<<"Answer is "<<n<<" is: "<<power(n,p);
    return 0;
}