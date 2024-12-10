#include<iostream>
#include<vector>
using namespace std;


int main(){

vector<int> a = {0 , 3 , 8 , 9 , 5 , 2};

int st = 1;
int end = a.size()-2;

for(int i = st; i < end ; i++ ){

    if(a[i]> a[i-1] && a[i] > a[i+1]){
        cout<<"Mountain peak value is:- "<< a[i] <<endl;
    }
} 
return 0;
}