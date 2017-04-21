#include <bitset>
#include <iostream>
#define SIZEF 256

using namespace std;

struct bloomF {
    private std::bitset<SIZEF> filter;
     
    void filter (int i) {
        filter[i] = 1;
    }
     
    bool test (int i) {
        return filter[i];
    }
};