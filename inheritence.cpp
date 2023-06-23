//inheritence
/* If we have want to have the same attributes and properties for another class like if we want zoo of a differenet place with the same properties and  methods of zoo but with some extra properties then there is no need of redefining every thing we have use the zoo class 

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
class zoo2:public zoo{
    public:
    zoo2(string name,string breed,int age):zoo(name,breed,age){


    }
    void place(){
        cout<<"Place of Zoo2"<<endl;
    }

};
int main(){
    zoo2 obj_zoo2("Dog","Lab",12);
    obj_zoo2.add_food();
    obj_zoo2.view();
    obj_zoo2.view();
    obj_zoo2.get_info();
    obj_zoo2.place();
}*/