#include "TaskComWifi.h"
#include <WiFi.h>                     // Permet la gestion du Wifi

extern const char* ssid;
extern const char* password;
// ===========================================================================================================
// Tâche : Gestion communication Modbus    
// ===========================================================================================================
void TaskComWifi(void * param){
    
    WiFi.begin(ssid, password);

    Serial.print("Connexion WiFi");

    while (WiFi.status() != WL_CONNECTED) {
        vTaskDelay(500);
        Serial.print(".");
    }

  while(1){


  Serial.println("\nConnecté !");
  Serial.print("Adresse IP : ");
  Serial.println(WiFi.localIP());

    vTaskDelay(1000 / portTICK_PERIOD_MS); // Délai de 1 seconde pour éviter de saturer le CPU
  }
} // Fin TaskModbus
// ===========================================================================================================