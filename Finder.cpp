#include "Finder.h"

    using namespace std;

    vector<int> Finder::findSubstrings(string s1, string s2) {

        vector<int> result;
        bool check = false;

        for(size_t i = 1; i <= s2.size(); i++) {
            if (!check) {
                size_t found = s1.find(s2.substr(0, i));
                if (found == string::npos) {
                    check = true;
                    result.push_back(-1);
                }
                else {
                    result.push_back(found);
                }
            }
            else {
            result.push_back(-1);
            }



            /*if (found == string::npos) {
                result.push_back(-1);
            } else {
                result.push_back(found);
            }*/
        }
        return result;
    }
