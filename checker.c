#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

static bool IsTempOk(float temperature)
    {
         if(temperature < 0 || temperature > 45) {
            printf("Temperature is out of range!");
            return false;
        }
        else 
        {
             printf("Temperature is within Range");
            return true;
        }
    }
 
    static bool IsSOCOk(float soc)
    {
         if(soc < 20 || soc > 80)
         {
            printf("State of Charge is out of range!");
            return false;
         }
        else  
        {
             printf("State of Charge is within Range");
             return true;
        }
    }
 
    static bool IsChargeRateOk(float chargeRate)
    {
        if(chargeRate > 0.8) {
            printf("Charge Rate is out of range!");
            return false;
        }
        else 
        {
            printf("Charge Rate is within Range");
             return true;
        }
    }
    static bool batteryIsOk(float temperature, float soc, float chargeRate) {
         bool tempok =IsTempOk(temperature);
         bool socok =IsSOCOk(soc);
         bool chargerateok =IsChargeRateOk(chargeRate);        
        return tempok && socok && chargerateok;
    }
 
 int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}


