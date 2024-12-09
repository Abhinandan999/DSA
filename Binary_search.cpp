#include<iostream>
using namespace std;

int Binary_search(int a[], int n, int tar){

int st = 0, end = (n-1) ;  

while( st <= end){

int mid =(st + end ) / 2;

if(tar > a[mid] ){
    st = mid + 1;
    }
    else if( tar < a[mid]){
            end = mid-1 ;
        }
    else{
        return mid;
        }
}

return 1;
}



int main(){
    
    int n , target;
    int a[n]; 

    cout<<"Enter size of array:- "<<endl;
    cin>>n;

    cout<<"Enter the array members:- "<<endl;
    for(int i = 0 ; i < n ; i++ ){
        cin>>a[i];
    }

    cout<<"Array members:- "<<endl;
    for(int i = 0 ; i < n ; i++ ){
        cout<<a[i]<<" ";
    }

    cout<<endl;

    cout<<"Enter the Target:- "<<endl;
    cin>>target;

    int result = Binary_search(a, n, target);

    if (result != 1) {
        cout << "Target found at index: " << result << endl;
    } else {
        cout << "Target not found in the array." << endl;
    }

}