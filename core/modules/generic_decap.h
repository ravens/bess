#ifndef __GENERIC_DECAP_H__
#define __GENERIC_DECAP_H__

#include "../module.h"

class GenericDecap : public Module {
 public:
  static const gate_idx_t kNumIGates = 1;
  static const gate_idx_t kNumOGates = 1;

  GenericDecap() : Module(), decap_size_() {}

  virtual struct snobj *Init(struct snobj *arg);
  virtual pb_error_t Init(const bess::protobuf::GenericDecapArg &arg);

  virtual void ProcessBatch(struct pkt_batch *batch);

  static const Commands<Module> cmds;

 private:
  int decap_size_;
};

#endif
