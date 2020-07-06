#include "../text_lib/std_lib_facilities.h"

int main() {
    
    // lowercase alphabet
    for (int i = 0; i < 26; ++i) {
        int ia = char('a' + i);
        cout << char('a' + i) << '\t' << ia << '\n';
    }

    // uppercase alphabet
    for (int i = 0; i < 26; ++i) {
        int ia = char('A' + i);
        cout << char('A' + i) << '\t' << ia << '\n';
    }

    // digits
    for (int i = 0; i < 10; ++i) {
        int ia = char('0' + i);
        cout << char('0' + i) << '\t' << ia << '\n';
    }
}
