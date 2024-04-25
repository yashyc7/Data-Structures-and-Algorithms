#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[4] = {4, 2, 5, 2};
    int arr2[7] = {5, 7, 8, 9, 2, 5, 2};
    int m = 4, n = 7;
    set<int> s;
    for (int i = 0; i < m;i++)
    {
        s.insert(arr1[i]);
    }
    for (int i = 0; i < n;i++)
    {
        s.insert(arr2[i]);
    }
    cout << s.size() << " ";
    return 0; 
}