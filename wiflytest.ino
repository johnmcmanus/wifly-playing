#include <SPI.h>
#include <WiFly.h>

void setup() {

  WiFly.begin();

  if (!WiFly.join("2WIRE663", "7843895335", WEP_MODE)) {
  // Handle the failure
}


  // Rejoice in your connection
}
