#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    vector <string>sameTime ={"00:00","11:11","22:22"};
    
    while (t--)
    {
        string time ;
        cin>>time;
        
        bool found = false ;

        for(auto s : sameTime){
            if(time <= s){
                cout<<s<<endl;
                found = true ;
                break;
            }
        }

        if(!found)
        cout<<"00:00"<<endl;
    }
    
    return 0;
}