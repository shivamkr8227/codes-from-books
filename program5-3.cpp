#include<iostream>
using namespace std;

class test
{
    private:
        int code;
        static int count;
    public:
        void setcode()
        {
            code = ++count;
        }
        void showcode()
        {
            cout<<"Object number "<<code<<endl;
        }
        static void showcount()
        {
            cout<<"count: "<<count<<endl;
        }
};
int test :: count;
int main()
{
    test t1,t2;
    t1.setcode();
    test::showcount();   //t1.showcount()  both work same way
    t2.setcode();

    test::showcount(); //accessing static function

    test t3;

    t3.setcode();
    test::showcount();
    t1.showcode();
    t2.showcode();
    t3.showcode();
    return 0;
}