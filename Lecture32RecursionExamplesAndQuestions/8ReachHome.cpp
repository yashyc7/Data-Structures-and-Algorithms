#include<iostream>
using namespace std;
void reachHome(int dest,int src)
{
cout<<src;  cout<<" dest="<<dest<<endl;
if(src==dest)  
{ cout<<"reached home"<<endl;
    return ;
}

src++;
reachHome(dest,src);


}
int main()
{
int dest=10;
int src=1;
reachHome(dest,src);

    return 0;
}