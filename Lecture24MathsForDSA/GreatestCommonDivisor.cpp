// largest factor nikalna hai

#include<vector>
using namespace std;
int gcd(int n1,int n2)
{
    vector<int> ans;

    for (int i = 2; i < n1;i++)
    {
        if(n1%i==0)
        {
            ans.push_back(i);
        }
    }
 for (int i = 2; i < n2;i++)
    {
        if(n2%i==0)
        {
            ans.push_back(i);
        }
    }
    int finalAns = 0;
    for (int i = 0; i < ans.size();i++)
    {
        finalAns = max(finalAns, ans[i]);
    }
    return finalAns;
}

    int main()
{
    int n1,n2;
    cin >> n1>>n2;
    cout << "the greatest gcd of the " << n1<<"and"<<n2 << " is :" << gcd(n1,n2)<<endl;

    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    return 0;
}