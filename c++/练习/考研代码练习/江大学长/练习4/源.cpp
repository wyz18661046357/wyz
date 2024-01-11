/*
输出以下图案：
         *
        ***
       *****
      *******
       *****
        ***
         *
*/
#include<iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int n = 1; n <= 7; n++)
        {
            if (i < 4)
            {
            if ((n <= 4 - i) || (n >= 4 + i))
                cout << " ";
            else cout << "*";
            }
            else if (i == 4)
            {
                cout << "*";
            }
            else
            {
                if ((n <= i-4) || (n > 7-(i-4)))
                    cout << " ";
                else cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}