#ifndef TEMP_CONTROLLER_H
#define TEMP_CONTROLLER_H

// Déclaration des fonctions liées au contrôle de la température
void control_temperature(void);
void activate_heating(void);
void activate_cooling(void);
void do_nothing(void);

// Déclaration de la fonction du capteur, qui sera mockée dans les tests
int read_temperature_sensor(void);

#endif /* TEMP_CONTROLLER_H */
