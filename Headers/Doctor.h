#ifndef DOCTOR_H
#define DOCTOR_H


#include "Appointment.h"

class Appointment;
class Doctor : public User
{
public:
    std::vector<Appointment> schedule;
    std::string speciality;

    Doctor();
    Doctor(std::string name, std::string email, std::string password, std::string speciality);

    void viewPatientDetails(int);
};

#endif