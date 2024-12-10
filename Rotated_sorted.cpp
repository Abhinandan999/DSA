#include<iostream>
#include<vector>
using namespace std;

int Binary_search(vector<int>& a,int n,int target){

int start = 0;
int end = n-1;


int mid = start + (end - start)/2;

if( target < mid){
    end=mid;
}else if(target > mid){
    start = mid + 1;
}else{
    return  target; 
}
return 1;

}



int main(){

int n = 8;

    int a[n]={3,4,5,6,7,0,1,2};

    n=sizeof(a)/sizeof(int);


int min=0;

vector<int> vec(n);
int st;
int end = n;

for(int i=0; i<n ; i++){
    if(a[i] < a[min]){
           min = i;
    }
}

for(int i = min; i<8;i++){
cin>>vec[i];
}

for(int i = 0; i < min ;i++){
cin>>vec[i];
}

for(int i = 0 ; i < n ; i++){
    cout<<vec[i]<<" ";
}
int z;
cout<<"Enter the target:- "<<endl;
cin>>z;

int answer = Binary_search(vec,n,z); 

if(answer != 1){
    cout<<"Target Found at index "<< answer;
}else {
    cout<<"Target not found"<<endl;
}


return 0;
}