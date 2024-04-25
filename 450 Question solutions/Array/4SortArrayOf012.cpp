#include <iostream>
using namespace std;
int main()
{
    int arr[8] = {0, 2, 1, 0, 0, 1, 1, 2};
    int n = 8;
    int zero = 0;
    int one = 0;
    int two = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        if (arr[i] == 1)
        {
            one++;
        }
        if (arr[i] == 2)
        {
            two++;
        }
    }

    for (int i = 0; i < zero; i++)
    {
        arr[i] = 0;
    }
    for (int i = zero; i < one; i++)
    {
        arr[i] = 1;
    }
    for (int i = one; i < two; i++)
    {
        arr[i] = 2;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}