#include <iostream>
#include <bits/stdc++.h>
#include <list>
#include <vector>
using namespace std;


int main(){

    string init;
    cin>> init;
    list<char> L;
    for (auto c: init) L.push_back(c);
    auto cursor = L.end() ;
    int q;
    cin >> q;
    while(q--){
        char op;
        cin>> op;
        if(op =='P'){
            char str1;
            cin>> str1;
            L.insert(cursor, str1);
        }else if( op=='L'){
            if(cursor != L.begin()) cursor--;
        }else if (op =='R'){
            if(cursor != L.end()) cursor++;
        }else {
            if(cursor!= L.begin()){
                cursor--;
                cursor = L.erase(cursor);

            }
        }
    }
    for (auto c: L) cout<< c;
    return 0 ;

}