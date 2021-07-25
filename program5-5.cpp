#include<iostream>
using namespace std;
class base2;
class base1
{
    private:
        int x;
    public:
    void setdata(int a)
    {
        x=a;
    }
    void display()
    {
        cout<<"Value is "<<x<<endl;;
    }
    
    friend void exchange(base1 &,base2 &);
};
class base2
{
    int y;
    public:
        void setdata(int b)
        {
            y=b;
        }
        void display()
        { 
            cout<<"Value is " <<y<<endl;
        }
        friend void exchange(base1 & , base2 &);
};
void exchange(base1 & b,base2 & c)
{
    int a;
    a=b.x;
    b.x=c.y;
    c.y=a;
}
int main()
{
    base1 a;
    base2 b;
    a.setdata(5);
    b.setdata(7);
    cout<<"Value before exchange is"<<endl;
    a.display();
    b.display();
    exchange(a,b);
    cout<<"Value after exchange "<<endl;
    a.display();
    b.display();
    return 0;
}