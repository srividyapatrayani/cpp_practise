//Abstraction
/* to hide complex details behind simple procedures */
#include<iostream>
using namespace std;
class SmartPhone{
    public:
    virtual void Takeselfie()=0;
    virtual void Makecall()=0;
};
class Android: public SmartPhone{
    public:
    void Takeselfie(){
        cout<<"Took a selfie in android"<<endl;
    }
    void Makecall(){
        cout<<"Calling Android"<<endl;
    }
    
};
class Iphone: public SmartPhone{
    public:
    void Takeselfie(){
        cout<<"Took selfie in iphone"<<endl;
    }
    void Makecall(){
        cout<<"Calling Ihpone"<<endl;
    }
};
int main(){
    SmartPhone* s1=new Android();
    s1->Takeselfie();
    s1->Makecall();
    SmartPhone* s2=new Iphone();
    s2->Takeselfie();
    s2->Makecall();

}
