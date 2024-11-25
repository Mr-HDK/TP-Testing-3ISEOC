#include "temp_controller.h"  // Inclure le fichier d'en-tête

// Code source (restant inchangé)
int read_temperature_sensor(void) {
    return 25;
}

void activate_heating(void) {
    printf("Chauffage activé!\n");
}

void activate_cooling(void) {
    printf("Refroidissement activé!\n");
}

void do_nothing(void) {
    printf("Température idéale, aucune action nécessaire.\n");
}

void control_temperature(void) {
    int temperature = read_temperature_sensor();

    if (temperature > 30) {
        activate_cooling();
    } else if (temperature < 15) {
        activate_heating();
    } else {
        do_nothing();
    }
}
