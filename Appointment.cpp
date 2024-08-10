#include "Headers/Appointment.h"

int Appointment::appointmentID = 0;

Appointment::Appointment() {}


Appointment::Appointment(Patient patient, Doctor doctor, std::string date)
{
    this->patient = &patient;
    this->doctor = &doctor;
    this->date = date;
    this->status = AppointmentStatus::PENDING;

    this->appointmentID++;
}

void Appointment::viewAppointment()
{
    // TODO - cout
}

void Appointment::cancelAppointment(Appointment appointment)
{
    this->status = AppointmentStatus::CANCELLED;
}
void Appointment::RescheduleAppointment(Appointment appointment)
{
    this->doctor = appointment.doctor;
    this->date = appointment.date;
    this->status = AppointmentStatus::PENDING;
}