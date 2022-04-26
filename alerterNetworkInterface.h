#ifndef ALERTERNETWORKINTERFACE
#define ALERTERNETWORKINTERFACE

int networkAlert(float celcius)
{
    std::cout << "Integration Environment \n";
    /* As the Real Network Communication Interface is not available, assuming the celsius value is less than threshold*/
    (void)celcius;
    return SUCCESS;
}

#endif
