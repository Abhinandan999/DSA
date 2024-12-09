/* Here we use recursion ,which is less optimised with 
respect to iterative */

#include<iostream>
#include<vector>
using namespace std;

int Binary_search(vector<int>& arr, int tar, int st, int end){

    int mid = st + ( end - st ) / 2;
    if( tar > mid ){
       return Binary_search(arr , tar , mid+1 , end);
    }else 
    if( tar < mid ){
       return Binary_search(arr , tar , st , mid);
    }
    else {
        return mid;
  }

}


int main(){

vector<int> arr={ 1 , 2 , 5 , 7 , 9 , 13 , 19 , 22};

for(int i = 0;i < 8;i++ ){
    cout<< arr[i]<<" ";
}

int result = Binary_search(arr,19,1 ,22);
cout<<endl;
 if (result != 1) {
        cout << "Target "<< result <<"found in array" << endl;
    } else {
        cout << "Target not found in the array." << endl;
    }


}