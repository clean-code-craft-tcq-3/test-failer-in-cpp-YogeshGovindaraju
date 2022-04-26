#include <iostream>
#include <assert.h>
#include <vector>
#include <string>

std::vector<int> number;
std::vector<std::string> majorColorList;
std::vector<std::string> minorColorList;

int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            std::cout << i * 5 + j << " | " << majorColor[i] << " | " << minorColor[i] << "\n";
            number.push_back(i * 5 + j);
            majorColorList.push_back(majorColor[i]);
            minorColorList.push_back(minorColor[i]);
        }
    }
    return i * j;
}

int main() {
    int result = printColorMap();
    assert(result == 25);
    assert(number.at(0) == 1);
    assert(majorColorList.at(0) == "White");
    assert(minorColorList.at(0) == "Blue");
    assert(number.at(10) == 11);
    assert(majorColorList.at(10) == "Black");
    assert(minorColorList.at(10) == "Blue");
    assert(number.at(21) == 22);
    assert(majorColorList.at(21) == "Violet");
    assert(minorColorList.at(21) == "Orange");
    std::cout << "All is well (maybe!)\n";
    return 0;
}
