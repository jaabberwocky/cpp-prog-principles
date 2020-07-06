#include "../text_lib/std_lib_facilities.h"

int main()
{
    string first_name = "???";
    string friend_name = "???";
    char friend_sex = 0;
    int age = -1;

    cout << "Enter the name of the person you want to write to: \n";
    cin >> first_name;
    cout << "Enter the name of another friend: \n";
    cin >> friend_name;
    cout << "What is the gender of " << friend_name << ": (m/f) \n";
    cin >> friend_sex;
    cout << "Please enter age of recipient: \n";
    cin >> age;

    if (age <= 0 || age >= 110)
    {
        simple_error("you're kidding!");
    }

    cout << "Dear " << first_name << ", \n";
    cout << "\tHow are you? I am fine. I miss you.\n";
    cout << "Have you seen " << friend_name << " lately? ";

    if (friend_sex == 'm')
    {
        cout << "If you see " << friend_name << " please ask him to call me.\n";
    }
    else
    {
        cout << "If you see " << friend_name << " please ask her to call me.\n";
    }

    if (age < 12)
    {
        cout << "Next year you will be " << age + 1 << ".\n";
    }
    else if (age == 17)
    {
        cout << "Next year you will be able to vote.\n";
    }
    else if (age > 70)
    {
        cout << "I hope you are enjoying retirement.\n";
    }

    cout << "Yours sincerely\n\n"
         << "Tobias" << endl;
}