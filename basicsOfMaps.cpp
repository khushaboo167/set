// #include<iostream>
// #include<unordered_map>
// using namespace std;
// int main(){
//     pair<string,char> p;
//     p.first="khush";
//     p.second='A';
//     cout<<p.first<<" "<<p.second;

// }




// #include<iostream>
// #include<unordered_map>
// using namespace std;
// int main(){
//     unordered_map<string,int> m;
//     pair<string,int> p1;
//     p1.first = "khushi";
//     p1.second = 76;
//     pair<string,int> p2;
//     p2.first = "jayshree";
//     p2.second = 15;
//     pair<string,int> p3;
//     p3.first = "sandhya";
//     p3.second = 49;
//     m.insert(p1);
//     m.insert(p2);
//     m.insert(p3);
//     // for(pair<string,int> p:m){
//     for(auto p:m){
//         cout<<p.first<<" "<<p.second<<endl;
//     }
// }




#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;
    pair<string,int> p1;
    p1.first = "khushi";
    p1.second = 76;
    m.insert(p1);
    // m["khushi"] = 99;
    m["java"] = 89;
    m["shree"] = 18;
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
   cout<<m.size();
   cout<<endl;
    m.erase("java");
    m.erase("sanket"); //kuch erase nhi hoga our error v nhi aayega
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
}