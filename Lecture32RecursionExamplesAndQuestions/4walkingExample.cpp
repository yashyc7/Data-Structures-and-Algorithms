#include <iostream>
using namespace std;
void reachHome(int src, int dest)
{
    cout << src << " ";
    if (src == dest)
    {
        cout << "You have reached home";
        return;
    }

    reachHome(src + 1, dest);
}
int main()
{
    int source = 1;
    int destination = 10;
    reachHome(source, destination);

    return 0;
}