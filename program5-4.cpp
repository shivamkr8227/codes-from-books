#include<iostream>
using namespace std;

class time
{
    private:
        int minute,hour;
    public:
    void gettime(int h,int m)
    {
        hour=h;
        minute=m;
    }
    void showtime()
    {
        cout<<"hour minute"<<endl;
        cout<<hour<<":"<<minute;
    }
    void settime(time t1,time t2)
    {
        minute=t1.minute + t2.minute;
        hour=minute/60;
        minute=minute%60;
        hour=hour + t1.hour +t2.hour;
    }
    
};
int main()
{
    time t1,t2;
    t1.gettime(3,54);
    t2.gettime(5,24);
    time t3;
    t3.settime(t1,t2);
    t3.showtime();
    return 0;
}