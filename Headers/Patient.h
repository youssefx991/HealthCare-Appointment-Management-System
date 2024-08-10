#ifndef PATIENT_H
#define PATIENT_H

#include <vector>
#include "Profile.h"
#include "User.h"
#include "MedicalRecord.h"

class MedicalRecord;
class Appointment;
class Profile;

class Patient : public User
{
public:
    Profile profile;
    std::vector<MedicalRecord> medicalHistory;
    std::vector<Appointment> appointments;

    Patient();
    Patient(std::string name, std::string email, std::string password, Profile);

    void viewDetails();
    void viewMedicalHistory();
};

#endif