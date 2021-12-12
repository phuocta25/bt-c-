#include <iostream>
#include <math.h>
using namespace std;
struct diem
{
    int x;
    int y;
};
void nhaptoado(diem &a, diem &b){ //tham chiếu a,b
    cout << "nhap vao toa do diem a" << endl;
    cin >> a.x >> a.y;
    cout << "nhap vao toa do diem b" << endl;
    cin >> b.x >> b.y;
}
float khoangcach(diem a, diem b){
    float kc = sqrt(double(b.x - a.x) + double(b.y - a.y));
    return kc;
}

int main(){
    diem a,b;
    nhaptoado(a,b);
    cout<<"khoang cach giua 2 diem a va b la "<<khoangcach(a,b);
}