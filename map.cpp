#include<iostream>
#include<map>
using namespace std;


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
int main(){
    
}