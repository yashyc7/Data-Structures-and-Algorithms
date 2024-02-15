#include<iostream>
using namespace std;
int score = 15;//this is the global variable in the program 
void a(int& i)
{
    cout << i << " " << endl;
    cout << score << " is the score" << endl;
    cout << score << " is the score" << endl;
    //b(i);
    
      }
    
void b(int& i)
    {
        cout << ++i << " " << endl;
        cout << score << " is the score" << endl;
    }

int main()
{
    int i = 5; //local variable its scope is till the main function ends
    a(i);
    {
        int x = 2;
        cout << x<< endl;
    }
    cout << score << " is the score" << endl;
    cout << score << " is the score" << endl;
    cout << i << endl;
    return 0;
}//referrence varible ka use karke mai usko use mai le skta hun
 // global variable is considered as the bad practise
// because it can be changed from any function
// such as score=score+1;
//from any function it can be changed so
//try to avoid it 
//use the concept of reference variable to access the 
//same memory block instead of global variable of the program