#ifndef ALERTER
#define ALERTER

#define ZERO 0
#define ONE 1
#define SUCCESS 200
#define FAILED 500
#define CELCIUSTHRESHOLD 150

#include <iostream>
#include <assert.h>
#include "alerterStub.h"
#include "alerterNetworkInterface.h"

float convertFarenheitToCelsius(float farenheit)
{
    return (farenheit - 32) * 5 / 9 ;
}

void alertInCelcius(float farenheit, int &alertFailureCount, int (*networkAlert)(float))
{
    float celcius = convertFarenheitToCelsius(farenheit);
    int returnCode = SUCCESS;
    returnCode = networkAlert(celcius);
    if (returnCode != SUCCESS)
    {
        alertFailureCount += ONE;
    }
}

#endif
