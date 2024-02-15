#include<iostream>
using namespace std;
bool isPrime(int num)
{  if (num <= 1)
    {
        return -1;
}
    for (int i = 2; i < num;i++)
{
    if(num%i==0)
    {
        return false;
    }
}
return true;
}
int countPrime(int n)
{
    int count = 0;
  
    for (int i = 2; i < n;i++)
    { 
        if(isPrime(i))
        {
            count++;
        }
        
    }
    return count;
}
int main()
{
   
    cout << "prime number under 1000 is" << countPrime(1000);

    return 0;
}
