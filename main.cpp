#include <string>
#include <iostream>
#include <vector>

#include "Finder.h"
int main(void) {

std::string s1, s2;
s1 = "4634554567";
s2 = "45689";

Finder f;

std::vector<int> result = f.findSubstrings(s1, s2);

for (int i=0; i < 5; i++) {
    std::cout << result.at(i);
}
    std::cout << "" << std::endl;
};