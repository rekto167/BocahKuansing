#include <SoftwareSerial.h>
SoftwareSerial module_bluetooth(0, 1); // pin RX | TX
void setup() 
{
    Serial.begin(9600); //menggunakan komunikasi serial softawre IDE pada 9600 bps
    Serial.println("Input command AT:");
    module_bluetooth.begin(38400); //Baudrateb module bluetooth
}
void loop() {
    //Membaca terhubungnya koneksi HC05 dengan arduino pada serial Monitor
    if (module_bluetooth.available())
    Serial.write(module_bluetooth.read()); 
    //Membaca data dari Arduino Serial monitor yang akan dikirim ke HC05
    if (Serial.available())
    module_bluetooth.write(Serial.read());
}
