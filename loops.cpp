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