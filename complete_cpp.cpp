/*#include <iostream> normal pattern
using namespace std;
int main()
{
    int row,column;
    cin>>row>>column;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=column;j++){
                cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}*/

/*#include <iostream> hallow rectangle
using namespace std;
int main()
{
    int row,column;
    cin>>row>>column;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=column;j++){
            if(i==1 || i==row || j==1 || j==column){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
         cout<<endl;
    }
   

    return 0;
}
*/

/*#include<iostream> #half pyramind
using namespace std;
int main(){
    int row;
    cin>>row;
    for(int i=row;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }




    return 0;
}*/


/*#include<iostream> #180 pyramid
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                cout<<" ";
            }else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}*/
 
 /*#include<iostream>
using namespace std;
int main(){
    int row;
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}

5
1 
1 2
1 2 3
1 2 3 4 
1 2 3 4 5*/
/*
#include<iostream>
using namespace std;
int main(){
    int row;
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
5
1 
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
/*
#include<iostream>
using namespace std;
int main(){
    int c;
    cin>>c;
    int count=1;
    for(int i=1;i<=c;i++){
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}
5
1 
2 3 
4 5 6 
7 8 9 10       
11 12 13 14 15 */

/*
#include<iostream> # butterfly pattern
using namespace std;
int main(){
    int row;
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        int space=(2*row)-(2*i);
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=row;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        int space=(2*row)-(2*i);
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
4
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *

*/

/*
#include<iostream> #prime
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool flag=0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<"Non prime";
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"Prime"<<endl;
    }
    return 0;
}
*/
/*
#include<iostream> #reverse
 using namespace std;
 int main(){
    int n;
    cin>>n;
    int rev=0;
    while(n>0){
        int lastdigit=n%10;
        rev=rev*10+lastdigit;
        
        n=n/10;
    }
    cout<<rev<<endl;
    return 0;

 }
*/
/*
functions in cpp
#include<iostream>
using namespace std;
int add(int a,int b){
    int sum=a+b;
    return sum;
 }
int main(){
    int a=2;
    int b=3;
    cout<<add(a,b)<<endl;
    return 0;
}*/
/* prime using functions
#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int n){
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}

*/
/*array user input
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
   return 0; 
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max_no=arr[0];
    int min_no=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max_no){
            max_no=arr[i];
        }
        if(arr[i]<min_no){
            min_no=arr[i];
        }
    }
    cout<<max_no<<endl;
    cout<<min_no<<endl;
    return 0;
}

*/

/*
liner search
#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int key){
    for(int i=0;i<=n;i++){
        if(arr[i]==key){
           return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<linearsearch(arr,n,key)<<endl;
}

*/

/*
binary search
#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
cout<<binarysearch(arr,n,key)<<endl;
    return 0;
}

*/
/* finding all continous subarrays
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){

        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for( int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
*/
/* max sum n contious sub array brute force
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){

        cin>>arr[i];
    }
    int max_sum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for( int k=i;k<=j;k++){
                sum+=arr[k];
            }
            max_sum=max(max_sum,sum);
        }
    }
    cout<<max_sum<<endl;
    return 0;
}
*/
/* taking input and traversing a matrix of mxn
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    float arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
*/

/*
pointers
#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *ptr;
    ptr=&a;
    cout<<ptr<<endl;
    *ptr=20;
    ptr++;
    cout<<ptr<<endl;
    return 0;
}*/
/*
#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30};
    cout<<*arr<<endl;
    int *ptr=arr; //note that pointer is similar to the index here it is referencing the indexes
    //cout<<*ptr;
    for(int i=0;i<3;i++){
        cout<<*ptr<<endl;
        ptr++; *ptr means value,ptr means sddress. 
    }
    return 0;
}
*/

/* pointer to pointer
#include<iostream>
using namespace std;
int main(){
    int a=10;  //using **q is like pointing directlyto a and *q is pointing to p
    int *p;
    p=&a;
    cout<<*p<<endl;
    int **q=&p;
    cout<<**q<<endl;
}
*/

/* strings 
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cin>>str;
    cout<<str;
    return 0;
}
*/
/* when we wnat a string of particualr size of same string
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    string str1(5,'n');
    cout<<str1<<endl;
    return 0;
}
*/
/* getting str as a user input
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    //getline(cin, str);vidya is a good girl
//vidya is a good girl
    cin>>str;
    //vidya is a good girl
    //vidya
    cout<<str<<endl;
    return 0;
}
*/
/* string methods
#include<iostream>
#include<string>
using namespace std;
int main(){
   string str;
   string s1="fam";
   string s2="ily";
   //s1.append(s2);
   //cout<<s1<<endl;
   string s3="family ily";
   s3.clear();
   //cout<<s1+s2<<endl;
    return 0;
}
*/
/*str sort
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
   string str="xyzabcmnop";
   sort(str.begin(),str.end());
   cout<<str;
    return 0;
}
*/
/* #bit manipulation
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int getBit(int n,int pos){
        return ((n&(1<<pos))!=0);
   }
int main(){
   cout<<getBit(2,2)<<endl;
    return 0;
}
*/


/* using vectors
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }//1 2 3 
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }//1 2 3
    for(auto element:v){
        cout<<element<<endl;
    }//1 2 3

    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }//1 2
    vector<int>v2(3,50);
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<endl;
    }// 50 50 50

    swap(v,v2);
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<endl;
    }

    sort(v.begin(),v.end());
    return 0;
}
*/
/* using pair we can use it with vectors also
#include<iostream>
using namespace std;
int main(){
    pair<int,char> p;
    p.first=3;
    p.second='a';
    return 0;
}
*/
/* all about pairs
#include<bits/stdc++.h>
using namespace std;
void print(){
    cout<<"vidya";
}
int sum(int a,int b){
    return a+b;
}
int explainPair(){  //if writing pairs more than one in one func dont declare them with same name
    pair<int,int>p={1,3};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,pair<int,int>>p1={1,{3,4}};
    cout<<p1.first<<" "<<p1.second.second<<" "<<p1.second.first<<endl;
    pair<int,int>arr[]={{1,2},{1,2},{2,3}};

}

void explainVector(){
    vector<int>v;
    v.push_back(1);//append similar to python
    v.emplace_back(2);//similar to push_back dynamicalluy inc size and adds at last
    vector<pair<int,int>>vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);
    vector<int>v1(5,200);//with some size and elements we want
    vector<int>v(5);
    vector<int>v2(v1);
    //printing in vectors
    vector<int>::iterator it=v.begin(); //begin points to memory of so it have memory address to access it we have access it through *
    it++;
    cout<<*(it)<<""; 


    it=it+2;
    cout<<(*it)<<" ";

    for (vector<int>::iterator it=v.begin();it !=v.end();it++){
        cout<<(*it)<<" ";
    }
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    for(auto it:v){
        cout<<it<<" ";
    }

    //erasing
    //{10,20,30}
    v.erase(v.begin()+1);//{10,30}
    //we may either give value or address
    v.erase(v.begin()+2,v.begin()+4);//{start,end} from start to end-1 gets deleted

    //insert function
    vector<int>(2,100);//{100,100}
    v.insert(v.begin(),300);//{300,100,100} single
    v.insert(v.begin()+1,2,10);//{300,10,10,100,100} multiple
    //inserting one vector to other
    vector<int>copydummyvec(2,50);//{50,50}
    v.insert(v.begin(),copydummyvec.begin(),copydummyvec.end());//{50,50,300,10,10,100,100} place we want to insert indexes from where have to insert
    //swap
    //v1->{10,20}
    //v2->{30,40}
    v1.swap(v2);//v1->{30,40},v2->{10,20}

    //clear ,empty
    //clears the whole list
    //boolen whether empty or not
}

void explainlist(){
    list<int>ls;//same as vector but provides front operations
    ls.push_back(2);//{2}
    ls.emplace_back(4);//{2,4}
    ls.push_front(5);//{5,2,4}//similar to insert but at starting
    ls.emplace_front();//{2,4};
}

void expliandeque(){
    //similar to list
}

void explainStack(){//indexing not allowed push,pop,top,remove but not indexing
    stack<int>st;
    st.push(1);//{1}
    st.push(2);//{2,1}
    st.push(3);//{3,2,1}
    st.emplace(5);//{5,3,2,1}
    cout<<st.top()<<endl;//prints 5
    st.pop();//deletes top elemnt 5
    st.size();
    st.empty();
    stack<int>st1,st2;
    st1.swap(st2);
}

void explainqueue(){
    queue<int>q;
    q.push(1);//{1}
    q.push(2);//{1,2}
    q.emplace(4);//{1,2,4}
    q.back()+=5;//here back here 4and add5 so 4+5=9
    q.front();//1
    q.pop();//{2,9}
    //size swap empty are same
}
void explainSet(){
    set<int>st;//stores in sorted and unique order
    st.insert(1);//{1}
    st.insert(3);//{1,3}
    st.insert(3);//{1,3}
    st.insert(2);//{1,2,3}
    auto it=st.find(3);//return iterator which points the 3
    //if element is not found in set it sends end element
    st.erase(3);
    //finding an elemnt an erasing it
    auto it =st.find(3);
    //or we can directly delte
    st.erase(it);
    //erasing multiple
    //directly
    //st.erase(val1,val2);
    //using finding ans erasing
    auto it1=st.find(2);
    auto it2=st.find(4);
    st.erase(it1,it2);//after erase{1,4,5}
    st.erase(3);
}

void explainMultiset(){
    //everything as set
    //stores duplicates also
    multiset<int>ms;
    ms.insert(1);//{1}
    ms.insert(1);//{1,1}
    ms.insert(1);//{1,1,1}
    ms.erase(1);//all 1's erased
    ms.erase(ms.find(1));//erases only one 1

}

void explainmap(){//everything as key-value pair
    map<int,int>mp;
    map<int,pair<int,int>>mapp;
    map<pair<int,int>,int>mpp2;
    mp[1]=2;
    mp.insert({3,1});
    mpp2[{2,3}]=10;//stores unique keys in sorted order
    //{
        //{2,3}
        //{3,1}
    //}
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;

    }
    cout<<mp[1];
    auto it=mp.find(3);//{3,1}
    //cout<<*(it);//.second elemnt *t means it gives elemnt 
}

void explainMUltmap(){
    //everything as map only it can store multiple keys
    //only mpp[key] cannot be used
}
*/

//byhere all containers and iterators are completed are completed

//algorithms

/*
a={1,2,3,4}
sort(a,a+4) i.e(start,end)
if vector 
sort(v.begin(),v.end())
to sort in desc 
sort(start,end,greater<int>)
sorting it to our favour-eg in pair sorting it based on second element,if second elemnt is same then sort it acc to 1st element in descending
pair<int,int>a[]={{1,2},{2,1},{4,1}};
sort(a,a+n,comp)
{4,1},{2,1},{1,2}

{}


#include<iostream>
using namespace std;
int main(){

    //cout<<explainPair()<<endl;

    return 0;
}*/


/* oops in cpp nasic usage screating a class  and accessing the elements
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
*/
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

//for multiple 
/*
#include<iostream>
using namespace std;
class student{
    string name;//making name as private assignning a name to it and getting it
    public://public as they are not accessible in main if not public
    int age;
    bool gender;
    student(string s,int a,int g){
        name=s;
        age=a;
        gender=g;
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
        cout<<age<<endl;
        cout<<gender<<endl;
    }
};

int main(){
    student a("Urvi",31,0);
    a.getName();
    return 0;
}//we are creating object by giving all avlues in a single line
//These are examples of parameterized constructor
*/

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

//Virtual functions
/* If our base class is a virtual class and the inherited class has a method as asame as base class but with different behaviour then the most derived class behaviour is the behaviour that the method will have
#include<iostream>
using namespace std;
class instrument{
public:
virtual void Makesound(){
    cout<<"Instrument Playing"<<endl;
}
};
class Accordion:public instrument{
    void Makesound(){
        cout<<"Accordian is playing"<<endl;
    }
};


int main(){
    instrument* i1=new Accordion(); //pointer should be there to assign the base class with properties of dderived class
    i1->Makesound();//after we give pointers this should be the way we should access it
}*/


/* Pure virtual functions*/
/*#include<iostream>
using namespace std;
class instrument{
public:
virtual void Makesound()=0;
};
class Accordion:public instrument{
    void Makesound(){
        cout<<"Accordion is playing"<<endl;
    }

        //syntax is this equal to 0
    //this means that the virtual function makesound should have its own value to print
};
class Accordion2:public instrument{
    void Makesound(){
        cout<<"Accordian2 is playing"<<endl;
    }
}; //if it is there then output will be accorion2 is playing 
//if there is no implementation of in piano then it will be a error because we dont have no default makesound as it ia a pure virtual function
class Piano:public instrument{
    void Makesound(){
    cout<<"Piano is playing"<<endl;
    }
};

int main(){
    instrument* i1=new Accordion();
    //i1->Makesound();
    instrument* i2=new Piano();
    //i2->Makesound();
    instrument* instruments[2]={i1,i2};//Making all objects to print with a single loop
    for(int i=0;i<2;i++){
        instruments[i]->Makesound();
    }
}*/



//Polymorphism-> describes ability of object to exist in many forms we can have 2 or more objects that inherit from same base class those objects can have the method that have same name but different implementation
/*
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
    protected:
    string zooname;
    int no_of_animals;
    public:
    zoo(string an_name,string an_breed,int an_age){
        name=an_name;
        breed=an_breed;
        age=an_age;
        no_of_animals=0;
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
    void checkanimals(){
        if(no_of_animals>3){
            cout<<"There are few "<<name<<" in the zoo and its number is "<<no_of_animals<<endl;
        }
        else{
            cout<<"The count is not sustainable "<<no_of_animals<<endl;
        }
    }
};


class zoo2:public zoo{
    public:
    zoo2(string name,string breed,int age):zoo(name,breed,age){


    }
    void place(){
        cout<<"Place of Zoo2"<<endl;
        no_of_animals++;
    }

};
class zoo3:public zoo{
    public:
    zoo3(string name,string breed,int age):zoo(name,breed,age){


    }
    void place(){
        cout<<"Place of Zoo3"<<endl;
        no_of_animals++;
    }

};
int main(){
    zoo2 obj_zoo2("Dog","Lab",12);
    zoo3 obj_zoo3("Lion","Ind",17);
    obj_zoo2.place();
    obj_zoo2.place();
    obj_zoo2.place();
    obj_zoo2.place();
    obj_zoo2.place();
    obj_zoo3.place();

    zoo* p1=&obj_zoo2;
    zoo* p2=&obj_zoo3;

    p1->checkanimals();
    p2->checkanimals();
}*/


//Abstraction
/* to hide complex details behind simple procedures 
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
        cout<<"Took a selfie"<<endl;
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
    s1->Takeselfie();
    SmartPhone* s2=new Iphone();
    s2->Takeselfie();
    s1->Takeselfie();

}*/

//pointers
//exception handling
