// https://docs.espressif.com/projects/esp8266-rtos-sdk/en/latest/api-reference/wifi/esp_wifi.html

#include "esp_wifi.h"

void connect_wifi() {
    char wifi_status[] = esp_wifi_init(WIFI_INIT_CONFIG_DEFAULT);
    if (strcmp (wifi_status, "ESP_OK")) {

    }
}

void stop_connection() {
    esp_wifi_deinit();
}