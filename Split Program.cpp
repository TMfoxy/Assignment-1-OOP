#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<string> split(string t, string d) {
    vector<string> result;
    size_t M = 0;
    if (t.empty()) {
        result.push_back("");
        return result;
    }
    while ((M = t.find(d)) != string::npos) {
        result.push_back(t.substr(0, M));
        t.erase(0, M + d.length());
    }
    result.push_back(t);
    return result;
}
int main() {
    string t, d;
    cout << "Enter the split: ";
    getline(cin, t);
    cout << "Enter the delimiter: ";
    getline(cin, d);
    vector<string> result = split(t, d);
    cout << "[";
    for (size_t d = 0; d < result.size(); ++d) {
        cout << "'" << result[d] << "'";
        if (d < result.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
    return 0;
}
