// Recursion Basics
#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    // int smallerProblem = fact(n - 1);       // choti problem
    // int BiggerProblem = n * smallerProblem; // badi problem
    return n*fact(n-1);
}

int main()
{
    cout << "Enter the Number";
    int n;
    cin >> n;
    int factorial = fact(n);
    cout << "Factorial is " << factorial << endl;

    return 0;
}