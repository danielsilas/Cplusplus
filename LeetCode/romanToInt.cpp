#include <iostream>
#include <string>
#include <map>

using namespace std;

int romanToInt(string s) {
    map<char, int> map = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int sum = 0;
    int n = s.length();
    int idx = 0;
    while (idx < n) {
        char l = s[idx];
        char pre = idx - 1 < 0 ? 0 : idx - 1;
        char nex = idx + 1 > n - 1 ? n - 1 : idx + 1;

        if (map[l] < map[nex]) {
            sum += map[nex] - map[l];
            idx += 1;
        } else {
            sum += map[l];
        }
        idx += 1;
    }

    return sum;
}

int main() {
    string s = "MCMXCIV";
    cout << romanToInt(s) << endl;
    return 0;
}





