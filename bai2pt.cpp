#include<iostream>
using namespace std;
void doigt(int *num1,int* num2){
    int t;
    t=*num1;
    *num1=*num2;
    *num2=t;
}
int main(){
    int num1,num2;
    cout<<"nhap vao so thu 1 :";
    cin>>num1;
    cout<<"nhap vao so thu 2 :";
    cin>>num2;
    doigt(&num1,&num2);
    cout<<"sau khi doi gt"<<endl;
    cout<<"so thu nhat la: "<<num1<<endl;
    cout<<"so thu hai la :"<<num2;
}