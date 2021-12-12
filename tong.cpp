#include<iostream>
using namespace std;
double sum (int n){
    double a=0;
    double sum =0;
    for(int i=1;i<=n;i++){
        a+=i;      
        sum+= 1/a;  
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    cout<< sum(n);
    system("pause");
}// s(n)= 1+1/(1+2)