/* 
 * Copyright (c) [2010-2019] zhenfei.mzf@gmail.com rights reserved.
 * 
 * AntiSpy is licensed under the Mulan PSL v1.
 * You can use this software according to the terms and conditions of the Mulan PSL v1.
 * You may obtain a copy of Mulan PSL v1 at:
 *
 *     http://license.coscl.org.cn/MulanPSL
 *
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT, MERCHANTABILITY OR
 * FIT FOR A PARTICULAR PURPOSE.
 * See the Mulan PSL v1 for more details.
*/
#include "stdafx.h"
#include "IdtFunctions.h"

WCHAR *szIdtFunctions[] = {
	L"Divide error",
	L"Debug",
	L"Not used",
	L"Breakpoint",
	L"Overflow",
	L"Bounds check",
	L"Invalid opcode",
	L"Device not available",
	L"Double fault",
	L"Coprocessor segment overrun",
	L"Invalid TSS",
	L"Segment not present",
	L"Stack segment fault",
	L"General protection",
	L"Page Fault",
	L"Reserved by Intel",
	L"Floating-point error",
	L"Alignment check",
	L"Machine check",
	L"SIMD floating point exception",
	L"Reserved by Intel",
	L"Reserved by Intel",
	L"Reserved by Intel",
	L"Reserved by Intel",
	L"Reserved by Intel",
	L"Reserved by Intel",
	L"Reserved by Intel",
	L"Reserved by Intel",
	L"Reserved by Intel",
	L"Reserved by Intel",
	L"Reserved by Intel",
	L"Reserved by Intel",
	L"Not used",
	L"Not used",
	L"Not used",
	L"Not used",
	L"Not used",
	L"Not used",
	L"Not used",
	L"Not used",
	L"Not used",
	L"Not used",
	L"KiGetTickCount",
	L"KiCallbackReturn",
	L"KiSetLowWaitHighThread",
	L"KiDebugService",
	L"KiSystemService",
	L"Reserved for APIC",
	L"KiStartUnexpectedRange",
	L"KiUnexpectedInterrupt1",
	L"KiUnexpectedInterrupt2",
	L"KiUnexpectedInterrupt3",
	L"KiUnexpectedInterrupt4",
	L"KiUnexpectedInterrupt5",
	L"KiUnexpectedInterrupt6",
	L"KiUnexpectedInterrupt7",
	L"KiUnexpectedInterrupt8",
	L"KiUnexpectedInterrupt9",
	L"KiUnexpectedInterrupt10",
	L"KiUnexpectedInterrupt11",
	L"KiUnexpectedInterrupt12",
	L"KiUnexpectedInterrupt13",
	L"KiUnexpectedInterrupt14",
	L"KiUnexpectedInterrupt15",
	L"KiUnexpectedInterrupt16",
	L"KiUnexpectedInterrupt17",
	L"KiUnexpectedInterrupt18",
	L"KiUnexpectedInterrupt19",
	L"KiUnexpectedInterrupt20",
	L"KiUnexpectedInterrupt21",
	L"KiUnexpectedInterrupt22",
	L"KiUnexpectedInterrupt23",
	L"KiUnexpectedInterrupt24",
	L"KiUnexpectedInterrupt25",
	L"KiUnexpectedInterrupt26",
	L"KiUnexpectedInterrupt27",
	L"KiUnexpectedInterrupt28",
	L"KiUnexpectedInterrupt29",
	L"KiUnexpectedInterrupt30",
	L"KiUnexpectedInterrupt31",
	L"KiUnexpectedInterrupt32",
	L"KiUnexpectedInterrupt33",
	L"KiUnexpectedInterrupt34",
	L"KiUnexpectedInterrupt35",
	L"KiUnexpectedInterrupt36",
	L"KiUnexpectedInterrupt37",
	L"KiUnexpectedInterrupt38",
	L"KiUnexpectedInterrupt39",
	L"KiUnexpectedInterrupt40",
	L"KiUnexpectedInterrupt41",
	L"KiUnexpectedInterrupt42",
	L"KiUnexpectedInterrupt43",
	L"KiUnexpectedInterrupt44",
	L"KiUnexpectedInterrupt45",
	L"KiUnexpectedInterrupt46",
	L"KiUnexpectedInterrupt47",
	L"KiUnexpectedInterrupt48",
	L"KiUnexpectedInterrupt49",
	L"KiUnexpectedInterrupt50",
	L"KiUnexpectedInterrupt51",
	L"KiUnexpectedInterrupt52",
	L"KiUnexpectedInterrupt53",
	L"KiUnexpectedInterrupt54",
	L"KiUnexpectedInterrupt55",
	L"KiUnexpectedInterrupt56",
	L"KiUnexpectedInterrupt57",
	L"KiUnexpectedInterrupt58",
	L"KiUnexpectedInterrupt59",
	L"KiUnexpectedInterrupt60",
	L"KiUnexpectedInterrupt61",
	L"KiUnexpectedInterrupt62",
	L"KiUnexpectedInterrupt63",
	L"KiUnexpectedInterrupt64",
	L"KiUnexpectedInterrupt65",
	L"KiUnexpectedInterrupt66",
	L"KiUnexpectedInterrupt67",
	L"KiUnexpectedInterrupt68",
	L"KiUnexpectedInterrupt69",
	L"KiUnexpectedInterrupt70",
	L"KiUnexpectedInterrupt71",
	L"KiUnexpectedInterrupt72",
	L"KiUnexpectedInterrupt73",
	L"KiUnexpectedInterrupt74",
	L"KiUnexpectedInterrupt75",
	L"KiUnexpectedInterrupt76",
	L"KiUnexpectedInterrupt77",
	L"KiUnexpectedInterrupt78",
	L"KiUnexpectedInterrupt79",
	L"KiUnexpectedInterrupt80",
	L"KiUnexpectedInterrupt81",
	L"KiUnexpectedInterrupt82",
	L"KiUnexpectedInterrupt83",
	L"KiUnexpectedInterrupt84",
	L"KiUnexpectedInterrupt85",
	L"KiUnexpectedInterrupt86",
	L"KiUnexpectedInterrupt87",
	L"KiUnexpectedInterrupt88",
	L"KiUnexpectedInterrupt89",
	L"KiUnexpectedInterrupt90",
	L"KiUnexpectedInterrupt91",
	L"KiUnexpectedInterrupt92",
	L"KiUnexpectedInterrupt93",
	L"KiUnexpectedInterrupt94",
	L"KiUnexpectedInterrupt95",
	L"KiUnexpectedInterrupt96",
	L"KiUnexpectedInterrupt97",
	L"KiUnexpectedInterrupt98",
	L"KiUnexpectedInterrupt99",
	L"KiUnexpectedInterrupt100",
	L"KiUnexpectedInterrupt101",
	L"KiUnexpectedInterrupt102",
	L"KiUnexpectedInterrupt103",
	L"KiUnexpectedInterrupt104",
	L"KiUnexpectedInterrupt105",
	L"KiUnexpectedInterrupt106",
	L"KiUnexpectedInterrupt107",
	L"KiUnexpectedInterrupt108",
	L"KiUnexpectedInterrupt109",
	L"KiUnexpectedInterrupt110",
	L"KiUnexpectedInterrupt111",
	L"KiUnexpectedInterrupt112",
	L"KiUnexpectedInterrupt113",
	L"KiUnexpectedInterrupt114",
	L"KiUnexpectedInterrupt115",
	L"KiUnexpectedInterrupt116",
	L"KiUnexpectedInterrupt117",
	L"KiUnexpectedInterrupt118",
	L"KiUnexpectedInterrupt119",
	L"KiUnexpectedInterrupt120",
	L"KiUnexpectedInterrupt121",
	L"KiUnexpectedInterrupt122",
	L"KiUnexpectedInterrupt123",
	L"KiUnexpectedInterrupt124",
	L"KiUnexpectedInterrupt125",
	L"KiUnexpectedInterrupt126",
	L"KiUnexpectedInterrupt127",
	L"KiUnexpectedInterrupt128",
	L"KiUnexpectedInterrupt129",
	L"KiUnexpectedInterrupt130",
	L"KiUnexpectedInterrupt131",
	L"KiUnexpectedInterrupt132",
	L"KiUnexpectedInterrupt133",
	L"KiUnexpectedInterrupt134",
	L"KiUnexpectedInterrupt135",
	L"KiUnexpectedInterrupt136",
	L"KiUnexpectedInterrupt137",
	L"KiUnexpectedInterrupt138",
	L"KiUnexpectedInterrupt139",
	L"KiUnexpectedInterrupt140",
	L"KiUnexpectedInterrupt141",
	L"KiUnexpectedInterrupt142",
	L"KiUnexpectedInterrupt143",
	L"KiUnexpectedInterrupt144",
	L"KiUnexpectedInterrupt145",
	L"KiUnexpectedInterrupt146",
	L"KiUnexpectedInterrupt147",
	L"KiUnexpectedInterrupt148",
	L"KiUnexpectedInterrupt149",
	L"KiUnexpectedInterrupt150",
	L"KiUnexpectedInterrupt151",
	L"KiUnexpectedInterrupt152",
	L"KiUnexpectedInterrupt153",
	L"KiUnexpectedInterrupt154",
	L"KiUnexpectedInterrupt155",
	L"KiUnexpectedInterrupt156",
	L"KiUnexpectedInterrupt157",
	L"KiUnexpectedInterrupt158",
	L"KiUnexpectedInterrupt159",
	L"KiUnexpectedInterrupt160",
	L"KiUnexpectedInterrupt161",
	L"KiUnexpectedInterrupt162",
	L"KiUnexpectedInterrupt163",
	L"KiUnexpectedInterrupt164",
	L"KiUnexpectedInterrupt165",
	L"KiUnexpectedInterrupt166",
	L"KiUnexpectedInterrupt167",
	L"KiUnexpectedInterrupt168",
	L"KiUnexpectedInterrupt169",
	L"KiUnexpectedInterrupt170",
	L"KiUnexpectedInterrupt171",
	L"KiUnexpectedInterrupt172",
	L"KiUnexpectedInterrupt173",
	L"KiUnexpectedInterrupt174",
	L"KiUnexpectedInterrupt175",
	L"KiUnexpectedInterrupt176",
	L"KiUnexpectedInterrupt177",
	L"KiUnexpectedInterrupt178",
	L"KiUnexpectedInterrupt179",
	L"KiUnexpectedInterrupt180",
	L"KiUnexpectedInterrupt181",
	L"KiUnexpectedInterrupt182",
	L"KiUnexpectedInterrupt183",
	L"KiUnexpectedInterrupt184",
	L"KiUnexpectedInterrupt185",
	L"KiUnexpectedInterrupt186",
	L"KiUnexpectedInterrupt187",
	L"KiUnexpectedInterrupt188",
	L"KiUnexpectedInterrupt189",
	L"KiUnexpectedInterrupt190",
	L"KiUnexpectedInterrupt191",
	L"KiUnexpectedInterrupt192",
	L"KiUnexpectedInterrupt193",
	L"KiUnexpectedInterrupt194",
	L"KiUnexpectedInterrupt195",
	L"KiUnexpectedInterrupt196",
	L"KiUnexpectedInterrupt197",
	L"KiUnexpectedInterrupt198",
	L"KiUnexpectedInterrupt199",
	L"KiUnexpectedInterrupt200",
	L"KiUnexpectedInterrupt201",
	L"KiUnexpectedInterrupt202",
	L"KiUnexpectedInterrupt203",
	L"KiUnexpectedInterrupt204",
	L"KiUnexpectedInterrupt205",
	L"KiUnexpectedInterrupt206",
	L"KiUnexpectedInterrupt207",
};