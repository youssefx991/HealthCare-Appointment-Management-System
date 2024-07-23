#include <string>
#include <iostream>
#include "Appointment.h"
class MedicalRecord
{
public:
    static int medicalRecordID;
    Appointment appointment;
    std::string diagnosis;

    MedicalRecord();
    MedicalRecord(Appointment, std::string);
    void viewMedicalRecord();
    void addMedicalRecordtoPatient(Appointment, std::string);
};