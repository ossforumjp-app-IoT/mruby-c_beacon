/*! @file
  @brief
  mruby bytecode loader.

  <pre>
  Copyright (C) 2015 Kyushu Institute of Technology.
  Copyright (C) 2015 Shimane IT Open-Innovation Center.

  This file is distributed under BSD 3-Clause License.

  </pre>
*/

#ifndef MRBC_SRC_LOAD_H_
#define MRBC_SRC_LOAD_H_

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


int mrbc_load_mrb(mrb_vm *vm, const uint8_t *ptr);


#ifdef __cplusplus
}
#endif
#endif
