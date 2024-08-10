#ifndef APPOINTMENT_H // Check if MY_HEADER_H is not defined
#define APPOINTMENT_H // Define MY_HEADER_H to prevent re-inclusion

// Header content goes here (declarations, definitions, etc.)


#include "Patient.h"
#include "Doctor.h"

class Doctor;
class Patient;
enum AppointmentStatus
{
    APPROVED,
    CANCELLED,
    PENDING
};

class Appointment
{
public:
    static int appointmentID;
    Patient* patient;
    Doctor* doctor;
    std::string date;
    AppointmentStatus status;

    Appointment();
    Appointment(Patient, Doctor, std::string);

    void viewAppointment();
    void cancelAppointment(Appointment);
    void RescheduleAppointment(Appointment);


};

#endif // End the conditional compilation block