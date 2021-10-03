//Make a bank management. it have 2 type of account
//1.current account-(it give no interest)(withdrawl facility is available )
//(checkbool facility is available)(penalty is done if fail to keep minimum balance)
//2.saving account-(compound interest)(withdrael facility but no checkbook facility)
//Make a account class and put 
//1.costumer name
//2.account number
//3.account type
//then make 2 class each for saving and current account
//NOW DO THE FOLLOWING OPERSTION
//**Accept deposite from costumer then update balance
//**Display the balance
//**Compute and deposite interest
//**Permit withdrawl and update balance
//**Check for minimum balance, impose penalty if minimum balance fails, update balance.
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
class account
{
    protected:
        string customername,a;
        int accountnumber;
        float money;
        string accounttype;
    public:
        void setdata()
        {
            getline(cin,a);
            cout<<"Enter customer name:";
            getline(cin,customername);
            cout<<"Enter account type:";
            getline(cin,accounttype);
            cout<<"Enter account number:";
            cin>>accountnumber;
            cout<<"Enter money in account:";
            cin>>money;
        }
        void printdata()
        {
            cout<<"Costumer name is "<<customername<<endl;
            cout<<"Account number is "<<accountnumber<<endl;
            cout<<"Account type is "<<accounttype<<endl;
            cout<<"Money in account is "<<money<<endl;
        }
        void withdrawl()
        {
            float m;
            cout<<"Enter money you want to withdrawl ";
            cin>>m;
            if(m>money)
            {
                cout<<"You have unsufficient balance in account"<<endl;
            }
            else
            {
                cout<<"Money withdrawl is "<<m<<endl;
                money=money-m;
                cout<<"You have "<<money<<" rupee in your account"<<endl;
            }
        }
        void depositemoney()
        {
            int rupee;
            cout<<"Enter money you want to deposite ";
            cin>>rupee;
            money=money+rupee;
            cout<<"Money in account is "<<money<<endl;
        }
};
class currentaccount : public virtual account
{
    public:
        void penalty()
        {
            if(money<=3000)
            {
                money=money-300;
            }
            cout<<"As your balance is below 3000 you have fined with 300 rupee"<<endl;
            cout<<"Balance after imposing fine is "<<money<<endl;
        }
        void withdrawlwithcheckbook()
        {
            float amt;
            string name;
            cout<<"Enter amount you want to withdrawl by checkbook";
            cin>>amt;
            cout<<"Enter to whome you want to issue check";
            getline(cin,name);
            cout<<"Money paid to "<<name<<" by checkbook is "<<amt<<" rupee"<<endl;
        }

};
class savingaccount : public virtual account
{
    public:
        void interest()
        {
            float m,r=3.95,t;
            cout<<"Enter time in month";
            cin>>t;
            float ci;
            t=t/12;
            ci=money*pow((1+r/100),t);

        }
};
class database : public currentaccount, public savingaccount
{

};
int main()
{
    int n;
    database d;
    int q=0;
    while(q==0)
    {
        cout<<"Welcome to sk bank"<<endl;
        cout<<"What you want to do "<<endl;
        cout<<"1. Input user detail "<<endl;
        cout<<"2. Deposite money"<<endl;
        cout<<"3. Display detail"<<endl;
        cout<<"4. Compute and deposite interest"<<endl;
        cout<<"5. permit and approve withdrawl"<<endl;
        cout<<"6. Check for minimum balance and penalty"<<endl;
        cout<<"7. Exit"<<endl;
        cin>>n;
        switch(n)
        {
            case 1:
                d.setdata();
                break;
            case 2:
                d.depositemoney();
                break;
            case 3:
                d.printdata();
                break;
            case 4:
                d.interest();
                break;
            case 5:
                d.withdrawl();
                break;
            case 6:
                d.penalty();
                break;
            case 7:
                q=1;
                break;
            default:
                cout<<"Wrong enput entered "<<endl;
        }
    }
    return 0;
}