//
// Created by Adrià Martínez on 21/04/2017.
//
#include <iostream>
#include <vector>


using namespace std;

class bloom_filter {
public:
    int m;
    vector<bool> v;
    bloom_filter(int m, vector<string> &set){
        this ->v.reserve(m);
        //inicialitzem el vector a 0
        for(int i = 0; i < m; ++i){
            set[i] = false;
        }
        this->m = m;
        initilize_filter(set);
    }

    void initilize_filter(vector<string> &set){
        for(int i = 0; i < set.size(); ++i){
            int i = function1(set[i]);
            set[i] = true;
        }
    }

    int function1(string s){

    }

    int function2(string s){

    }

    int function3(string s){

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
    bloom_filter b(m, set);


}
