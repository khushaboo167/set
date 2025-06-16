#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(10);
    s.insert(111);

    s.erase(3);


    int target = 4;
    if(s.find(target) != s.end()){
        cout<<"exists"<<endl;
    }
    else{
        cout<<"does not exists";
    }

    cout<<s.size()<<endl;

    
    for(int ele : s){
        cout<<ele<<" ";
    }
}