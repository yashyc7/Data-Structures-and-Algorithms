#include <iostream>
using namespace std;
void update(int n)
{

    n++;
}
void update1(int& j)
{

    j++;
}
int& func(int a)
{
    int num = a;
    int &ans = num;
    return ans;

}
int main()
{    
    /*
        int i = 5;
        int &j = i;
        cout << "value of i and j is : " << i << " & "    << j << endl;
        i++;
        j++;
        cout << i << endl;
        cout << j << endl;
        */
    int i = 5;
    cout << "Before" << i << endl; // ans will be 5
    update1(i);
    cout << "After" << i << endl; // ans will be 5
    func(5);

    return 0;
}