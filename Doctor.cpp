#include "Headers/Doctor.h"

Doctor::Doctor() : User()
{
    // User::User();
}
Doctor::Doctor(std::string name, std::string email, std::string password, std::string speciality) : User(name, email, password)
{
    // User:User(name, email, password);

    this->schedule = schedule;
    this->speciality = speciality;
}

void Doctor::viewPatientDetails(int patientID)
{
    for (Appointment appointment : schedule)
    {
        if (appointment.patient->userID == patientID)
        {
            appointment.patient->viewDetails();
        }
    }
}