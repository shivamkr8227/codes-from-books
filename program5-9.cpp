//make a program to take input of 2 vector add them and them display the result
#include<iostream>
using namespace std;

class vector
{
    private:
        int x,y,z;
    public:
        void setdata(int a,int b,int c)
        {
            x=a;
            y=b;
            z=c;
        }  
        void display()
        {
            cout<<"vector is "<<endl;
            cout<<x<<"i + "<<y<<"j + "<<z<<"k "<<endl;
        }
        vector sumvec(vector o1,vector o2)
        {
            vector s;
            s.x=o1.x + o2.x;
            s.y=o1.y + o2.y;
            s.z=o1.z + o2.z;
            return s;
        }
};
int main()
{
    vector v1,v2,v3,v4;
    int x1,y1,z1;
    cout<<"Enter value for vector 1 "<<endl;
    cout<<"enter x dimension ";
    cin>>x1;
    cout<<"Enter y dimension ";
    cin>>y1;
    cout<<"Enter z dimension ";
    cin>>z1;
    v1.setdata(x1,y1,z1);
    cout<<"Enter value for vector 2 "<<endl;
    cout<<"enter x dimension ";
    cin>>x1;
    cout<<"Enter y dimension ";
    cin>>y1;
    cout<<"Enter z dimension ";
    cin>>z1;
    v2.setdata(x1,y1,z1);
    v4=v3.sumvec(v1,v2);
    v4.display();
    return 0;
}