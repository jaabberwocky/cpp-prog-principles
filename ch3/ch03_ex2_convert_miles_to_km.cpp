#include "../text_lib/std_lib_facilities.h"

int main() {
    double miles = 0;

    cout << "Please enter the number of miles to convert: \n";
    cin >> miles;

    if (miles <= 0) {
        simple_error("Less than 0 miles given.");
    };

    cout << miles << " miles converts to " << miles * 1.609 << " kilometres.\n";

}