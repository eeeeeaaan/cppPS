#include <iostream>
#include <bits/stdc++.h>
#include <list>
#include <vector>
using namespace std;

// 1406 에디터
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
// 5397 키로거
int main(){
    int n ;
    cin >>  n;
    while (n--){
        string op ;
        cin >> op;

        list<char> result;
        auto cursor = result.begin();

        for (char c: op){
            if(c =='<') {
                if (cursor != result.begin()) cursor--;
            }else if(c=='>'){
                if(cursor != result.end()) cursor++;
            }else if (c=='-'){
                if(cursor != result.begin()){
                cursor--;
                cursor = result.erase(cursor);}
            }
            else{
                result.insert(cursor, c);
            }

        }for(auto i :result){
            cout<< i;
        }
cout<<"\n";
    }

return 0;
}
