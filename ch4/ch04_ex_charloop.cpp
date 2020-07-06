#include "../text_lib/std_lib_facilities.h"

int main() {
    int i = 0;

    while (i < 26) {
        char char_to_print = char('a' + i);
        int char_int = char_to_print;
        
        cout << char('a' + i) << '\t' << char_int << '\n'; 
        ++i;
    }
}

void main2() {

    char i = 'a';

    while (i != 'z' + 1) {
        int k = i; // convert char to int

        cout << i << '\t' << k << '\n'; 
        ++i;
    };
}
