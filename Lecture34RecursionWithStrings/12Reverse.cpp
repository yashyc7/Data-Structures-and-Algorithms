#include <iostream>
using namespace std;
void reverseTheName(string &name, int i, int j)
{
    cout << name << endl;
    if (i > j)
    {
        return;
    }

    // recursive releation and the processing part
    swap(name[i++], name[j--]);
    reverseTheName(name, i, j);
}
int main()
{
    string name = "YashChauhan";
    reverseTheName(name, 0, name.length() - 1);
    cout<<endl;
    cout << name << endl;
    return 0;
}