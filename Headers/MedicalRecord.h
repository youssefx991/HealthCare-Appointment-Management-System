#ifndef MEDICAL_RECORD_H
#define MEDICAL_RECORD_H

#include <string>
#include <iostream>
#include "Appointment.h"

class Appointment;

class MedicalRecord
{
public:
    static int medicalRecordID;
    Appointment* appointment;
    std::string diagnosis;

    MedicalRecord();
    MedicalRecord(Appointment, std::string);
    void viewMedicalRecord();
    void addMedicalRecordtoPatient(Appointment, std::string);
};

#endif