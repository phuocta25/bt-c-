#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "nhap n phan tu :";
    cin >> n;
    int arr[n];
    int sum = 0;
    int *ptr;
    for (int i = 0; i < n; i++)
    {
        cout << "nhap a["<<i+1<<"]:";
        cin >> arr[i];
    }
    ptr = arr;
    for (int i = 0; i < n; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    cout << "tong cac phan tu mang la :" << sum << endl;
    return 0;
}