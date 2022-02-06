#include <iostream>
void fun(int n)
{
    if(n>0){ 
        fun(n-1); //first calling itself
        std::cout<<n<<" ";//ececute after calling itself
        //can't convert it to loops because it will be infinite
       
    }
}
int main(){
    fun(5);
    return 0;
}