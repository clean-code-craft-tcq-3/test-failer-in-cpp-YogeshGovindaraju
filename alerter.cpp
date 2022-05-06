#include "alerter.h"

int main()
{
    int alertFailureCount = ZERO;
    alertInCelcius(400.5, alertFailureCount, networkAlertStub);
    assert(alertFailureCount == 1);
    alertInCelcius(303.6, alertFailureCount, networkAlertStub);
    assert(alertFailureCount == 2);
    alertInCelcius(250.9, alertFailureCount, networkAlertStub);
    assert(alertFailureCount == 2);
    alertInCelcius(201.1, alertFailureCount, networkAlertStub);
    assert(alertFailureCount == 2);
    std::cout << alertFailureCount << " alerts failed.\n";
    std::cout << "All is well (maybe!)\n";
    return 0;
}
