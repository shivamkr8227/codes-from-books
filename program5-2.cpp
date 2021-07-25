//input name and age of n number of employee nad print it with class and object
#include<iostream>
using namespace std;

class emp
{
    private:
        string name;
        int age;
    public:
        void getdata()
        {
            cout<<"Enter name ";
            cin>>name;
            cout<<"Enter age ";
            cin>>age;
        }
        void putdata()
        {
            cout<<" Name is "<<name<<endl;
            cout<<" Age is "<<age<<endl;
        }
    
};
int main()
{
    int n;
    cout<<"Enter number of employee ";
    cin>>n;
    emp employee[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter detail of employee "<<i+1<<endl;
        employee[i].getdata();
    }
    for(int i=0; i<n;i++)
    {
        cout<<"Detail of employee "<<i+1<<" is "<<endl;
        employee[i].putdata();
    }
    return 0;
}