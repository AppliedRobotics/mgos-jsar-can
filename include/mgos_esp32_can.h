#ifndef MGOS_ESP32_CAN_H
#define MGOS_ESP32_CAN_H

#include "CAN_config.h"

#ifdef __cplusplus
#include "ESP32CAN.h"
#else
#include "CAN.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

int8_t mgos_can_init(void);
int8_t mgos_can_write_frame (const CAN_frame_t *p_frame);
int8_t mgos_can_stop(void);
int8_t mgos_can_config_filter(const CAN_filter_t* p_filter);


#ifdef __cplusplus
}
#endif  /* __cplusplus */

#endif /* MGOS_ESP32_CAN_H */