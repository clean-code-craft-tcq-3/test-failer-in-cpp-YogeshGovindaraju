#ifndef ALERTERINFO
#define ALERTERINFO

#include <iostream>
#include <assert.h>

#define ZERO 0
#define SUCCESS 200
#define FAILED 500
#define CELCIUSTHRESHOLD 150
#define FARENHEITTOCELCIUSFORMULA(farenheit) (farenheit - 32) * 5 / 9

enum codeEnvironment
{
    TEST,
    INTEGRATION
};

int alertFailureCount = ZERO;
codeEnvironment environment = INTEGRATION;

codeEnvironment getCodeEnvironment()
{
    std::cout << "Code environment 0-TEST 1-INTEGRATION : " << environment << std::endl;
    return environment;
}

void setCodeEnvironment(codeEnvironment codingEnvironment)
{
    environment = codingEnvironment;
    std::cout << "Code environment 0-TEST 1-INTEGRATION : " << environment << std::endl;
}

#endif