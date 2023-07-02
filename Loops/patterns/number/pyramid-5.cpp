/*
    1
   23
  456
 78910
*/
#include <iostream>
using namespace std;
int main()
{ 
    int i = 1, j, n, space,val=1;
    cin >> n;
    while (i <= n)
    {
        space = n - i + 1;
        j = 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        while (j <= i)
        {
            cout<< val;
            val++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}