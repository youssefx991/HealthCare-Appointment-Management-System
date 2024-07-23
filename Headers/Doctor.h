#include "Appointment.h"

class Doctor : public User
{
public:
    std::vector<Appointment> schedule;
    std::string speciality;

    Doctor();
    Doctor(std::string name, std::string email, std::string password, std::string speciality);

    void viewPatientDetails(int);
};