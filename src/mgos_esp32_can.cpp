#include "mgos_esp32_can.h"

/* Initialize the CAN Module */
int8_t mgos_can_init(void) 
{
    return CAN_init();
}

/* Send a can frame */
int8_t mgos_can_write_frame (const CAN_frame_t *p_frame)
{
    return CAN_write_frame(p_frame);
}

/* Stops the CAN Module */
int8_t mgos_can_stop(void)
{
    return CAN_stop();
}

/* Config CAN Filter, must call before CANInit() */
int8_t mgos_can_config_filter(const CAN_filter_t* p_filter)
{
    return CAN_config_filter(p_filter);
}