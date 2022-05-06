#ifndef MISALIGNEDTEST
#define MISALIGNEDTEST

#define MAXIMUMCOLORPAIRS 25

#include <assert.h>

void testColorPairValues(ColorPair &colorPair)
{
    assert(colorPair.number.at(0) == "1");
    assert(colorPair.majorColorList.at(0) == "White");
    assert(colorPair.minorColorList.at(0) == "Blue");
    assert(colorPair.number.at(10) == "11");
    assert(colorPair.majorColorList.at(10) == "Black");
    assert(colorPair.minorColorList.at(10) == "Blue");
    assert(colorPair.number.at(21) == "22");
    assert(colorPair.majorColorList.at(21) == "Violet");
    assert(colorPair.minorColorList.at(21) == "Orange");
}

void testColorMapAlignment(ColorPair &colorPairAlignment)
{
    int i = 0, j = 0;
    for(j = 0; j < MAXIMUMCOLORPAIRS; j++)
    {
        assert((colorPairAlignment.number.at(i).size()) == (colorPairAlignment.number.at(j).size()));
        assert((colorPairAlignment.majorColorList.at(i).size()) == (colorPairAlignment.majorColorList.at(j).size()));
    }
}

#endif
