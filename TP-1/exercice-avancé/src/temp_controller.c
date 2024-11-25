#include "temp_controller.h"

// Simule une lecture de capteur (remplaçable par une vraie implémentation)
int read_temperature_sensor(void) {
    return 25; // Par défaut, une température simulée
}

// Configure les paramètres initiaux du système
void init_temp_controller(TempController* controller, int threshold) {
    controller->threshold = threshold;
    controller->alert_triggered = 0;
}

// Vérifie la température et déclenche une alerte si nécessaire
void monitor_temperature(TempController* controller) {
    int current_temp = read_temperature_sensor();
    if (current_temp > controller->threshold) {
        controller->alert_triggered = 1; // Alerte déclenchée
    } else {
        controller->alert_triggered = 0; // Pas d'alerte
    }
}

// Renvoie l'état de l'alerte
int is_alert_triggered(TempController* controller) {
    return controller->alert_triggered;
}
