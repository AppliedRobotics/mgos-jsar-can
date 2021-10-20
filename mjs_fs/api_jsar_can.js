
let Can = {
    init: function() {
        return ffi('int mgos_can_init(void)');
    },

    writeFrame: function() {
        return ffi('int mgos_can_write_frame(void *)');
    },

    canStop: function() {
        return ffi('int mgos_can_stop(void)');
    },

    configFilter: function() {
        return ffi('int mgos_can_config_filter(void *)');
    }

};

