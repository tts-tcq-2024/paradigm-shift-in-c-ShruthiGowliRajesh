#include <stdio.h>
#include <assert.h>

static bool batteryIsOk(float temperature, float soc, float chargeRate) {
  if(temperature < 0 || temperature > 45) {
    printf("Temperature out of range!\n");
    return false;
  }
   if(soc < 20 || soc > 80)  {
    printf("soc out of range!\n");
    return false;
  }
   if(chargeRate > 0.8) {
    printf("charge rate out of range!\n");
    return false;
  }
  return true;
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
