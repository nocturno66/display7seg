#include "esphome/core/log.h"
#include "display7seg.h"
#include <assert.h>

namespace esphome {
namespace display7seg {

static const char *TAG = "display7seg.binary_output";

void display7seg::setup(){

}

void display7seg::write_state(bool state){

}

void display7seg::dump_config() {
    ESP_LOGCONFIG(TAG, "display7seg");
}

} //namespace display7seg
} //namespace esphome

