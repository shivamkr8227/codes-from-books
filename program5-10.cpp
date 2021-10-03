////Make 2 class dm and bm, they take distance as input. one will take meter and centimeter
////and other will take feet and inches. we have to enter data with the help of two 
////object and add them and show the result in the form user ask.
//class fi
//{
//    protected:
//        int ft;
//        float in;
//    public:
//        void setdata1(int feet , float inches)
//        {
//            ft=feet;
//            in=inches;
//        }
//
//};
//class mc
//{
//    protected:
//        int m,cm;
//    public:
//        void setdata2(int meter,int centimeter)
//        {
//            m=meter;
//            cm=centimeter;
//        }
//};
//class addinfeet : public fi , public mc
//{
//    protected:
//        float a,f1,i1;
//    public:
//        a=m + (cm %100.0);
//        void adding()
//        {
//            ft=ft+f1;
//            in=in+i1;
//            cout<<"length is "<<endl;
//            cout<<"feet "<<ft<<" inch "<<in<<endl;
//        }
//};
//class addinmeter : public fi , public mc
//{
//    int m1,cm1;
//    public:
//        float a;
//        a=ft * 12 * 2.54 + in * 2.54;
//        m1=a/100;
//        cm1=a%100;
//        void adding()
//        {
//            m=m1+m;
//            cm=cm1+cm;
//            cout<<"length is "<<endl;
//            cout<<"meter="<<m<<" centimter="<<cm;
//        }
//};
//int main()
//{
//    fi a;
//    a.setdata1(5,6);
//    mc b;
//    b.setdata2(1,25);
//    addinfeet c;
//    c.adding();
//    return 0;
//}
#include<iostream>
using namespace std;

class fi
{
    public:
        int feet,inch;
        void setdata1(int f,int i)
        {
            feet=f;
            inch=i;
        }
        void display1()
        {
            cout<<"Length is : "<<feet<<" feet "<<inch<<" inch"<<endl;
        }
};
class mcm
{
    public:
        int meter,centimeter;
        void setdata2(int m,int cm)
        {
            meter=m;
            centimeter=cm;
        }
        void display2()
        {
            cout<<"Length is : "<<meter<<" meter "<<centimeter<<" centimeter"<<endl;
        }
};
class addinfeet : public fi , public mcm
{
    public:
        int i;
        void suminfeet()
        {
            i=meter*100 + centimeter;
            i=i/2.54;
            feet=i/12+feet;
            inch=i%12+inch;
            if(inch>=12)
            {
                inch=inch-12;
                feet=feet+1;
            }
        }
};
class addinmeter : public fi,public mcm
{
    public:
        int i;
        void suminmeter()
        {
            i=(feet*12 + inch)*2.54;
            meter=i/100+meter;
            centimeter=i%100+centimeter;
            if(centimeter>=100)
            {
                centimeter=centimeter-100;
                meter=meter+1;
            }
        }
};
int main()
{
    int p,q,r,s,n;
    cout<<"Enter length in feet and inch"<<endl;
    cin>>p>>q;
    cout<<"Enter length in meter and centimeter"<<endl;
    cin>>r>>s;
    cout<<"Choose the option"<<endl;
    cout<<"1. If you want your answer in feet"<<endl;
    cout<<"2. if you want your answer in meter"<<endl;
    cin>>n;
    if(n==1)
    {
        addinfeet c;
        c.setdata1(p,q);
        c.setdata2(r,s);
        c.display1();
        c.display2();
        c.suminfeet();
        c.display1();
    }
    else if(n==2)
    {
        addinmeter d;
        d.setdata1(p,q);
        d.setdata2(r,s);
        d.display1();
        d.display2();
        d.suminmeter();
        d.display2();
    }
    else
        cout<<"Wrong choice enter";
    return 0;
}