#include<iostream>
using namespace std;


void out(int dd,int mm,int yyyy)

{
    cout<<"Date->";
    cout<<"  "<<dd<<'-'<<mm<<'-'<<yyyy;

}

 void check(int dd,int mm,int yyyy)
{if(mm==01&&dd<32||mm==02&&dd<29||mm==03&&dd<32||mm==04&&dd<31||mm==05&&dd<32||mm==06&&dd<31||mm==07&&dd<32||mm==8&&dd<32||mm==9&&dd<32||mm==10&&dd<32||mm==11&&dd<31||mm==12&&dd<32)
{if(mm<13)
{if(yyyy>2019)
{out(dd,mm,yyyy);}}
}
else{
    cout<<"invalid date";
}
}
void enter()
{
    int dd;
    int mm;
    int yyyy;

    cout<<"enter date:-";
    cin>>dd>>mm>>yyyy;
    check(dd,mm,yyyy);
    

}
int main(){
    enter();


}