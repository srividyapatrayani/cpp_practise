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