#include "misaligned.h"
#include "misalignedTest.h"

int main()
{
    ColorPair colorPair, colorPairAlignment;
    int result = printColorMap(colorPair, colorPairAlignment);
    assert(result == 25);
    testColorPairValues(colorPair);
    testColorMapAlignment(colorPairAlignment);
    std::cout << "All is well (maybe!)\n";
    return 0;
}
