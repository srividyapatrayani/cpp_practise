
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