#ifndef TEMP_CONTROLLER_H
#define TEMP_CONTROLLER_H

typedef struct {
    int threshold;       // Seuil d'alerte
    int alert_triggered; // État de l'alerte
} TempController;

int read_temperature_sensor(void); // Lecture de température
void init_temp_controller(TempController* controller, int threshold);
void monitor_temperature(TempController* controller);
int is_alert_triggered(TempController* controller);

#endif // TEMP_CONTROLLER_H
