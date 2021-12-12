#include <iostream>
using namespace std;
 
main()
{
 int a = 21;
 int c ;
 
 // Gia tri cua a se khong duoc tang truoc khi duoc gan.
 c = a++; 
 cout << "1, Gia tri cua a++ la: " << c << endl ;
 
 // Sau khi gia tri cua a duoc tang thi:
 cout << "2, Gia tri cua a la: " << a << endl ;
 
 // Gia tri cua a se duoc tang truoc khi duoc gan.
 c = ++a; 
 cout << "3, Gia tri cua ++a la: " << c << endl ;
 return 0;
}