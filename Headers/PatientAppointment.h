#ifndef PATIENT_APPOINTMNET_H
#define PATIENT_APPOINTMNET_H

#include "Appointment.h"

class PatientAppointment : public Appointment
{
public:
    PatientAppointment();
    PatientAppointment(Patient, Doctor, std::string);

    void bookAppointment(Appointment);
    void viewCurrentAppointments();
};

#endif