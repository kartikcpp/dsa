#include <iostream>
using namespace std;
void fun(int n)
{
    if(n>0){

        cout<<n<<" ";
        fun(n-1);//same as loop
        //tail recursion

    }
   
}
int main(){
    fun(5);
    return 0;


}