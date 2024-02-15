#include <iostream>
using namespace std;
void ReachHome(int source, int destination)
{
    cout << "source= " << source << " desination=" << destination << endl;
    if (source == destination)
    {
        cout << "Reached the destination" << endl;
        return;
    }
    source++;
    ReachHome(source, destination);
}

int main()
{
    int destination = 100000;
    int source = 1;
    ReachHome(source, destination);
    return 0;
    return 0;
}