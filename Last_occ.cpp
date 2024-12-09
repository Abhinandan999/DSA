#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v(6);
    vector<int> m;
    


 cout<<"Size of vector is:- "<<v.size()<<endl; 
 
cout<<" Enter the element:-"<<endl;
for(int i=0 ; i<6 ; i++){
  
    cin>>v[i];
    
}


cout<<" Element's are :-"<<endl;

for(int i=0 ; i<v.size() ; i++){

    cout<<v[i]<<" ";   


}

cout<<endl<<endl;

int n;
cout<<" Enter the number whose last iteration you want to chek:- "<<endl;
cin>>n;
for(int i=0; i<v.size();i++){

if(v[i]==n){
    m.push_back(i);
}

}

cout<<"Iteration place Element's are :-"<<endl;

for(int i=0 ; i<m.size() ; i++){

    cout<<m[i]<<" ";  

}
cout<<endl<<endl;

int z = m.back();
cout<<"Last Place of iteration in  vector is:- "<<z<<endl;

return 0;
}
