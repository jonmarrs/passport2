// SPDX-FileCopyrightText: 2022 Foundation Devices, Inc. <hello@foundationdevices.com>
// SPDX-License-Identifier: GPL-3.0-or-later
//

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif
#ifndef LV_ATTRIBUTE_IMG_BATTERY100
#define LV_ATTRIBUTE_IMG_BATTERY100
#endif
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_BATTERY100 uint8_t battery100_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0xf0, 0x00, 0x00, 0xfc, 
  0xc0, 0x00, 0x00, 0x7c, 
  0xcf, 0xff, 0xff, 0x1c, 
  0x9c, 0x00, 0x03, 0x9c, 
  0x98, 0x00, 0x01, 0x9c, 
  0x90, 0x00, 0x00, 0x84, 
  0x90, 0x00, 0x00, 0xc4, 
  0x90, 0x00, 0x00, 0xf4, 
  0x90, 0x00, 0x00, 0xc4, 
  0x90, 0x00, 0x00, 0x84, 
  0x98, 0x00, 0x01, 0x9c, 
  0x9c, 0x00, 0x03, 0x9c, 
  0xcf, 0xff, 0xff, 0x1c, 
  0xc0, 0x00, 0x00, 0x7c, 
  0xf0, 0x00, 0x00, 0xfc, 
  0xff, 0xff, 0xff, 0xfc, 
};

const lv_img_dsc_t battery100 = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 30,
  .header.h = 16,
  .data_size = 73,
  .data = battery100_map,
};