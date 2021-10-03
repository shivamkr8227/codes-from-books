//Make a program for a book keeper. it will store author name ,title of book,
//publisher,price and stock position.
//When a costumer wants a book,the sales person input the title and author name, and
//the system search for that book,
//if the book is available then the system shows the detail of book and asks for
//number of copies required.If the requested copies is required then it display
//the total price is shown, otherwise message"requested are not in stock" is shown

//#include<cstdlib>
#include<iostream>
#include<cstring>
using namespace std;

class bookrecord
{
    public:
        struct bookkeeper
        {
            string author,bookname,publisher;
            int price,noofcopy;
        }bk;
        struct bookkeeper br[20];
        int k=5,i,ts=0,tns=0;
        bookrecord()
        {
            
            br[0].author="Chetan bhagat";
            br[0].bookname="Half girlfriend";
            br[0].publisher="Sohan house";
            br[0].price=235;
            br[0].noofcopy=12;
            br[1].author="Chetan bhagat";
            br[1].bookname="2 states";
            br[1].publisher="Ramesh house";
            br[1].price=350;
            br[1].noofcopy=15;
            br[2].author="Savi sharma";
            br[2].bookname="love story";
            br[2].publisher="Mahesh house";
            br[2].price=255;
            br[2].noofcopy=29;
            br[3].author="Ravindra";
            br[3].bookname="love happens";
            br[3].publisher="Sunder chand";
            br[3].price=450;
            br[3].noofcopy=22;
            br[4].author="Sunder cauhan";
            br[4].bookname="Copy cat";
            br[4].publisher="Subham press";
            br[4].price=1450;
            br[4].noofcopy=19;
        }
        void update(int s)
        {
            for(i=0;i<s;i++)
            {
                k=k+i;
                getline(cin,br[k].bookname);//this is wrong but it works here
                cout<<"Enter book name:";
                getline(cin,br[k].bookname);
                cout<<"Enter author name:";
                getline(cin,br[k].author);
                cout<<"Enter publisher name:";
                getline(cin,br[k].publisher);
                cout<<"Enter price of book:";
                cin>>br[k].price;
                cout<<"Enter number of copies available:";
                cin>>br[k].noofcopy;
            }
            k=k+s;
        }
        void display()
        {
            cout<<"**********Detail of inventory is **********"<<endl;
            cout<<"Author name\t\tBook title\t\tPublisher\t\tPrice\t\tNo of copy available"<<endl;
            for(i=0;i<k;i++)
            {
                cout<<br[i].author<<"\t\t"<<br[i].bookname<<"\t\t"<<br[i].publisher<<"\t\t"<<br[i].price<<"\t\t"<<br[i].noofcopy<<endl;
            }
        }
        void order()
        {
            string aname,bname;
            getline(cin,bname);//this is wrong but it works here
            cout<<"Enter book title"<<endl;
            getline(cin,bname);
            cout<<"Enter author name"<<endl;
            getline(cin,aname);
            int l1,l2,l3,l4;
            l1=aname.length();
            l2=bname.length();
            int flag1=0,flag2=0,j,m,od;
            for(i=0;i<=k;i++)
            {
                l3=br[i].author.length();
                l4=br[i].bookname.length();
                if(l1==l3&&l2==l4)
                {
                    for(j=0;j<l1;j++)
                    {
                        if(aname[j]!=br[i].author[j])
                            flag1=1;
                    }
                    for(m=0;m<l2;m++)
                    {
                        if(bname[m]!=br[i].bookname[m])
                            flag2=1;
                    }
                    if(flag1==0&&flag2==0)
                    {
                        cout<<"We have the book "<<endl;
                        cout<<"How many copy you want to order"<<endl;
                        cin>>od;
                        if(od<=br[i].noofcopy)
                        {
                            cout<<"Your order is done"<<endl;
                            cout<<"Author name:"<<br[i].author<<endl;
                            cout<<"Book tittle:"<<br[i].bookname<<endl;
                            cout<<"publisher name:"<<br[i].publisher<<endl;
                            cout<<"cost of each book:"<<br[i].price<<endl;
                            cout<<"copy left:"<<br[i].noofcopy-od<<endl;
                            cout<<"Your bill is:"<<(od*br[i].price)<<endl;
                            br[i].noofcopy=br[i].noofcopy-od;
                            ts++;
                            break;
                        }
                        else
                        {
                            cout<<"Sorry we dont have that much book in our stock"<<endl;
                            tns++;
                        }
                    }
                }
            }
            if(flag1==1||flag2==1)
            {
                cout<<"Sorry we dont have that book in inventory"<<endl;
                tns++;
            }
        }

};
int main()
{
    bookrecord record;
    int n,q,a;
    q=0;
    while(q==0)
    {
        cout<<"Welcome to the inventory"<<endl;
        cout<<"Choose your option"<<endl;
        cout<<"1. Update inventory"<<endl;
        cout<<"2. Display inventory detail"<<endl;
        cout<<"3. Place a order of books"<<endl;
        cout<<"4. Detail about transaction"<<endl;
        cout<<"5. Exit"<<endl;
        cin>>n;
        switch(n)
            {
                case 1:
                    cout<<"How many books you want to update"<<endl;
                    cin>>a;
                    record.update(a);
                    record.display();
                    break;
                case 2:
                    record.display();
                    break;
                case 3:
                    record.order();
                    break;
                case 4:
                    cout<<"Number of successful transaction:"<<record.ts<<endl;
                    cout<<"Number of unsuccessful transaction:"<<record.tns<<endl<<endl;
                    break;
                case 5:
                    q=1;
                    break;
                default:
                    cout<<"Wrong chioce entered"<<endl;
                    break;
            }
    }

    return 0;
}