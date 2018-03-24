#include <math.h>
#include "mgos_arduino_sht1x.h"

#define MGOS_SHT1x_RES_FAIL -12700

SHT1x *mgos_sht1x_create(int dataPin, int clockPin) 
{
  return new SHT1x(dataPin, clockPin);
}

void mgos_sht1x_close(SHT1x *sht1x) 
{
  if (sht1x != nullptr) 
  {
    delete sht1x;
    sht1x = nullptr;
  }
}

int mgos_sht1x_read_temperatureC(SHT1x *sht1x) 
{
  if (sht1x == nullptr) return MGOS_SHT1x_RES_FAIL;
  float res = sht1x->readTemperatureC();
  return isnan(res) ? MGOS_SHT1x_RES_FAIL : round(res * 100.0);
}

int mgos_sht1x_read_temperatureF(SHT1x *sht1x) 
{
  if (sht1x == nullptr) return MGOS_SHT1x_RES_FAIL;
  float res = sht1x->readTemperatureF();
  return isnan(res) ? MGOS_SHT1x_RES_FAIL : round(res * 100.0);
}

int mgos_sht1x_read_humidity(SHT1x *sht1x) 
{
  if (sht1x == nullptr) return MGOS_SHT1x_RES_FAIL;
  float res = sht1x->readHumidity();
  return isnan(res) ? MGOS_SHT1x_RES_FAIL : round(res * 100.0);
}

