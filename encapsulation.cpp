/* encapsulation explains that the data in the class should be private but not public and the values assigned should be through the methods 
#include <iostream>
#include <list>
using namespace std;
class zoo{
    private:
    string name;
    string breed;
    int age;
    int viewers=0;
    list<string>food;
    public:
    zoo(string an_name,string an_breed,int an_age){
        name=an_name;
        breed=an_breed;
        age=an_age;
    }
    void add_food(){
        food={"Eggs"};
        food.push_back("Milk");
        cout<<"enter the no of items: ";
        int n;
        cin>>n;
        string s;
        for(int i=0;i<n;i++){
            cout<<"Enter food item "<<i+1<<endl;
            cin>>s;
            food.push_back(s);
        }
        }
    void get_info(){
        cout<<"Animal "<<name<<" is of "<<breed<<".It's age is "<<age<<" .The food it eats is "<<endl;
        for(auto x:food){
            cout<<x<<endl;
        }
        cout<<"No of viewrs: "<<viewers<<endl;
    }
    void view(){
        viewers++;
    }
    void unview(){
        if (viewers>0){
            viewers--;
        }
    }
};
int main(){
    zoo animal1("Dog","lab",10);
   
    animal1.view();
    animal1.view();
    animal1.view();
    animal1.view();
    animal1.unview();
    animal1.unview();
    animal1.unview();
    animal1.unview();
    animal1.unview();
    animal1.get_info();
}*/

