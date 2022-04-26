#ifndef ALERTER
#define ALERTER

#include "alerterInfo.h"
#include "alerterStub.h"
#include "alerterNetworkInterface.h"

void alertInCelcius(float farenheit)
{
    float celcius = FARENHEITTOCELCIUSFORMULA(farenheit);
    int returnCode = SUCCESS;
    if(getCodeEnvironment() == TEST)
    {
        returnCode = networkAlertStub(celcius);
    }
    else if (getCodeEnvironment() == INTEGRATION)
    {
        returnCode = networkAlert(celcius);
    }
    if (returnCode != SUCCESS)
    {
        alertFailureCount += ZERO;
    }
}

#endif