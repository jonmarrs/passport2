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
#ifndef LV_ATTRIBUTE_IMG_ICON_SCAN_QR
#define LV_ATTRIBUTE_IMG_ICON_SCAN_QR
#endif
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_ICON_SCAN_QR uint8_t ICON_SCAN_QR_map[] = {
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 0*/
  0xfe, 0xfe, 0xfe, 0xa2, 	/*Color of index 1*/

  0x00, 0x00, 0x00, 
  0x7f, 0x0f, 0xe0, 
  0x7f, 0x0f, 0xe0, 
  0x60, 0x00, 0x60, 
  0x6f, 0xff, 0x60, 
  0x6f, 0xff, 0x60, 
  0x6d, 0xfb, 0x60, 
  0x6f, 0xff, 0x60, 
  0x0f, 0xff, 0x00, 
  0x0f, 0x9f, 0x00, 
  0x0f, 0x9b, 0x00, 
  0x0f, 0xff, 0x00, 
  0x6f, 0xfb, 0x60, 
  0x6d, 0xd3, 0x60, 
  0x6f, 0xff, 0x60, 
  0x6f, 0xff, 0x60, 
  0x60, 0x00, 0x60, 
  0x7f, 0x0f, 0xe0, 
  0x7f, 0x0f, 0xe0, 
  0x00, 0x00, 0x00, 
};

const lv_img_dsc_t ICON_SCAN_QR = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 20,
  .header.h = 20,
  .data_size = 69,
  .data = ICON_SCAN_QR_map,
};