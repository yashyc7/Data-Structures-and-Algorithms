#include <iostream>
using namespace std;
void reachHome(int src, int dest)
{
    cout << "source" << src << "destination" << dest << endl;

    if (src == dest)
    {
        cout << "pahuch gaya";
        return;
    }
    src++;
    // src++ ek step aage badh jao
    reachHome(src, dest);
}
int main()
{
    int dest = 10;
    int src = 1;
    reachHome(src, dest);
    return 0;
}