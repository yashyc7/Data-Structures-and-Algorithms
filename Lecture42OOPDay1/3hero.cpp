class hero
{
public:
    int length, breadth;

private:
    void getData()
    {

        cout << "enter the length and breadth" << endl;
        cin >> length >> breadth;
    }
    void dispData()
    {
        cout << length << breadth;
    }
    hero()
    {

        length++;
        breadth++;
    }

} int main()
{

    hero h1;
    h1.getData();
    h1.dispData();

    return 0;
}