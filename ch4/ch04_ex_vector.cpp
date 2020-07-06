#include "../text_lib/std_lib_facilities.h"

int main() {

    vector<double> v;
    v.push_back(2.7);
    v.push_back(3.3);

    for (int i = 0; i < v.size(); ++i){
        cout << v[i] << '\n';
    }
}