#include "../text_lib/std_lib_facilities.h"

bool is_smallest(double a, double smallest) {
    return a < smallest;
}

bool is_largest(double a, double largest) {
    return a > largest;
}

double convert_to_m(double a, string unit) {
    if (unit == "cm") {
        return a / 100;
    } else if (unit == "m") {
        return a;
    } else if (unit == "ft") {
        return a * 12 * 2.54 / 100;
    } else {
        // for "in" unit
        return a * 2.54 / 100;
    }
}

bool is_valid_unit(string unit) {
    if (unit == "cm") {
        return true;
    } else if (unit == "m") {
        return true;
    } else if (unit == "ft") {
        return true;
    } else if (unit == "in") {
        return true;
    } else {
        return false;
    }
}

int main() {
    double largest = 0; // in m
    double smallest = 0; // in m
    double a = 0;
    string unit = "";
    double sum = 0;

    vector<double> v = {};

    while (cin >> a >> unit) {
        if (!is_valid_unit(unit)) {
            simple_error("Not valid unit!");
        }
        double val_m = convert_to_m(a, unit);
        
        // for initialisation of loop
        if (v.size() == 0) {
            smallest = a;
            largest = a;
        }

        if (is_smallest(val_m, smallest)) {
            cout << a << unit << " the smallest so far\n";
            smallest = a;
        }
        if (is_largest(val_m, largest)) {
            cout << a << unit << " the largest so far\n";
            largest = a;
        }
        sum += val_m;
        v.push_back(val_m);
    }

    sort(v);
    cout << "Smallest (in m): " << smallest << '\n';
    cout << "Largest (in m): " << largest << '\n';
    cout << "Sum (in m): " << sum << '\n';
    cout << "Number of values: " << v.size() << '\n';
    cout << "Values (in m): ";
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
    
    return 0;
}
