
// This code is 11 on Leetcode . It takes O(n^2) Time complexity.
// But we have time constrainsts 10^5 ,that will be ((10^5)^2)
// So we need to optie it in Two pointer in O(n) time complexity. 
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a[6] = {7, 4, 3, 2, 5, 1}; 
    vector<int> areas; 
    int n;
  
    
    cout<<"Enter total heights:- "<<endl;
    cin>>n;

    int MaxWater=0;
     vector<int> hei(n);
    cout << "Put Heights of Containers: ";
    for (int i =0; i<n ; ++i) {
        
        cin>>hei[i];
        
    }
    cout << endl;


    for (int i = 0; i < hei.size(); i++) { 
        for (int j = i + 1; j < hei.size(); j++) {
            int height = min(a[i], a[j]); 
            int width = j - i; 
            int area = height * width; 
            areas.push_back(area); 
        }
    }

    cout << "Calculated Areas: ";
    for (int area : areas) {
        cout << area << " ";

        if(MaxWater > area){
    MaxWater = MaxWater;
    }else {
    MaxWater = area;
    }

    }
    cout << endl;

    cout << "Max Water: " << MaxWater << endl;  
    return 0;
}
