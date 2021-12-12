#include<iostream>
using namespace std;
struct sophuc{
    double T;
    double A;
    void nhapsp(){
    cout<<"nhap phan thuc :";cin >> T;
    cout<<"nhap phan ao :";cin >> A;
    
}
    void xuatsp(){
    cout<<"phan thuc la :"<<T<<endl;
    cout<<"phan ao la :"<<A<<endl;
}
};
sophuc cong(sophuc &u1,sophuc &u2){
    sophuc u;
             u.T=u1.T+u2.T;
             u.A=u1.A+u2.A;
        return u;
}
sophuc tru(sophuc u1,sophuc u2){
    sophuc u;
            u.T=u1.T-u2.T;
            u.A=u1.A-u2.A;
         return u;  
}

sophuc nhan(sophuc u1, sophuc u2){
    sophuc u;
            u.T=u1.T*u2.T-u1.A*u2.A;
            u.A=u1.T*u2.A+u1.A*u2.T;
        return u;
}
sophuc chia(sophuc u1, sophuc u2){
    sophuc u;
            u.T=(u1.T*u2.T+u1.A*u2.A)/(double(u2.T)+double(u2.A));
            u.A=(u1.A*u2.T-u1.T*u2.A)/(double(u2.T)+double(u2.A));
        return u;    
}
int main(){
    sophuc ucong,utru,unhan,uchia,u1,u2;
    cout<<"nhap so phuc thu nhat:"<<endl;u1.nhapsp();
    cout<<"nhap so phuc thu hai:"<<endl;u2.nhapsp();
    cout<<"so phuc tong :"<<endl;
    ucong=cong(u1,u2);
    ucong.xuatsp();
    cout<<"so phuc hieu :"<<endl;
    utru=tru(u1,u2);
    utru.xuatsp();
    cout<<"so phuc nhan :"<<endl;
    unhan=nhan(u1,u2);
    unhan.xuatsp();
    cout<<"so phuc chia :"<<endl;
    uchia=chia(u1,u2);
    uchia.xuatsp();
}

