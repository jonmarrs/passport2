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
#ifndef LV_ATTRIBUTE_IMG_ICON_PASSPHRASE
#define LV_ATTRIBUTE_IMG_ICON_PASSPHRASE
#endif
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_ICON_PASSPHRASE uint8_t ICON_PASSPHRASE_map[] = {
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 0*/
  0xfe, 0xfe, 0xfe, 0x8d, 	/*Color of index 1*/

  0x01, 0xf8, 0x00, 
  0x3f, 0xff, 0x80, 
  0x7f, 0x9f, 0xe0, 
  0x78, 0x01, 0xe0, 
  0x61, 0xf8, 0x60, 
  0x61, 0xfc, 0x60, 
  0x61, 0x8e, 0x60, 
  0x61, 0x86, 0x60, 
  0x61, 0x8e, 0x60, 
  0x61, 0xfc, 0x60, 
  0x61, 0xf8, 0x60, 
  0x71, 0x80, 0xe0, 
  0x71, 0x80, 0xe0, 
  0x38, 0x01, 0xc0, 
  0x3c, 0x03, 0xc0, 
  0x1e, 0x07, 0x80, 
  0x0f, 0x0f, 0x00, 
  0x07, 0xfe, 0x00, 
  0x01, 0xf8, 0x00, 
  0x00, 0xf0, 0x00, 
};

const lv_img_dsc_t ICON_PASSPHRASE = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 20,
  .header.h = 20,
  .data_size = 69,
  .data = ICON_PASSPHRASE_map,
};