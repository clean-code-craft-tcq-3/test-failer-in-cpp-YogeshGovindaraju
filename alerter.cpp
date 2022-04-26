#include "alerter.h"

int main()
{
    setCodeEnvironment(TEST);
    alertInCelcius(400.5);
    assert(alertFailureCount == 1);
    alertInCelcius(303.6);
    assert(alertFailureCount == 2);
    alertInCelcius(250.9);
    assert(alertFailureCount == 2);
    alertInCelcius(201.1);
    assert(alertFailureCount == 2);
    std::cout << alertFailureCount << " alerts failed.\n";
    std::cout << "All is well (maybe!)\n";
    return 0;
}
