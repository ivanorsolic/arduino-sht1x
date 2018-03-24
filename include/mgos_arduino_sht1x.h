#include "SHT1x.h"

#ifdef __cplusplus
extern "C"
{
#endif

SHT1x *mgos_sht1x_create(int dataPin, int clockPin);
void mgos_sht1x_close(SHT1x *sht1x);
int mgos_sht1x_read_temperatureC(SHT1x *sht1x);
int mgos_sht1x_read_temperatureF(SHT1x *sht1x);
int mgos_sht1x_read_humidity(SHT1x *sht1x);

#ifdef __cplusplus
}
#endif  /* __cplusplus */

