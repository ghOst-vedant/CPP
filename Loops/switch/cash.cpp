#include <iostream>
using namespace std;
int main()
{
    int n,num=1;
    cin >> n;
    int note = 0;
    switch (num)
    {
    case 1:
    {
        note = n / 100;
        n = n - (note * 100);
        cout << note << " of 100 required.\n";
    }
    case 2:
    {
        note = n / 50;
        n = n - (note * 50);
        cout << note << " of 50 required.\n";
    }
    case 3:
    {
        note = n / 20;
        n = n - (note * 20);
        cout << note << " of 20 required.\n";
    }
    case 4:
    {
        note = n / 10;
        n = n - (note * 10);
        cout << note << " of 10 required.\n";
    }
    }
}