#include "unity.h"
#include "temp_controller.h"
#include "mock_temp_sensor.h" // Généré par CMock

TempController controller;

void setUp(void) {
    init_temp_controller(&controller, 30); // Seuil de température 30°C
}

void tearDown(void) {
    // Réinitialisation si nécessaire
}

// Test de l'initialisation
void test_init_temp_controller_should_set_initial_values(void) {
    TEST_ASSERT_EQUAL(30, controller.threshold);
    TEST_ASSERT_EQUAL(0, controller.alert_triggered);
}

// Test : Aucune alerte si température sous le seuil
void test_monitor_temperature_should_not_trigger_alert_below_threshold(void) {
    read_temperature_sensor_ExpectAndReturn(25); // Simule 25°C
    monitor_temperature(&controller);
    TEST_ASSERT_FALSE(is_alert_triggered(&controller));
}

// Test : Déclenchement de l'alerte au-dessus du seuil
void test_monitor_temperature_should_trigger_alert_above_threshold(void) {
    read_temperature_sensor_ExpectAndReturn(35); // Simule 35°C
    monitor_temperature(&controller);
    TEST_ASSERT_TRUE(is_alert_triggered(&controller));
}

// Test : Désactivation de l'alerte une fois la température normale
void test_monitor_temperature_should_reset_alert_when_below_threshold(void) {
    read_temperature_sensor_ExpectAndReturn(35); // Simule 35°C
    monitor_temperature(&controller);
    TEST_ASSERT_TRUE(is_alert_triggered(&controller));
    
    read_temperature_sensor_ExpectAndReturn(28); // Simule 28°C
    monitor_temperature(&controller);
    TEST_ASSERT_FALSE(is_alert_triggered(&controller));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_init_temp_controller_should_set_initial_values);
    RUN_TEST(test_monitor_temperature_should_not_trigger_alert_below_threshold);
    RUN_TEST(test_monitor_temperature_should_trigger_alert_above_threshold);
    RUN_TEST(test_monitor_temperature_should_reset_alert_when_below_threshold);
    return UNITY_END();
}
