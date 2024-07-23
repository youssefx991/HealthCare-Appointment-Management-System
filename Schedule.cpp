#include "Headers/Schedule.h"

Schedule::Schedule()
{
    Appointment::Appointment();
}


Schedule::Schedule(Patient patient, Doctor doctor, std::string date)
{
    Appointment::Appointment(patient, doctor, date);
}

void Schedule::viewSchedule()
{
    
    for (Appointment appointment : Appointment::doctor.schedule)
    {
        appointment.viewAppointment();
    }
}
void Schedule::approveAppointment(int appointmentID)
{
    
    for (Appointment appointment : Appointment::doctor.schedule)
    {
        if (appointment.appointmentID == appointmentID)
        {
            appointment.status = AppointmentStatus::APPROVED;
            MedicalRecord medicalRecord(appointment, "Diagnosis");
            medicalRecord.addMedicalRecordtoPatient(appointment, "Diagnosis");
        }
    }
}