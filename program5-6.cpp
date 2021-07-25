#include<iostream>
using namespace std;

class complex
{
    private:
        int x,y;
    public:
        void setdata(int real,int imag)
        {
            x=real;;
            y=imag;
        }
        friend complex sumdata(complex,complex);
        void showdata(complex c)
        {
            cout<<"Number is "<<c.x<<" + "<<c.y<<"i"<<endl;
        }
};
complex sumdata(complex c1,complex c2)
        {
            complex c;
            c.x=c1.x + c2.x;
            c.y=c1.y + c2.y;
            return (c);
        }
int main()
{
    complex c1,c2,c3;
    c1.setdata(23,43);
    c2.setdata(21,46);
    c3=sumdata(c1,c2);

    cout<<"c1 = ";
    c1.showdata(c1);
    cout<<"c2 = ";
    c2.showdata(c2);
    cout<<"c3 = ";
    c3.showdata(c3);
    return 0;
}