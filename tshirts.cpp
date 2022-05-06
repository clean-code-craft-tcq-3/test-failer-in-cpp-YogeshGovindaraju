#include <iostream>
#include <assert.h>

char getSizeName(int centimeter)
{
    char sizeName = '\0';
    if(centimeter <= 38)
    {
        sizeName = 'S';
    }
    else if(centimeter <= 42)
    {
        sizeName = 'M';
    }
    else if(centimeter > 42)
    {
        sizeName = 'L';
    }
    return sizeName;
}

int main()
{
    assert(getSizeName(37) == 'S');
    assert(getSizeName(40) == 'M');
    assert(getSizeName(43) == 'L');
    assert(getSizeName(38) == 'S');
    assert(getSizeName(42) == 'M');
    std::cout << "All is well (maybe!)\n";
    return 0;
}
