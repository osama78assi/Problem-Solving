#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "\t--> [3D Vector] <--\n";
    vector<vector<vector<int>>> threeD ={{{1, 2, 3},{4, 5, 6}},{{7, 8, 9},{1, 2, 3}},{{4, 5, 6},{7, 8, 9}}};
    threeD.at(0).at(0).push_back(10);
    for(auto row : threeD) {
        for(auto col : row) {
            for(auto any: col) {
                cout << any << " ";
            }
            cout << "\n";
        }
        cout << "----\n";
    }
    cout << "\n###########\n";
    cout << "\t--> [3D Map] <--\n";
    map<string, map<string, map<string, int>>> marks;
    marks["osama"]["general"]["english"] = 88;
    marks["osama"]["general"]["arabic"] = 99;
    marks["osama"]["basics"]["c++"] = 99;
    marks["osama"]["basics"]["python"] = 100;
    marks["osama"]["spescialize"]["ml"] = 100;
    marks["osama"]["spescialize"]["ai"] = 90;

    marks["rozi"]["general"]["english"] = 100;
    marks["rozi"]["general"]["arabic"] = 95;
    marks["rozi"]["basics"]["c++"] = 89;
    marks["rozi"]["basics"]["python"] = 93;
    marks["rozi"]["specialize"]["ml"] = 99;
    marks["rozi"]["specialize"]["ai"] = 94;

    for(auto name : marks) {
        cout << name.first << ":\n\t";
        for(auto type : name.second) {
            cout << type.first << ":\n";
            for(auto subject : type.second) {
                cout << "\t\t" << subject.first << ": " << subject.second << "\n";
            }
            cout << "\t";
        }
        cout << "---------\n";
    }
    return 0;
}
