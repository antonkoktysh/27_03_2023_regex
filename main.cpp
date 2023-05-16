#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main() {
    regex pattern(R"(\d+\.\d+)");
    regex pattern_(R"(\b\d{4}\b)");

    //cout << "hello\tworld" << endl;
    //cout << R"(hello\tworld)" << endl;

    string number;
    getline(cin, number);

    //Check is our number a year
    if (regex_match(number, pattern_)) {
        cout << "Hooray!!!" << endl;
    }
    else {
        cout << "No match" << endl;
    }
    return 0;
}
