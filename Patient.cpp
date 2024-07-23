#include "Headers/Patient.h"

Patient::Patient()
{
    User::User();
}
Patient::Patient(std::string name, std::string email, std::string password, Profile profile)
{
    User::User(name, email, password);
    this->profile = profile;
}

void Patient::viewDetails()
{
    // TODO - Cout
}
void Patient::viewMedicalHistory()
{
    for (MedicalRecord medicalRecord : medicalHistory)
    {
        medicalRecord.viewMedicalRecord();
    }
}
