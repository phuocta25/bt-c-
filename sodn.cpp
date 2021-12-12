#include <iostream>
using namespace std;
double daonguoc(int n)
{
    int sum; 
    while (n != 0)
    {
        sum = sum * 10 + n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    cout << daonguoc(n);
}