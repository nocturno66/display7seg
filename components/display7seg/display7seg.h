#pragma once

#include "esphome/core/component.h"
#include "esphome/components/output/binary_output.h"

namespace esphome {
namespace display7seg {

class display7seg : public output::BinaryOutput, public Component {
 public:
  void setup() override;
  void write_state(bool state) override;
  void dump_config() override;
};


} //namespace display7seg
} //namespace esphome