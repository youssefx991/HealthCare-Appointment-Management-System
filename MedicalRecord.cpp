#include "Headers/MedicalRecord.h"
#include "vector"
int MedicalRecord::medicalRecordID = 0;

MedicalRecord::MedicalRecord() {}
MedicalRecord::MedicalRecord(Appointment appointment, std::string diagnosis)
{
    this->appointment = appointment;
    this->diagnosis = diagnosis;

    this->medicalRecordID++;
}

void MedicalRecord::viewMedicalRecord()
{
    // TODO - cout
    //  appointmnet date - doctor name - patient name - diagnosis
}

void MedicalRecord::addMedicalRecordtoPatient(Appointment new_appointment, std::string diagnosis)
{
    Patient current_patient = new_appointment.patient;
    std::vector<Appointment> current_patient_appointments = current_patient.appointments;

    for (Appointment appointment : current_patient_appointments)
    {
        if (appointment.appointmentID == new_appointment.appointmentID)
        {
            appointment.status = AppointmentStatus::APPROVED;
            MedicalRecord new_medical_record(appointment, diagnosis);
            current_patient.medicalHistory.push_back(new_medical_record);
        }
    }
}