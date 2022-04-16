#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ifstream in("in.txt");
    ofstream out("out.txt");
    vector<int> v;
    int x;
    while (!in.eof()) {
        in >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());

    int a = v[1] - v[0];
    for (int i = 1; i < v.size() - 1; ++i) {
        if (v[i + 1] - v[i] != a) {
            out << "No";
            return 0;
        }
    }
    out << "Yes";
}
