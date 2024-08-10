#include <iostream>
#include "./Headers/Profile.h"
#include "./Headers/Patient.h"
#include "Headers/PatientAppointment.h"

int main()
{
    Profile profile("JAN", 'm', "Siemens");
    Patient patient("youssef", "youssef@youssef.com", "ysf123", profile);
    
    std::cout<<patient.email<<std::endl;

    std::cout<<"Hello World"<<std::endl;

    return 0;
}