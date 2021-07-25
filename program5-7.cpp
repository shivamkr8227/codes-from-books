//make a bank class and define following things
//1. Name of depositor
//2. account number 
//3. type of account
//4. balance account in the account
//make member function for following
//1. to assign initial value
//2. to deposite an amount
//3. to withdrawl an amount after checking balance
//4. to display detail of specific account
#include<iostream>
using namespace std;

class bank
{
    private:
       string name,typeofac;
       int accnum,balance; 
    public:
        void setdata(string n,int an,string toa,int b)
        {
            name=n;
            accnum=an;
            typeofac=toa;
            balance=b;
        }
        void deposite()
        {
            int dep;
            cout<<"Enter amount you want to deposite "<<endl;
            cin>>dep;
            balance=balance+dep;
        }
        void withdrawl()
        {
            int with;
            cout<<"Enter amount you want to withdrawl "<<endl;
            cin>>with;
            if(balance<with)
            {
                cout<<"Sorry you have insufficient balance "
                    <<"operation cannot be done"<<endl;
            }
            else
            {
                balance=balance-with;
            }
        }
        void display()
        {
            cout<<"Name of account holder is "<<name<<endl;
            cout<<"Account number is "<<accnum<<endl;
            cout<<"Type of account is "<<typeofac<<endl;
            cout<<"Balance in account is "<<balance<<endl;
        }
    
};
int main()
{
    string n,typeacc;
    int b,acnum,bah,i,d;
    cout<<"Enter number of bank account holder in bank";
    cin>>bah;
    bank c[bah];
    for(i=0;i<bah;i++)
    {
        cout<<"Enter name of bank holder ";
        cin>>n;
        cout<<"Enter type of account ";
        cin>>typeacc;
        cout<<"Enter account number ";
        cin>>acnum;
        cout<<"Enter balace in account ";
        cin>>b;
        c[i].setdata(n,acnum,typeacc,b);
    }
    int quit=0;
    while(!quit)
    {
        int a;
        cout<<"Choose your operation from menu"<<endl;
        cout<<"1. Deposite money"<<endl;
        cout<<"2. Withdrawl money"<<endl;
        cout<<"3. Display detail"<<endl;
        cout<<"4. Exit"<<endl;
        cin>>a;
        cout<<"Choose in which account holder you want to do the change";
        cin>>d;
        switch(a)
        {
            case 1:
                c[d].deposite();
                break;
            case 2:
                c[d].withdrawl();
                break;
            case 3:
                c[d].display();
                break;
            case 4:
                quit=1;
                break;
            default :
                cout<<"Wrong value entered"<<endl;
        }
    }
    return 0;
}