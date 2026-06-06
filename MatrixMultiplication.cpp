#include <iostream>
#include <cstdlib>

#define n 10
using namespace std;

int main()
{
    srand(time(0));
    int a[n][n],b[n][n],c[n][n] = {0};
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = 0 ; j < n ; j++)
        {
            a[i][j] = rand()%10;
            b[i][j] = rand()%10;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0 ; i < n ; i ++)
    {
        for (int j = 0 ; j < n ; j++ )
        {
            cout << c[i][j] ;
        }
        cout << endl;
    }

    return 0;
}
