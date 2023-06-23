//constructor is called by default when our object is called here we are assigning a name to the string which is not public through a constructor
//This is for single
/*
#include<iostream>
using namespace std;
class student{
    string name;//making name as private assignning a name to it and getting it
    public://public as they are not accessible in main if not public
    int age;
    bool gender;
    student(string s){
        name=s;
    }

    void printInfo(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<gender<<endl;
    }

    void setName(string s){
        name=s;

    }

    void getName(){
        cout<<name<<endl;
    }
};

int main(){
    student a("Urvi");
    a.getName();
    return 0;
}*/

/*If we want to create another hotel again we have all the new data with all format to avoid this we can use a constructor
#include<iostream>
#include<vector>
#include<list>
using namespace std;
class hotel{
    public:
    string hotelname;
    string hotelowner;
    vector<pair<string,int>>items;

    hotel(string hotelname,string hotelowner,vector<pair<string,int>>items){
        this->hotelname=hotelname;
        this->hotelowner=hotelowner;
        for(auto x : items)
        {
            this->items.push_back({x.first,x.second});
        }
    }
};
int main(){
    vector<pair<string,int>>sample;
    int n1;
    cin>>n1;
    string food_name1;
    int food_number1;
    cout<<"Enter the items for hotel"<<endl;
    for(int i=0;i<n1;i++){
        cout<<"Enter the food pair "<<i+1<<endl;
        cin>>food_name1;
        cin>>food_number1;
        sample.push_back({food_name1,food_number1});
    }
    hotel obj("Hotel1","Owner1",sample);
    cout<<obj.hotelname<<" "<<"belongs to "<<obj.hotelowner;
    for(auto y: obj.items){
        cout<<"("<<y.first<<" "<<y.second<<")"<<",";
    }
    
}*/
/*
#include<iostream>
#include<vector>
#include<list>
using namespace std;
class hotel{
    public:
    string hotelname;
    string hotelowner;
    vector<pair<string,int>>items;
    hotel(string hotelname,string hotelowner){
    hotelname=hotelname;
    hotelowner=hotelowner;
}
};
int main(){
//to get info of single obj 
    hotel obj1("Hotel1","Owner1");
    obj1.items.push_back({"Idly",2});
    obj1.items.push_back({"Vada ",2});
    cout<<"The name of the hotel1 is: "<<obj1.hotelname<<endl;
    cout<<"The owner of the hotel1 is: "<<obj1.hotelowner<<endl;
    
    for(auto x:obj1.items){
        cout<<x.first<<" left are "<<x.second<<endl;
    }
}*/

/*If we have multiple objects and we have get their info in a single rather than writing cout for twice we can defina a method in the class to display them
#include<iostream>
#include<vector>
#include<list>
using namespace std;
class hotel{
    public:
    string hotelname;
    string hotelowner;
    vector<pair<string,int>>items;
    hotel(string hotel_name,string hotel_owner){
    hotelname=hotel_name;//never give same names to the constructor arguments and the variable as the compiler may get confused if u want to use name then u should define it with this
    hotelowner=hotel_owner;
}
void getinfo(){
        cout<<"The name of the hotel1 is: "<<hotelname<<endl;
    cout<<"The owner of the hotel1 is: "<<hotelowner<<endl;
    
    for(auto x:items){
        cout<<x.first<<" left are "<<x.second<<endl;
    }
    }
};
int main(){
//to get info of single obj 
    hotel obj1("Hotel1","Owner1");
    obj1.items.push_back({"Idly",2});
    obj1.items.push_back({"Vada ",2});
    obj1.getinfo();
}*/
