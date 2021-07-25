//make a class for vector and make following function
//1. to create a vector 
//. to modify the value of given vector
//. to multiply by scalar value
//. to display the vector in form(10,20,30)

#include<iostream>
using namespace std;

class vector
{
    private:
        int x,y,z;
    public:
        void setvalue(int a,int b,int c)
        {
            x=a;
            y=b;
            z=c;
        }
        void modify()
        {
            int a;
            cout<<"Which part you want to modify"<<endl;
            cout<<"1. for update x axis"<<endl;
            cout<<"2. for update y axis"<<endl;
            cout<<"3. for update z axis"<<endl;
            cin>>a;
            if(a==1)
            {
                cout<<"Enter new x dimension ";
                cin>>x;
            }
            else if(a==2)
            {
                cout<<"Enter new y direction ";
                cin>>y;
            }
            else if(a==3)
            {
                cout<<"Enter new z direction ";
                cin>>z;
            }
            else
            {
                cout<<"Wrong value entered";
            }
        }
        void multiplyscalar(int m)
        {
            x=x*m;
            y=y*m;
            z=z*m;
        }
        void display()
        {
            cout<<"The required vector is"<<endl;
            cout<<x<<"i + "<<y<<"j + "<<z<<"k"<<endl;
        }
};
int main()
{
    vector v;
    int x1,y1,z1,i,mp;
    cout<<"Enter value for vector "<<i<<endl;
    cout<<"enter x dimension ";
    cin>>x1;
    cout<<"Enter y dimension ";
    cin>>y1;
    cout<<"Enter z dimension ";
    cin>>z1;
    v.setvalue(x1,y1,z1);
    int quit=0;
    do
    {
        cout<<"Choose what operation you want to do "<<endl;
        cout<<"1. Modify value of any direction"<<endl;
        cout<<"2. Multiply with a scalar "<<endl;
        cout<<"3. Display the vector"<<endl;
        cout<<"4. Exit"<<endl;
        cin>>i;
        switch(i)
        {
            case 1:
                v.modify();
                break;
            case 2:
                cout<<"Enter number you want to multiply the vector ";
                cin>>mp;
                v.multiplyscalar(mp);
                break;
            case 3:
                v.display();
                break;
            case 4:
                quit=1;
                break;
            default:
                cout<<"Wrong choice entered ";
        }
    }while(quit==0);
    return 0;
}