#ifndef MISALIGNED
#define MISALIGNED

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <sstream>

struct ColorPair
{
    std::vector<std::string> number;
    std::vector<std::string> majorColorList;
    std::vector<std::string> minorColorList;
};

int printColorMap(ColorPair &colorPair, ColorPair &colorPairAlignment)
{
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int numberOfMajorColors = sizeof(majorColor) / sizeof(majorColor[0]);
    int numberOfMinorColors = sizeof(minorColor) / sizeof(minorColor[0]);
    std::stringstream pairNumberBuffer, majorColorBuffer, minorColorBuffer;
    int i = 0, j = 0;
    std::string pairNumber;
    for(i = 0; i < numberOfMajorColors; i++)
    {
        for(j = 0; j < numberOfMinorColors; j++)
        {
            pairNumber = std::to_string(i * 5 + j + 1);
            pairNumberBuffer << std::setw(10) << pairNumber ;
            majorColorBuffer << std::setw(10) << majorColor[i] ;
            minorColorBuffer << std::setw(10) << minorColor[j] ;
            std::cout << pairNumberBuffer.str() << " | " << majorColorBuffer.str() << " | " << minorColorBuffer.str() << "\n";
            colorPair.number.push_back(pairNumber);
            colorPair.majorColorList.push_back(majorColor[i]);
            colorPair.minorColorList.push_back(minorColor[j]);
            colorPairAlignment.number.push_back(pairNumberBuffer.str());
            colorPairAlignment.majorColorList.push_back(majorColorBuffer.str());
            colorPairAlignment.minorColorList.push_back(minorColorBuffer.str());
            pairNumberBuffer.str("");
            majorColorBuffer.str("");
            minorColorBuffer.str("");
        }
    }
    return i * j;
}

#endif
