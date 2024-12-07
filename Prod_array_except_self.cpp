#include<iostream>
using namespace std;

int main(){
    int a[4] = {1,2,3,4};
    int b[4];
    int mul=1;
    for(int i= 0;i<4;i++){
        for(int j=0;j<4;j++){

            if(i != j){
                 mul=mul*a[j];
            }
           
        }
         b[i]=mul;
    } 
    cout<<"Product of Array is:- "<<endl;
    for(int i = 0 ; i < 4; i++ ){
            cout<<b[i]<<" ";
            }

return 0;
}