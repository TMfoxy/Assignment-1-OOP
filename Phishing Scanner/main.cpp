#include <iostream>
#include <fstream>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <unistd.h>
using namespace std;
int main() {
    unordered_map<string, int> Words = {
            {"login", 3}, {"password", 3}, {"credit card", 3}, {"social security", 3},
            {"verify", 3}, {"bank", 2}, {"urgent", 2}, {"click here", 2},
            {"free", 1}, {"limited time", 2}, {"account suspended", 3}, {"paypal", 2},
            {"ebay", 2}, {"apple", 2}, {"microsoft", 2}, {"facebook", 2},
            {"google", 2}, {"amazon", 2}, {"password reset", 3}, {"invoice", 2},
            {"open attachment", 3}, {"claim your prize", 3}, {"nigerian prince", 3},
            {"account locked", 3}, {"personal information", 3}, {"billing", 2},
            {"wire transfer", 3}, {"act now", 2}, {"limited offer", 2}, {"security alert", 3}
    };
    string fileName;
    cout << "Enter the name of the email text file (e.g: email.txt): ";
    getline(cin, fileName);
    ifstream file(fileName);
    if (!file.is_open()) {
        cerr << "Error: file not found '" << fileName << "'." << endl;
        return 1;
    }
    string Z;
    unordered_map<string, pair<int, int>> t;
    while (getline(file, Z)) {
        transform(Z.begin(), Z.end(), Z.begin(), ::tolower);
        for (const auto& term : Words) {
            size_t p = 0;
            int L = 0;
            while ((p = Z.find(term.first, p)) != string::npos) {
                L++;
                p += term.first.length();
            }
            if (L > 0) {
                t[term.first].first += L;
                t[term.first].second = term.second;
            }
        }
    }
    file.close();
    int totalPoint = 0;
    for (const auto& e : t) {
        int occurrences = e.second.first;
        int point = e.second.second;
        totalPoint += occurrences * point;
        cout << e.first << " occurred " << occurrences << " times (Total: " << occurrences * point << " points)" << endl;
    }
    cout << "Total phishing points: " << totalPoint << endl;
    if (totalPoint > 10) {
        cerr << "This email is SPAM." << endl;
    } else {
        cout << "This email is not SPAM." << endl;
    }
    return 0;
}