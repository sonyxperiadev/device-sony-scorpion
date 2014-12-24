/*
 * Copyright (C) 2014, The CyanogenMod Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// Data passed by the stock audio HAL, dumped from the kernel driver
static unsigned char eq_data[TYPE_MAX][190] = {
{0x001, 0x000, 0x000, 0x001, 0x0c2, 0x0f8, 0x024, 0x07c, 0x0f9, 0x0fc, 0x00d, 0x00e, 0x0f8, 0x0e5, 0x0e2, 0x010, 0x00d, 0x00e, 0x0f8, 0x002, 0x000, 0x000, 0x001, 0x0c2, 0x094, 0x0e8, 0x07d, 0x026, 0x058, 0x03d, 0x0af, 0x010, 0x082, 0x0d9, 0x0a8, 0x03f, 0x0bc, 0x008, 0x003, 0x000, 0x000, 0x001, 0x0de, 0x02e, 0x0e0, 0x047, 0x0d4, 0x040, 0x02b, 0x08d, 0x0c4, 0x0b8, 0x02b, 0x0c0, 0x036, 0x043, 0x05c, 0x004, 0x000, 0x000, 0x001, 0x0cb, 0x07f, 0x048, 0x06b, 0x00a, 0x0b0, 0x032, 0x095, 0x0e4, 0x094, 0x0f5, 0x050, 0x041, 0x0ea, 0x0d4, 0x005, 0x000, 0x000, 0x001, 0x0c1, 0x0fa, 0x040, 0x07d, 0x0a2, 0x04c, 0x03d, 0x040, 0x0c0, 0x082, 0x05d, 0x0b4, 0x040, 0x0c5, 0x000, 0x006, 0x000, 0x000, 0x001, 0x0ca, 0x06d, 0x018, 0x073, 0x050, 0x090, 0x031, 0x084, 0x040, 0x08c, 0x0af, 0x070, 0x044, 0x00e, 0x0a8, 0x007, 0x000, 0x000, 0x001, 0x0ce, 0x038, 0x0e4, 0x062, 0x088, 0x0d0, 0x030, 0x0e8, 0x0fc, 0x09d, 0x077, 0x030, 0x040, 0x0de, 0x020, 0x008, 0x000, 0x000, 0x002, 0x0e4, 0x0a8, 0x0ba, 0x03a, 0x0f9, 0x056, 0x01e, 0x0cf, 0x0e2, 0x0bd, 0x0ce, 0x0c6, 0x023, 0x0bf, 0x048, 0x009, 0x000, 0x000, 0x001, 0x0d9, 0x026, 0x088, 0x015, 0x062, 0x034, 0x00b, 0x0a8, 0x088, 0x0ea, 0x09d, 0x0cc, 0x05b, 0x030, 0x0f0, 0x00a, 0x000, 0x000, 0x001, 0x0e9, 0x094, 0x048, 0x0d4, 0x0ca, 0x024, 0x024, 0x05c, 0x0b4, 0x048, 0x0b9, 0x06c, 0x024, 0x05c, 0x0b4},
{0x001, 0x000, 0x000, 0x001, 0x0c2, 0x0b2, 0x020, 0x07d, 0x03e, 0x00c, 0x00e, 0x059, 0x068, 0x0e3, 0x04d, 0x034, 0x00e, 0x059, 0x068, 0x002, 0x000, 0x000, 0x001, 0x0c2, 0x00f, 0x03c, 0x07d, 0x0b8, 0x0d8, 0x03d, 0x098, 0x0d8, 0x082, 0x047, 0x028, 0x040, 0x057, 0x0ec, 0x003, 0x000, 0x000, 0x002, 0x0e4, 0x0e9, 0x036, 0x03a, 0x0ad, 0x0f0, 0x02b, 0x0ac, 0x07a, 0x0a2, 0x0e1, 0x02c, 0x031, 0x0db, 0x036, 0x004, 0x000, 0x000, 0x001, 0x0c7, 0x0ee, 0x024, 0x074, 0x02d, 0x0ec, 0x039, 0x03a, 0x050, 0x08b, 0x0d2, 0x014, 0x03e, 0x0d7, 0x08c, 0x005, 0x000, 0x000, 0x001, 0x0ce, 0x038, 0x0e4, 0x062, 0x088, 0x0d0, 0x030, 0x0e8, 0x0fc, 0x09d, 0x077, 0x030, 0x040, 0x0de, 0x020, 0x006, 0x000, 0x000, 0x001, 0x0c3, 0x05f, 0x02c, 0x078, 0x02a, 0x0fc, 0x03b, 0x07b, 0x0dc, 0x087, 0x0d5, 0x004, 0x041, 0x024, 0x0f8, 0x007, 0x000, 0x000, 0x001, 0x0c6, 0x004, 0x0d8, 0x070, 0x013, 0x03c, 0x039, 0x069, 0x0f0, 0x08f, 0x0ec, 0x0c4, 0x040, 0x091, 0x038, 0x008, 0x000, 0x000, 0x001, 0x0d4, 0x0fd, 0x09c, 0x014, 0x0e0, 0x060, 0x019, 0x094, 0x05c, 0x0eb, 0x01f, 0x0a0, 0x051, 0x06e, 0x00c, 0x009, 0x000, 0x000, 0x001, 0x0d2, 0x0be, 0x0c0, 0x056, 0x0ad, 0x080, 0x033, 0x04d, 0x04c, 0x0a9, 0x052, 0x080, 0x039, 0x0f3, 0x0f4, 0x00a, 0x000, 0x000, 0x001, 0x0e9, 0x094, 0x048, 0x0d4, 0x0ca, 0x024, 0x020, 0x068, 0x064, 0x040, 0x0d0, 0x0cc, 0x020, 0x068, 0x064},
{0x001, 0x000, 0x000, 0x001, 0x0c2, 0x0f8, 0x024, 0x07c, 0x0f9, 0x0fc, 0x00d, 0x00e, 0x0f8, 0x0e5, 0x0e2, 0x010, 0x00d, 0x00e, 0x0f8, 0x002, 0x000, 0x000, 0x001, 0x0c2, 0x094, 0x0e8, 0x07d, 0x026, 0x058, 0x03d, 0x0af, 0x010, 0x082, 0x0d9, 0x0a8, 0x03f, 0x0bc, 0x008, 0x003, 0x000, 0x000, 0x001, 0x0de, 0x02e, 0x0e0, 0x047, 0x0d4, 0x040, 0x02b, 0x08d, 0x0c4, 0x0b8, 0x02b, 0x0c0, 0x036, 0x043, 0x05c, 0x004, 0x000, 0x000, 0x001, 0x0cb, 0x07f, 0x048, 0x06b, 0x00a, 0x0b0, 0x032, 0x095, 0x0e4, 0x094, 0x0f5, 0x050, 0x041, 0x0ea, 0x0d4, 0x005, 0x000, 0x000, 0x001, 0x0c1, 0x0fa, 0x040, 0x07d, 0x0a2, 0x04c, 0x03d, 0x040, 0x0c0, 0x082, 0x05d, 0x0b4, 0x040, 0x0c5, 0x000, 0x006, 0x000, 0x000, 0x001, 0x0ca, 0x06d, 0x018, 0x073, 0x050, 0x090, 0x031, 0x084, 0x040, 0x08c, 0x0af, 0x070, 0x044, 0x00e, 0x0a8, 0x007, 0x000, 0x000, 0x001, 0x0ce, 0x038, 0x0e4, 0x062, 0x088, 0x0d0, 0x030, 0x0e8, 0x0fc, 0x09d, 0x077, 0x030, 0x040, 0x0de, 0x020, 0x008, 0x000, 0x000, 0x002, 0x0e4, 0x0a8, 0x0ba, 0x03a, 0x0f9, 0x056, 0x01e, 0x0cf, 0x0e2, 0x0bd, 0x0ce, 0x0c6, 0x023, 0x0bf, 0x048, 0x009, 0x000, 0x000, 0x001, 0x0d9, 0x026, 0x088, 0x015, 0x062, 0x034, 0x00b, 0x0a8, 0x088, 0x0ea, 0x09d, 0x0cc, 0x05b, 0x030, 0x0f0, 0x00a, 0x000, 0x000, 0x001, 0x0e9, 0x094, 0x048, 0x0d4, 0x0ca, 0x024, 0x024, 0x05c, 0x0b4, 0x048, 0x0b9, 0x06c, 0x024, 0x05c, 0x0b4},
{0x001, 0x000, 0x000, 0x001, 0x0c2, 0x0b2, 0x020, 0x07d, 0x03e, 0x00c, 0x00e, 0x059, 0x068, 0x0e3, 0x04d, 0x034, 0x00e, 0x059, 0x068, 0x002, 0x000, 0x000, 0x001, 0x0c2, 0x00f, 0x03c, 0x07d, 0x0b8, 0x0d8, 0x03d, 0x098, 0x0d8, 0x082, 0x047, 0x028, 0x040, 0x057, 0x0ec, 0x003, 0x000, 0x000, 0x002, 0x0e4, 0x0e9, 0x036, 0x03a, 0x0ad, 0x0f0, 0x02b, 0x0ac, 0x07a, 0x0a2, 0x0e1, 0x02c, 0x031, 0x0db, 0x036, 0x004, 0x000, 0x000, 0x001, 0x0c7, 0x0ee, 0x024, 0x074, 0x02d, 0x0ec, 0x039, 0x03a, 0x050, 0x08b, 0x0d2, 0x014, 0x03e, 0x0d7, 0x08c, 0x005, 0x000, 0x000, 0x001, 0x0ce, 0x038, 0x0e4, 0x062, 0x088, 0x0d0, 0x030, 0x0e8, 0x0fc, 0x09d, 0x077, 0x030, 0x040, 0x0de, 0x020, 0x006, 0x000, 0x000, 0x001, 0x0c3, 0x05f, 0x02c, 0x078, 0x02a, 0x0fc, 0x03b, 0x07b, 0x0dc, 0x087, 0x0d5, 0x004, 0x041, 0x024, 0x0f8, 0x007, 0x000, 0x000, 0x001, 0x0c6, 0x004, 0x0d8, 0x070, 0x013, 0x03c, 0x039, 0x069, 0x0f0, 0x08f, 0x0ec, 0x0c4, 0x040, 0x091, 0x038, 0x008, 0x000, 0x000, 0x001, 0x0d4, 0x0fd, 0x09c, 0x014, 0x0e0, 0x060, 0x019, 0x094, 0x05c, 0x0eb, 0x01f, 0x0a0, 0x051, 0x06e, 0x00c, 0x009, 0x000, 0x000, 0x001, 0x0d2, 0x0be, 0x0c0, 0x056, 0x0ad, 0x080, 0x033, 0x04d, 0x04c, 0x0a9, 0x052, 0x080, 0x039, 0x0f3, 0x0f4, 0x00a, 0x000, 0x000, 0x001, 0x0e9, 0x094, 0x048, 0x0d4, 0x0ca, 0x024, 0x020, 0x068, 0x064, 0x040, 0x0d0, 0x0cc, 0x020, 0x068, 0x064},
{0x001, 0x000, 0x000, 0x001, 0x0c2, 0x0f8, 0x024, 0x07c, 0x0f9, 0x0fc, 0x00d, 0x00e, 0x0f8, 0x0e5, 0x0e2, 0x010, 0x00d, 0x00e, 0x0f8, 0x002, 0x000, 0x000, 0x001, 0x0c2, 0x094, 0x0e8, 0x07d, 0x026, 0x058, 0x03d, 0x0af, 0x010, 0x082, 0x0d9, 0x0a8, 0x03f, 0x0bc, 0x008, 0x003, 0x000, 0x000, 0x001, 0x0de, 0x02e, 0x0e0, 0x047, 0x0d4, 0x040, 0x02b, 0x08d, 0x0c4, 0x0b8, 0x02b, 0x0c0, 0x036, 0x043, 0x05c, 0x004, 0x000, 0x000, 0x001, 0x0cb, 0x07f, 0x048, 0x06b, 0x00a, 0x0b0, 0x032, 0x095, 0x0e4, 0x094, 0x0f5, 0x050, 0x041, 0x0ea, 0x0d4, 0x005, 0x000, 0x000, 0x001, 0x0c1, 0x0fa, 0x040, 0x07d, 0x0a2, 0x04c, 0x03d, 0x040, 0x0c0, 0x082, 0x05d, 0x0b4, 0x040, 0x0c5, 0x000, 0x006, 0x000, 0x000, 0x001, 0x0ca, 0x06d, 0x018, 0x073, 0x050, 0x090, 0x031, 0x084, 0x040, 0x08c, 0x0af, 0x070, 0x044, 0x00e, 0x0a8, 0x007, 0x000, 0x000, 0x001, 0x0ce, 0x038, 0x0e4, 0x062, 0x088, 0x0d0, 0x030, 0x0e8, 0x0fc, 0x09d, 0x077, 0x030, 0x040, 0x0de, 0x020, 0x008, 0x000, 0x000, 0x002, 0x0e4, 0x0a8, 0x0ba, 0x03a, 0x0f9, 0x056, 0x01e, 0x0cf, 0x0e2, 0x0bd, 0x0ce, 0x0c6, 0x023, 0x0bf, 0x048, 0x009, 0x000, 0x000, 0x001, 0x0d9, 0x026, 0x088, 0x015, 0x062, 0x034, 0x00b, 0x0a8, 0x088, 0x0ea, 0x09d, 0x0cc, 0x05b, 0x030, 0x0f0, 0x00a, 0x000, 0x000, 0x001, 0x0e9, 0x094, 0x048, 0x0d4, 0x0ca, 0x024, 0x024, 0x05c, 0x0b4, 0x048, 0x0b9, 0x06c, 0x024, 0x05c, 0x0b4},
{0x001, 0x000, 0x000, 0x001, 0x0c2, 0x0b2, 0x020, 0x07d, 0x03e, 0x00c, 0x00e, 0x059, 0x068, 0x0e3, 0x04d, 0x034, 0x00e, 0x059, 0x068, 0x002, 0x000, 0x000, 0x001, 0x0c2, 0x00f, 0x03c, 0x07d, 0x0b8, 0x0d8, 0x03d, 0x098, 0x0d8, 0x082, 0x047, 0x028, 0x040, 0x057, 0x0ec, 0x003, 0x000, 0x000, 0x002, 0x0e4, 0x0e9, 0x036, 0x03a, 0x0ad, 0x0f0, 0x02b, 0x0ac, 0x07a, 0x0a2, 0x0e1, 0x02c, 0x031, 0x0db, 0x036, 0x004, 0x000, 0x000, 0x001, 0x0c7, 0x0ee, 0x024, 0x074, 0x02d, 0x0ec, 0x039, 0x03a, 0x050, 0x08b, 0x0d2, 0x014, 0x03e, 0x0d7, 0x08c, 0x005, 0x000, 0x000, 0x001, 0x0ce, 0x038, 0x0e4, 0x062, 0x088, 0x0d0, 0x030, 0x0e8, 0x0fc, 0x09d, 0x077, 0x030, 0x040, 0x0de, 0x020, 0x006, 0x000, 0x000, 0x001, 0x0c3, 0x05f, 0x02c, 0x078, 0x02a, 0x0fc, 0x03b, 0x07b, 0x0dc, 0x087, 0x0d5, 0x004, 0x041, 0x024, 0x0f8, 0x007, 0x000, 0x000, 0x001, 0x0c6, 0x004, 0x0d8, 0x070, 0x013, 0x03c, 0x039, 0x069, 0x0f0, 0x08f, 0x0ec, 0x0c4, 0x040, 0x091, 0x038, 0x008, 0x000, 0x000, 0x001, 0x0d4, 0x0fd, 0x09c, 0x014, 0x0e0, 0x060, 0x019, 0x094, 0x05c, 0x0eb, 0x01f, 0x0a0, 0x051, 0x06e, 0x00c, 0x009, 0x000, 0x000, 0x001, 0x0d2, 0x0be, 0x0c0, 0x056, 0x0ad, 0x080, 0x033, 0x04d, 0x04c, 0x0a9, 0x052, 0x080, 0x039, 0x0f3, 0x0f4, 0x00a, 0x000, 0x000, 0x001, 0x0e9, 0x094, 0x048, 0x0d4, 0x0ca, 0x024, 0x020, 0x068, 0x064, 0x040, 0x0d0, 0x0cc, 0x020, 0x068, 0x064},
{0x001, 0x000, 0x000, 0x001, 0x0c3, 0x010, 0x0c8, 0x07c, 0x0d6, 0x090, 0x031, 0x099, 0x0b0, 0x09c, 0x0cc, 0x0a0, 0x031, 0x099, 0x0b0, 0x002, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x003, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x004, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x005, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x006, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x007, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x008, 0x000, 0x000, 0x001, 0x0cf, 0x0ed, 0x0f0, 0x056, 0x02a, 0x020, 0x033, 0x08e, 0x070, 0x0a9, 0x0d5, 0x0e0, 0x03c, 0x083, 0x0a0, 0x009, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x00a, 0x000, 0x000, 0x000, 0x0ea, 0x088, 0x088, 0x0f6, 0x039, 0x070, 0x02c, 0x0ab, 0x010, 0x059, 0x056, 0x020, 0x02c, 0x0ab, 0x010},
{0x001, 0x000, 0x000, 0x001, 0x0c3, 0x010, 0x0c8, 0x07c, 0x0d6, 0x090, 0x031, 0x099, 0x0b0, 0x09c, 0x0cc, 0x0a0, 0x031, 0x099, 0x0b0, 0x002, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x003, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x004, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x005, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x006, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x007, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x008, 0x000, 0x000, 0x001, 0x0cf, 0x0ed, 0x0f0, 0x056, 0x02a, 0x020, 0x033, 0x08e, 0x070, 0x0a9, 0x0d5, 0x0e0, 0x03c, 0x083, 0x0a0, 0x009, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x00a, 0x000, 0x000, 0x000, 0x0ea, 0x088, 0x088, 0x0f6, 0x039, 0x070, 0x02c, 0x0ab, 0x010, 0x059, 0x056, 0x020, 0x02c, 0x0ab, 0x010},
{0x001, 0x000, 0x000, 0x001, 0x0c2, 0x0f8, 0x024, 0x07c, 0x0f9, 0x0fc, 0x00d, 0x00e, 0x0f8, 0x0e5, 0x0e2, 0x010, 0x00d, 0x00e, 0x0f8, 0x002, 0x000, 0x000, 0x001, 0x0c2, 0x094, 0x0e8, 0x07d, 0x026, 0x058, 0x03d, 0x0af, 0x010, 0x082, 0x0d9, 0x0a8, 0x03f, 0x0bc, 0x008, 0x003, 0x000, 0x000, 0x001, 0x0de, 0x02e, 0x0e0, 0x047, 0x0d4, 0x040, 0x02b, 0x08d, 0x0c4, 0x0b8, 0x02b, 0x0c0, 0x036, 0x043, 0x05c, 0x004, 0x000, 0x000, 0x001, 0x0cb, 0x07f, 0x048, 0x06b, 0x00a, 0x0b0, 0x032, 0x095, 0x0e4, 0x094, 0x0f5, 0x050, 0x041, 0x0ea, 0x0d4, 0x005, 0x000, 0x000, 0x001, 0x0c1, 0x0fa, 0x040, 0x07d, 0x0a2, 0x04c, 0x03d, 0x040, 0x0c0, 0x082, 0x05d, 0x0b4, 0x040, 0x0c5, 0x000, 0x006, 0x000, 0x000, 0x001, 0x0ca, 0x06d, 0x018, 0x073, 0x050, 0x090, 0x031, 0x084, 0x040, 0x08c, 0x0af, 0x070, 0x044, 0x00e, 0x0a8, 0x007, 0x000, 0x000, 0x001, 0x0ce, 0x038, 0x0e4, 0x062, 0x088, 0x0d0, 0x030, 0x0e8, 0x0fc, 0x09d, 0x077, 0x030, 0x040, 0x0de, 0x020, 0x008, 0x000, 0x000, 0x002, 0x0e4, 0x0a8, 0x0ba, 0x03a, 0x0f9, 0x056, 0x01e, 0x0cf, 0x0e2, 0x0bd, 0x0ce, 0x0c6, 0x023, 0x0bf, 0x048, 0x009, 0x000, 0x000, 0x001, 0x0d9, 0x026, 0x088, 0x015, 0x062, 0x034, 0x00b, 0x0a8, 0x088, 0x0ea, 0x09d, 0x0cc, 0x05b, 0x030, 0x0f0, 0x00a, 0x000, 0x000, 0x001, 0x0e9, 0x094, 0x048, 0x0d4, 0x0ca, 0x024, 0x024, 0x05c, 0x0b4, 0x048, 0x0b9, 0x06c, 0x024, 0x05c, 0x0b4},
{0x001, 0x000, 0x000, 0x001, 0x0c2, 0x0b2, 0x020, 0x07d, 0x03e, 0x00c, 0x00e, 0x059, 0x068, 0x0e3, 0x04d, 0x034, 0x00e, 0x059, 0x068, 0x002, 0x000, 0x000, 0x001, 0x0c2, 0x00f, 0x03c, 0x07d, 0x0b8, 0x0d8, 0x03d, 0x098, 0x0d8, 0x082, 0x047, 0x028, 0x040, 0x057, 0x0ec, 0x003, 0x000, 0x000, 0x002, 0x0e4, 0x0e9, 0x036, 0x03a, 0x0ad, 0x0f0, 0x02b, 0x0ac, 0x07a, 0x0a2, 0x0e1, 0x02c, 0x031, 0x0db, 0x036, 0x004, 0x000, 0x000, 0x001, 0x0c7, 0x0ee, 0x024, 0x074, 0x02d, 0x0ec, 0x039, 0x03a, 0x050, 0x08b, 0x0d2, 0x014, 0x03e, 0x0d7, 0x08c, 0x005, 0x000, 0x000, 0x001, 0x0ce, 0x038, 0x0e4, 0x062, 0x088, 0x0d0, 0x030, 0x0e8, 0x0fc, 0x09d, 0x077, 0x030, 0x040, 0x0de, 0x020, 0x006, 0x000, 0x000, 0x001, 0x0c3, 0x05f, 0x02c, 0x078, 0x02a, 0x0fc, 0x03b, 0x07b, 0x0dc, 0x087, 0x0d5, 0x004, 0x041, 0x024, 0x0f8, 0x007, 0x000, 0x000, 0x001, 0x0c6, 0x004, 0x0d8, 0x070, 0x013, 0x03c, 0x039, 0x069, 0x0f0, 0x08f, 0x0ec, 0x0c4, 0x040, 0x091, 0x038, 0x008, 0x000, 0x000, 0x001, 0x0d4, 0x0fd, 0x09c, 0x014, 0x0e0, 0x060, 0x019, 0x094, 0x05c, 0x0eb, 0x01f, 0x0a0, 0x051, 0x06e, 0x00c, 0x009, 0x000, 0x000, 0x001, 0x0d2, 0x0be, 0x0c0, 0x056, 0x0ad, 0x080, 0x033, 0x04d, 0x04c, 0x0a9, 0x052, 0x080, 0x039, 0x0f3, 0x0f4, 0x00a, 0x000, 0x000, 0x001, 0x0e9, 0x094, 0x048, 0x0d4, 0x0ca, 0x024, 0x020, 0x068, 0x064, 0x040, 0x0d0, 0x0cc, 0x020, 0x068, 0x064},
{0x001, 0x000, 0x000, 0x001, 0x0c0, 0x096, 0x0f4, 0x07f, 0x068, 0x058, 0x03f, 0x0b4, 0x058, 0x080, 0x097, 0x04c, 0x03f, 0x0b4, 0x058, 0x002, 0x000, 0x000, 0x001, 0x0c0, 0x096, 0x0f4, 0x07f, 0x068, 0x058, 0x03f, 0x0b4, 0x058, 0x080, 0x097, 0x04c, 0x03f, 0x0b4, 0x058, 0x003, 0x000, 0x000, 0x001, 0x0c0, 0x096, 0x0f4, 0x07f, 0x068, 0x058, 0x03f, 0x0b4, 0x058, 0x080, 0x097, 0x04c, 0x03f, 0x0b4, 0x058, 0x004, 0x000, 0x000, 0x001, 0x0c0, 0x096, 0x0f4, 0x07f, 0x068, 0x058, 0x03f, 0x0b4, 0x058, 0x080, 0x097, 0x04c, 0x03f, 0x0b4, 0x058, 0x005, 0x000, 0x000, 0x001, 0x0c0, 0x096, 0x0f4, 0x07f, 0x068, 0x058, 0x03f, 0x0b4, 0x058, 0x080, 0x097, 0x04c, 0x03f, 0x0b4, 0x058, 0x006, 0x000, 0x000, 0x001, 0x0c0, 0x096, 0x0f4, 0x07f, 0x068, 0x058, 0x03f, 0x0b4, 0x058, 0x080, 0x097, 0x04c, 0x03f, 0x0b4, 0x058, 0x007, 0x000, 0x000, 0x000, 0x0e5, 0x028, 0x030, 0x03b, 0x041, 0x080, 0x017, 0x0e5, 0x090, 0x02f, 0x0cb, 0x028, 0x017, 0x0e5, 0x090, 0x008, 0x000, 0x000, 0x000, 0x0e5, 0x028, 0x030, 0x03b, 0x041, 0x080, 0x017, 0x0e5, 0x090, 0x02f, 0x0cb, 0x028, 0x017, 0x0e5, 0x090, 0x009, 0x000, 0x000, 0x000, 0x0e5, 0x028, 0x030, 0x03b, 0x041, 0x080, 0x017, 0x0e5, 0x090, 0x02f, 0x0cb, 0x028, 0x017, 0x0e5, 0x090, 0x00a, 0x000, 0x000, 0x000, 0x0e5, 0x028, 0x030, 0x03b, 0x041, 0x080, 0x017, 0x0e5, 0x090, 0x02f, 0x0cb, 0x028, 0x017, 0x0e5, 0x090}
};
