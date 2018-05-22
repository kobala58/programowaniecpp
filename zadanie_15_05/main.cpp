#include <iostream>
#include <math.h>

using namespace std;

class punkt{
    protected:
    int x=0;
    int y=0;
};
class wektor : public punkt{
public:
    wektor();
    wektor(int l,int m);
    void sh();
    void lenght();
    void sum(wektor t1,wektor t2);
    void skal(int k);
};

wektor::wektor(){
    cout<<"Podaj wspolzedne wektora: "<<endl<<"X: ";
    cin>>x;
    cout<<"Podaj y: ";
    cin>>y;
}

wektor::wektor(int l,int m){
    x=l;
    y=m;
}

void wektor::sh(){
    cout<<"Pozycja wektora: "<<"["<<x<<","<<y<<"]";
}

void wektor::lenght(){
    float przes;
    przes=sqrt(x*x+y*y);
    cout<<endl<<przes;
}

void wektor::sum(wektor t1,wektor t2){
    wektor t3(0,0);
    t3.x=t1.x+t2.x;
    t3.y=t1.y+t2.y;
    t3.sh();
}

void wektor::skal(int k){
    x=x*k;
    y=y*k;
    cout<<"Po skaloawniu prez k="<<k<<" ";
    sh();
}

int main()
{
    wektor test(3,4);
    test.sh();
    cout<<endl;
    wektor test2(3,5);
    cout<<endl;
    test.sum(test,test2);
    cout<<endl;
    test.skal(3);
    cout<<endl;
    //test.sh();
    //test.lenght();
    return 0;
}
