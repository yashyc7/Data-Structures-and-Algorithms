#include<iostream>
using namespace std;

int isPrime(int n)
{
    int count = 0;
    int j;
    vector<bool>prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i < n;i++)
    {
        if(prime[i])
        {
            count++;
            for ( j * 2; j < n;j=j+i)
            {
                prime[j] = 0;
            }
        }
        return count;
    }
}

    int main()
{
    cout << "prime number under 40 is" << isPrime(40);
    return 0;
}
