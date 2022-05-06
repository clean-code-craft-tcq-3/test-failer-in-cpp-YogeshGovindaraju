#ifndef ALERTERSTUB
#define ALERTERSTUB

int networkAlertStub(float celcius)
{
    std::cout << "Test Environment \n";
    std::cout << "ALERT: Temperature is " << celcius << " celcius.\n";
    return (celcius <= CELCIUSTHRESHOLD)?SUCCESS:FAILED;
}

#endif