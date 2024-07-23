#include "Headers/PatientAppointment.h"

PatientAppointment::PatientAppointment()
{
    Appointment::Appointment();
}

PatientAppointment::PatientAppointment(Patient patient, Doctor doctor, std::string date)
{
    Appointment::Appointment(patient, doctor, date);
}

void PatientAppointment::bookAppointment(Appointment appointment)
{
    patient.appointments.push_back(appointment);
    doctor.schedule.push_back(appointment);
}
void PatientAppointment::viewCurrentAppointments()
{
    for (Appointment appointment : patient.appointments)
    {
        appointment.viewAppointment();
    }
}