//
// Created by Adrià Martínez on 21/04/2017.
//
#include <iostream>
#include <vector>
#include <cmath>


using namespace std;

class bloom_filter {
public:
    int m,k;
    vector<bool> v;
    bloom_filter(vector<string> &set, int m, int k){
        this ->v.reserve(m);
        //inicialitzem el vector a 0
        for(int i = 0; i < m; ++i){
            set[i] = false;
        }
        this->m = m;
        this->k = k;
        initilize_filter(set);
    }

    // implementa double hashing a partir de function1 function2
    void initilize_filter(vector<string> &set){
        for(int i = 0; i < set.size(); ++i){
            for(int j = 0; j < k; ++j){
                //double hashing
                int i = (function1(set[i])+ i*function2(set[i]))%m;
                set[i] = true;
            }

        }
    }

    double ascii_converter(string s){
        double n;
        for(int i = 0; i < s.length(); ++i){
            n += s[i]*pow(128,i);
        }
        return n;
    }

    int function1(string s){

    }

    int function2(string s){

    }

};

class bloom_filter_sh256{

};

void Function1(){


}

void  Function2(){


}


int main() {
    //number of keys
    int n, m, k;
    cin >> n >> m >> k;
    vector<string> set;
    for(int i = 0; i < n; ++i){
        string s;
        cin >> s;
        set[i] == s;
    }
    bloom_filter b(set, m, k);


}
