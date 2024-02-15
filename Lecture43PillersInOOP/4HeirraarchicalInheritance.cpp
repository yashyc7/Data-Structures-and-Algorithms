// one class serve as parent class for more than one class
// iske 2 se jyada child ho sakte hain
class A
{
public:
    void fun1()
    {
        cout << "Inside the function 1" << endl;
    }
};
class B : public A

{
public:
    void fun2
    {
        cout << "inside function 2" << endl;
    }
};
class C : public A
{
public:
    void fun3() 
    {

        cout << "inside the function 3" << endl;
    }
};
int main()
{
    B obj1;
    C obj2;
    obj1.fun1(); // These both can inherit the fun1()
    obj2.fun1(); // due to the heiarrchial inheritance

    return 0;
}

// Is inheritance main parent class ke 2 ya usse jyada child hote hain