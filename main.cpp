#include <iostream>
#include <string>
using namespace std;
struct Project {
    string name;
    string description;
};
int main() {
    cout << "=== Backend Portfolio API ===" << endl;
    cout << "Language: C++" << endl;
    Project p1 = {"Portfolio API", "RESTful API in C++"};
    cout << "Project: " << p1.name << endl;
    cout << "API Running on port 8080..." << endl;
    return 0;
}