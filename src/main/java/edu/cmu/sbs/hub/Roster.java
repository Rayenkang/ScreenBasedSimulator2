package edu.cmu.sbs.hub;

import edu.cmu.sbs.hub.datatype.Patient;
import edu.cmu.sbs.hub.datatype.exception.PatientNotFoundException;
import edu.cmu.sbs.hub.logging.RecordKeeperEZ;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

import java.util.HashMap;

public class Roster {

    final public RecordKeeperEZ recordKeeperEZ = new RecordKeeperEZ();
    final private Logger logger = LoggerFactory.getLogger(this.getClass());
    private HashMap<String, Patient> patientMap;

    public Roster() {

        this.patientMap = new HashMap<>();

        // PatientAlpha - for testing purpose only
        Patient preExistingPatient = new Patient("abcdefg", "PatientAlpha", Patient.Gender.FEMALE, 22, 100.0, 5.5);
        patientMap.put(preExistingPatient.patientHash, preExistingPatient);
        recordKeeperEZ.registerPatient(preExistingPatient);

    }

    public Patient locatePatient(String hash) throws PatientNotFoundException {
        if (patientMap.containsKey(hash)) {
            return patientMap.get(hash);
        } else {
            logger.error("Patient " + hash + " does not exist!");
            throw new PatientNotFoundException("Patient " + hash + " does not exist!");
        }
    }

    public void checkInPatient(Patient patient) {
        if (patientMap.containsKey(patient.patientHash)) {
            patientMap.put(patient.patientHash, patient);
            recordKeeperEZ.registerPatient(patient);
        } else {
            logger.error("Patient Already checked in");
        }
    }


}
