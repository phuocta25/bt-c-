#include<iostream>
using namespace std;
int main() {
   int size, i, a[10];
   int *ptr;
   ptr = &a[0];
   cout<<"nhap kich co cua mang: ";
   cin>>size;
   cout<<"nhap phan tu "<<size;
   for ( i = 0; i < size; i++)
   {
       cout<<"nhap a["<<i+1<<"]=";
       cin>>a[i];
   }
   ptr=&a[size-1];
   cout<<"hien thi cac phan tu mang theo chieu dao nguoc :";
   for ( i = size; i >= 0; i--)
   {
       cout<<"phan tu "<<i<<" la "<<*ptr<<endl;
       ptr--;
   }
   return 0;
}