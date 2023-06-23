// oops in cpp basic usage creating a class  and accessing the elements
#include<iostream>
using namespace std;
class student{
    public://public as they are not accessible in main if not public
    string name;
    int age;
    bool gender;

    void printInfo(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<gender<<endl;
    }
};

int main(){
    student arr[3];
    for(int i=0;i<3;i++){
        cin>>arr[i].name;
        cin>>arr[i].age;
        cin>>arr[i].gender;
    }
    for(int i=0;i<3;i++){
        arr[i].printInfo();
    }

    return 0;
}

/* class zoo with the multiple datatypes in it which are user defined 
#include<iostream>
#include<list>
using namespace std;
class zoo{
public:
    string animalname;
    int age;
    string food;
    list<string>breeds;
};
int main(){
    zoo animal;
    cout<<"enter animalname"<<endl;
    cin>>animal.animalname;
    cout<<"enter animal age"<<endl;
    cin>>animal.age;
    cout<<"enter animal food"<<endl;
    cin>>animal.food;
    int n;
    cout<<"enter size:"<<endl;
    cin>>n;
    string str;
    cout<<"enter animal breeds"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter animal breed no. "<<i<<endl;
        // getline(cin,str);
        cin>>str;
        animal.breeds.push_back(str);
    }
    cout<<animal.animalname<<endl;
    cout<<animal.age<<endl;
    cout<<animal.food<<endl;
    for(auto x: animal.breeds){
        cout<<x<<endl;
    }

}
*/

/* class hotel
#include<iostream>
#include<vector>
#include<list>
using namespace std;
class hotel{
    public:
    string hotelname;
    string hotelowner;
    vector<pair<string,int>>items;
};
int main(){
    hotel obj;
    cout<<"Enter the hotel name"<<endl;
    cin>>obj.hotelname;
    cout<<"Enter the hotel owner"<<endl;
    cin>>obj.hotelowner;
    cout<<"Enter the item size:"<<endl;
    int n;
    cin>>n;
    string food_name;
    int food_number;
    cout<<"Enter the items"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter the food pair "<<i+1<<endl;
        cin>>food_name;
        cin>>food_number;
        obj.items.push_back({food_name,food_number});
    }
    cout<<"Hotel name is"<<obj.hotelname<<". The owner of the hotel is"<<obj.hotelowner<<"The items in the hotel are"<<endl;
    for(auto x: obj.items){
        // cout<<x<<endl;
        cout<<"("<<x.first<<" "<<x.second<<")"<<",";
    }
}
*/

/* creating mutliple objects for a class
#include<iostream>
#include<vector>
#include<list>
using namespace std;
class hotel{
    public:
    string hotelname;
    string hotelowner;
    vector<pair<string,int>>items;
};
int main(){
    hotel obj;
    cout<<"Enter the hotel name"<<endl;
    cin>>obj.hotelname;
    cout<<"Enter the hotel owner"<<endl;
    cin>>obj.hotelowner;
    cout<<"Enter the item size:"<<endl;
    int n;
    cin>>n;
    string food_name;
    int food_number;
    cout<<"Enter the items"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter the food pair "<<i+1<<endl;
        cin>>food_name;
        cin>>food_number;
        obj.items.push_back({food_name,food_number});
    }


    hotel obj2;
    cout<<"Enter the hotel2 name"<<endl;
    cin>>obj2.hotelname;
    cout<<"Enter the hotel2 owner"<<endl;
    cin>>obj2.hotelowner;
    cout<<"Enter the item size:"<<endl;
    int n1;
    cin>>n1;
    string food_name1;
    int food_number1;
    cout<<"Enter the items for hotel 2"<<endl;
    for(int i=0;i<n1;i++){
        cout<<"Enter the food pair "<<i+1<<endl;
        cin>>food_name1;
        cin>>food_number1;
        obj2.items.push_back({food_name1,food_number1});
    }
    cout<<"Hotel name is "<<obj.hotelname<<". The owner of the hotel is "<<obj.hotelowner<<".The items in the hotel are ";
    for(auto x: obj.items){
        // cout<<x<<endl;
        cout<<"("<<x.first<<" "<<x.second<<")"<<",";
    }

    cout<<" "<<endl;

    cout<<"Hotel name is "<<obj2.hotelname<<". The owner of the hotel is "<<obj2.hotelowner<<"The items in the hotel are ";
    for(auto y: obj2.items){
        // cot<<x<<endl;
        cout<<"("<<y.first<<" "<<y.second<<")"<<",";
    }
}
*/
/* excercise of oops 
#include <iostream>
#include <list>
using namespace std;
class zoo{
    public:
    string name;
    string breed;
    int age;
    list<string>food;
    zoo(string an_name,string an_breed,int an_age){
        name=an_name;
        breed=an_breed;
        age=an_age;
    }
    void get_info(){
        cout<<"Animal "<<name<<" is of "<<breed<<".It's age is "<<age<<" .The food it eats is "<<endl;
        for(auto x:food){
            cout<<x<<endl;
        }
    }
};
int main(){
    zoo animal1("Dog","lab",10);
    animal1.food={"Eggs"};
    animal1.food.push_back("Milk");
    cout<<"enter the no of items: ";
    int n;
    cin>>n;
    string s;
    for(int i=0;i<n;i++){
        cout<<"Enter food item "<<i+1<<endl;
        cin>>s;
        animal1.food.push_back(s);
    }
    animal1.get_info();
}*/

