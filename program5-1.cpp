//take two number as input and pritn the largest with help of function and 
//scope resolution operator
#include<iostream>
using namespace std;

class large
{
    private:
        int m,n;
    public:
        void input();
        int check();
        void display();
};
void large :: input()
{
    cout<<"Enter 2 number ";
    cin>>m>>n;
}
int large :: check()
{
    if(m>n)
    {
        return m;
    }
    else 
    {
        return n;
    }
}
void large :: display()
{
    cout<<"Largest number is "<<check();
}
int main()
{
    large a;
    a.input();
    a.display();
    return 0;
}