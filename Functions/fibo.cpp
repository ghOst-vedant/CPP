#include <iostream>
using namespace std;
void fibo(int n)
{
    int a = 0, b = 1;
    int next = 0;
    cout << a << " " << b << " ";
    for (int i = 0; i < n; i++)
    {
        next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }
}
int main()
{
    int n;
    cin >> n;
    fibo(n);
    return 0;
}