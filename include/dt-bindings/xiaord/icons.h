/*
 * SPDX-License-Identifier: MIT
 *
 * FontAwesome 5 codepoints available in the Montserrat LVGL font.
 * Usable from both C source and DTS overlays via #include.
 */

#pragma once

// Font Awesome5のコードポイントと一致させる
// boards/shields/xiaord.overlay内で初期値として参照しているので、
// ここを弄ったらそちらも合わせて修正
// 一応アイコンはcustom_icons_demo.htmlで確認可能
#define ICON_BOOKMARK       0xF02E
#define ICON_BOLT           0xF0E7
#define ICON_BT             0xF293
#define ICON_PAUSE          0xF28B
#define ICON_FOLDER         0xF07C
#define ICON_ANGLE_UP       0xF102
#define ICON_ANGLE_LEFT     0xF100
#define ICON_ANGLE_DOWN     0xF103
#define ICON_VOL_LOW        0xF027
#define ICON_DOWNLOAD       0xF019
#define ICON_UPLOAD         0xF093
#define ICON_CAT            0xF6BE
#define ICON_WRENCH         0xF7D9
#define ICON_SETTINGS       0xF013
#define ICON_VOL_HIGH       0xF028
#define ICON_CALCULATOR     0xF1EC
#define ICON_ALARM_CLOCK    0xF34E
#define ICON_APPLE          0xF179
#define ICON_MUTE           0xF6A9
#define ICON_ZERO           0x30
#define ICON_ONE            0x31
#define ICON_TWO            0x32
#define ICON_THREE          0x33
#define ICON_FOUR           0x34
#define ICON_FIVE           0x35
#define ICON_SIX            0x36
#define ICON_SEVEN          0x37
#define ICON_EIGHT          0x38
#define ICON_NINE           0x39
