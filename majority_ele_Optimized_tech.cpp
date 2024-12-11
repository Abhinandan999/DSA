#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;

int main(){

    vector<int> vec;
    vec={1,1,2,2,2,3,3,3,3};
    
    cout<<endl<<"Size of vector :- "<<vec.size()<<endl;
    int n =vec.size();
    int freq=0;
    int ans=vec[0];

    for(int i=1;i<n;i++){

        if(vec[i] == vec[i-1]){
            freq++;
        }else{
            freq =1;
        }

        }
        
        if(freq>n/2){
            return ans; 
            
        cout<<endl<<ans<<endl; 

    }

    return ans;
}
