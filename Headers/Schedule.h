#include "Appointment.h"
#include "MedicalRecord.h"
#include "Doctor.h"

class Schedule : public Appointment
{
public:
    Schedule();

    Schedule(Patient, Doctor, std::string);

    void viewSchedule();
    void approveAppointment(int appointmentID);
};