
#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,string>gender; //key & value

    gender["sarawer"]="male";
    gender["rahat"]="male";
    gender["barsha"]="female"; 

    //here these strings are case sensitive


    cout<<gender["sarawer"]<<' '<<gender["rahat"]<<' '<<gender["barsha"];


    //frequency count;
    map<int,int>count;
    vector<int>v={1,1,1,2,1141234234,1141234234,42342345,42342345,42342345,1,2};

    for(auto u:v)count[u]++;
    

    for(auto u:count){
        cout<<u.first<<':'<<u.second<<endl; //key dase sorted
    }

}