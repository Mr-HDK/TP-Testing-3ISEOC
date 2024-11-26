#include "unity.h"
#include "temp_controller.h"  // Inclure le fichier d'en-tête de la fonction à tester
#include "mock_temp_sensor.h"  // Inclure le mock de la fonction

void setUp(void) {
    // Ceedling exécute ce code avant chaque test
}

void tearDown(void) {
    // Ceedling exécute ce code après chaque test
}

void test_control_temperature_high(void) {
    // Simuler une température élevée (35°C)
    read_temperature_sensor_ExpectAndReturn(35);

    // Tester si la fonction de refroidissement est activée
    activate_cooling_Expect();

    control_temperature();
}

void test_control_temperature_low(void) {
    // Simuler une température basse (10°C)
    read_temperature_sensor_ExpectAndReturn(10);

    // Tester si la fonction de chauffage est activée
    activate_heating_Expect();

    control_temperature();
}

void test_control_temperature_normal(void) {
    // Simuler une température normale (25°C)
    read_temperature_sensor_ExpectAndReturn(25);

    // Tester si aucune action n'est effectuée
    do_nothing_Expect();

    control_temperature();
}

//enelver la fnc main pour éviter le confit
