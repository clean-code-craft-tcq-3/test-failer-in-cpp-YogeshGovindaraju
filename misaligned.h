#ifndef MISALIGNED
#define MISALIGNED

#include <iostream>
#include <assert.h>
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
    std::stringstream pairNumberBuffer, majorColorBuffer, minorColorBuffer;
    int i = 0, j = 0;
    std::string pairNumber;
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            pairNumber = std::to_string(i * 5 + j);
            pairNumberBuffer <<  pairNumber ;
            majorColorBuffer <<  majorColor[i] ;
            minorColorBuffer <<  minorColor[i] ;
            std::cout << pairNumberBuffer.str() << " | " << majorColorBuffer.str() << " | " << minorColorBuffer.str() << "\n";
            colorPair.number.push_back(pairNumber);
            colorPair.majorColorList.push_back(majorColor[i]);
            colorPair.minorColorList.push_back(minorColor[i]);
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