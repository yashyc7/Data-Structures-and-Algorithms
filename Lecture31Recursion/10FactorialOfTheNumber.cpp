#include <iostream>
using namespace std;
int fact(int n)
{ 
    if (n == 0 || n == 1)
    {
        return 1;
    }

    return n *   fact(n - 1);
}
int main()
{
    int n;
    cin >> n;
    int k = fact(n);
    cout << "Factorial of " << n << " is: " << k << endl;
    return 0;
}