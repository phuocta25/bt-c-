#include<iostream>
using namespace std;
int string_ln(char*);
int string_len(char*p){
    int count=0;
    while (*p!=0)
    {
        count++;
        p++;
    }
    return count;
    
}
 
int main() {
   char str[50];
   int length;
   cout<<"nhap chuoi bat ki :";
   gets(str);
   length= string_len(str);
   cout<<"do dai cua chuoi la: "<<str<<length;
   return 0;
}   