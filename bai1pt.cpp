#include<iostream>
using namespace std;
int main(){
    int a=10 ;
    int b=15 ;
   int *ptr1, *ptr2;
   ptr1 = &a;
   ptr2 = &b;
   int sum;
   sum = *ptr1 + *ptr2;
   cout<<"tong 2 so la :"<<sum<<endl;
   return 0;
}