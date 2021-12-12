#include <iostream>
using namespace std;

struct phanso
{
    double T;
    double M;
    void NhapPS(){
        cout << "Nhap tu so : ";cin>>T;
        cout << "nhap mau so : ";cin>>M;
        while (M == 0){
          cout << "Nhap sai, hay nhap lai mau so";
        cout << "Nhap mau so : ";cin>>M;
        }
    }
    double ucln(double T,double M){
        if (T == 0|| M==0){
        return T+M;
        }
        while (T != M){
            if (T > M)
            {
                T -= M;
            }
            else
            {
                M -= T;
            }
        }
        return T;
    } 
    void rutgonps(){
        int u;
        u = ucln(T,M);
        T = T / u;
        M = M / u;
    }
    void xuatps(){
        cout<<"phan so sau khi rut gon"<<T<<"/"<<M<<endl;
    }
};
float cong_ps(phanso p1, phanso p2)
{   
    float tong = (p1.T / p1.M) + (p2.T / p1.M);
    return tong;
}
float tru_ps(phanso p1, phanso p2)
{
    float hieu = (p1.T / p1.M) - (p2.T / p2.M);
    return hieu;
}
float nhan_ps(phanso p1, phanso p2)
{
    float tich = (p1.T / p1.M) * (p2.T / p2.M);
    return tich;
}
float chia_ps(phanso p1, phanso p2)
{
    float thuong = (p1.T / p1.M) * (p2.M / p2.T); 
    return thuong;
}

int main()
{
    phanso  p1, p2;
    cout<<"nhap vao phan so 1"<<endl;p1.NhapPS();
    cout<<"nhap vao phan so 2"<<endl;p2.NhapPS();
    cout<<"tong 2 ps p1,p2 la :"<<cong_ps(p1, p2)<<endl;
    cout<<"hieu 2 ps p1,p2 la :"<<tru_ps(p1, p2)<<endl;
    cout<<"tich 2 ps p1,p2 la :"<<nhan_ps(p1, p2)<<endl;
    cout<<"thuong 2 ps p1,ps la:"<<chia_ps(p1, p2)<<endl;
    p1.rutgonps();
    p2.rutgonps();
    p1.xuatps();
    p2.xuatps(); 
}