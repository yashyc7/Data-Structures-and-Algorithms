#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4] = {1, 5, 8, 10};
    int n = 4;
    int k = 2;

    sort(a, a + n);
    int small = a[0] + k;
    int big = a[n - 1] - k;
    cout << big - small << endl;
    return 0; 
}
