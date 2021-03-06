/***********************************************************************
**
**  REBOL 3.0 "Invasion"
**  Copyright 2010 REBOL Technologies
**  All rights reserved.
**
************************************************************************
**
**  Title: REBOL Graphics
**  Build: A110
**  Date:  1-Nov-2010
**  File:  host-ext-graphics
**
**  AUTO-GENERATED FILE - Do not modify. (From: make-host-ext.r)
**
***********************************************************************/

enum graphics_commands {
	CMD_GRAPHICS_INIT_WORDS,
	CMD_GRAPHICS_INIT,
	CMD_GRAPHICS_CARET_TO_OFFSET,
	CMD_GRAPHICS_CURSOR,
	CMD_GRAPHICS_OFFSET_TO_CARET,
	CMD_GRAPHICS_SHOW,
	CMD_GRAPHICS_SIZE_TEXT,
	CMD_GRAPHICS_DRAW,
	CMD_GRAPHICS_GUI_METRIC,
	CMD_GRAPHICS_VIEW,
	CMD_GRAPHICS_UNVIEW,
	CMD_GRAPHICS_HANDLE_EVENTS,
	CMD_GRAPHICS_UNHANDLE_EVENTS,
	CMD_GRAPHICS_HANDLED_EVENTSQ,
	CMD_GRAPHICS_DO_EVENTS,
	CMD_GRAPHICS_INIT_VIEW_SYSTEM,
};

enum graphics_words {
	W_GRAPHICS_0,
	W_GRAPHICS_SCREEN_SIZE,
	W_GRAPHICS_BORDER_SIZE,
	W_GRAPHICS_BORDER_FIXED,
	W_GRAPHICS_TITLE_SIZE,
	W_GRAPHICS_WORK_ORIGIN,
	W_GRAPHICS_WORK_SIZE,
};

#ifdef INCLUDE_EXT_DATA
const unsigned char RX_graphics[] = {
"\x52\x45\x42\x4F\x4C\x20\x5B\x0A\x54\x69\x74\x6C\x65\x3A\x20\x22"
"\x52\x45\x42\x4F\x4C\x20\x47\x72\x61\x70\x68\x69\x63\x73\x22\x20"
"\x0A\x4E\x61\x6D\x65\x3A\x20\x67\x72\x61\x70\x68\x69\x63\x73\x20"
"\x0A\x54\x79\x70\x65\x3A\x20\x65\x78\x74\x65\x6E\x73\x69\x6F\x6E"
"\x20\x0A\x45\x78\x70\x6F\x72\x74\x73\x3A\x20\x5B\x0A\x69\x6E\x69"
"\x74\x2D\x77\x6F\x72\x64\x73\x20\x0A\x69\x6E\x69\x74\x20\x0A\x63"
"\x61\x72\x65\x74\x2D\x74\x6F\x2D\x6F\x66\x66\x73\x65\x74\x20\x0A"
"\x63\x75\x72\x73\x6F\x72\x20\x0A\x6F\x66\x66\x73\x65\x74\x2D\x74"
"\x6F\x2D\x63\x61\x72\x65\x74\x20\x0A\x73\x68\x6F\x77\x20\x0A\x73"
"\x69\x7A\x65\x2D\x74\x65\x78\x74\x20\x0A\x64\x72\x61\x77\x20\x0A"
"\x67\x75\x69\x2D\x6D\x65\x74\x72\x69\x63\x20\x0A\x76\x69\x65\x77"
"\x20\x0A\x75\x6E\x76\x69\x65\x77\x20\x0A\x68\x61\x6E\x64\x6C\x65"
"\x2D\x65\x76\x65\x6E\x74\x73\x20\x0A\x75\x6E\x68\x61\x6E\x64\x6C"
"\x65\x2D\x65\x76\x65\x6E\x74\x73\x20\x0A\x68\x61\x6E\x64\x6C\x65"
"\x64\x2D\x65\x76\x65\x6E\x74\x73\x3F\x20\x0A\x64\x6F\x2D\x65\x76"
"\x65\x6E\x74\x73\x20\x0A\x69\x6E\x69\x74\x2D\x76\x69\x65\x77\x2D"
"\x73\x79\x73\x74\x65\x6D\x0A\x5D\x0A\x5D\x20\x0A\x77\x6F\x72\x64"
"\x73\x3A\x20\x5B\x0A\x73\x63\x72\x65\x65\x6E\x2D\x73\x69\x7A\x65"
"\x20\x0A\x62\x6F\x72\x64\x65\x72\x2D\x73\x69\x7A\x65\x20\x0A\x62"
"\x6F\x72\x64\x65\x72\x2D\x66\x69\x78\x65\x64\x20\x0A\x74\x69\x74"
"\x6C\x65\x2D\x73\x69\x7A\x65\x20\x0A\x77\x6F\x72\x6B\x2D\x6F\x72"
"\x69\x67\x69\x6E\x20\x0A\x77\x6F\x72\x6B\x2D\x73\x69\x7A\x65\x0A"
"\x5D\x20\x0A\x69\x6E\x69\x74\x2D\x77\x6F\x72\x64\x73\x3A\x20\x63"
"\x6F\x6D\x6D\x61\x6E\x64\x20\x5B\x0A\x77\x6F\x72\x64\x73\x20\x5B"
"\x62\x6C\x6F\x63\x6B\x21\x5D\x0A\x5D\x20\x0A\x69\x6E\x69\x74\x2D"
"\x77\x6F\x72\x64\x73\x20\x77\x6F\x72\x64\x73\x20\x0A\x69\x6E\x69"
"\x74\x3A\x20\x63\x6F\x6D\x6D\x61\x6E\x64\x20\x5B\x0A\x22\x49\x6E"
"\x69\x74\x69\x61\x6C\x69\x7A\x65\x20\x67\x72\x61\x70\x68\x69\x63"
"\x73\x20\x73\x75\x62\x73\x79\x73\x74\x65\x6D\x2E\x22\x20\x0A\x67"
"\x6F\x62\x20\x5B\x67\x6F\x62\x21\x5D\x20\x22\x54\x68\x65\x20\x73"
"\x63\x72\x65\x65\x6E\x20\x67\x6F\x62\x20\x28\x72\x6F\x6F\x74\x20"
"\x67\x6F\x62\x29\x22\x0A\x5D\x20\x0A\x63\x61\x72\x65\x74\x2D\x74"
"\x6F\x2D\x6F\x66\x66\x73\x65\x74\x3A\x20\x63\x6F\x6D\x6D\x61\x6E"
"\x64\x20\x5B\x0A\x7B\x52\x65\x74\x75\x72\x6E\x73\x20\x74\x68\x65"
"\x20\x78\x79\x20\x6F\x66\x66\x73\x65\x74\x20\x28\x70\x61\x69\x72"
"\x29\x20\x66\x6F\x72\x20\x61\x20\x73\x70\x65\x63\x69\x66\x69\x63"
"\x20\x73\x74\x72\x69\x6E\x67\x20\x70\x6F\x73\x69\x74\x69\x6F\x6E"
"\x20\x69\x6E\x20\x61\x20\x67\x72\x61\x70\x68\x69\x63\x73\x20\x6F"
"\x62\x6A\x65\x63\x74\x2E\x7D\x20\x0A\x67\x6F\x62\x20\x5B\x67\x6F"
"\x62\x21\x5D\x20\x0A\x65\x6C\x65\x6D\x65\x6E\x74\x20\x5B\x69\x6E"
"\x74\x65\x67\x65\x72\x21\x20\x62\x6C\x6F\x63\x6B\x21\x5D\x20\x22"
"\x54\x68\x65\x20\x70\x6F\x73\x69\x74\x69\x6F\x6E\x20\x6F\x66\x20"
"\x74\x68\x65\x20\x73\x74\x72\x69\x6E\x67\x20\x69\x6E\x20\x74\x68"
"\x65\x20\x72\x69\x63\x68\x74\x65\x78\x74\x20\x62\x6C\x6F\x63\x6B"
"\x22\x20\x0A\x70\x6F\x73\x69\x74\x69\x6F\x6E\x20\x5B\x69\x6E\x74"
"\x65\x67\x65\x72\x21\x20\x73\x74\x72\x69\x6E\x67\x21\x5D\x20\x22"
"\x54\x68\x65\x20\x70\x6F\x73\x69\x74\x69\x6F\x6E\x20\x77\x69\x74"
"\x68\x69\x6E\x20\x74\x68\x65\x20\x73\x74\x72\x69\x6E\x67\x22\x0A"
"\x5D\x20\x0A\x63\x75\x72\x73\x6F\x72\x3A\x20\x63\x6F\x6D\x6D\x61"
"\x6E\x64\x20\x5B\x0A\x22\x43\x68\x61\x6E\x67\x65\x73\x20\x74\x68"
"\x65\x20\x6D\x6F\x75\x73\x65\x20\x63\x75\x72\x73\x6F\x72\x20\x69"
"\x6D\x61\x67\x65\x2E\x22\x20\x0A\x69\x6D\x61\x67\x65\x20\x5B\x69"
"\x6E\x74\x65\x67\x65\x72\x21\x20\x69\x6D\x61\x67\x65\x21\x20\x6E"
"\x6F\x6E\x65\x21\x5D\x0A\x5D\x20\x0A\x6F\x66\x66\x73\x65\x74\x2D"
"\x74\x6F\x2D\x63\x61\x72\x65\x74\x3A\x20\x63\x6F\x6D\x6D\x61\x6E"
"\x64\x20\x5B\x0A\x7B\x52\x65\x74\x75\x72\x6E\x73\x20\x74\x68\x65"
"\x20\x72\x69\x63\x68\x74\x65\x78\x74\x20\x62\x6C\x6F\x63\x6B\x20"
"\x61\x74\x20\x74\x68\x65\x20\x73\x74\x72\x69\x6E\x67\x20\x70\x6F"
"\x73\x69\x74\x69\x6F\x6E\x20\x66\x6F\x72\x20\x61\x6E\x20\x58\x59"
"\x20\x6F\x66\x66\x73\x65\x74\x20\x69\x6E\x20\x74\x68\x65\x20\x67"
"\x72\x61\x70\x68\x69\x63\x73\x20\x6F\x62\x6A\x65\x63\x74\x2E\x7D"
"\x20\x0A\x67\x6F\x62\x20\x5B\x67\x6F\x62\x21\x5D\x20\x0A\x70\x6F"
"\x73\x69\x74\x69\x6F\x6E\x20\x5B\x70\x61\x69\x72\x21\x5D\x0A\x5D"
"\x20\x0A\x73\x68\x6F\x77\x3A\x20\x63\x6F\x6D\x6D\x61\x6E\x64\x20"
"\x5B\x0A\x7B\x44\x69\x73\x70\x6C\x61\x79\x20\x6F\x72\x20\x75\x70"
"\x64\x61\x74\x65\x20\x61\x20\x67\x72\x61\x70\x68\x69\x63\x61\x6C"
"\x20\x6F\x62\x6A\x65\x63\x74\x20\x6F\x72\x20\x62\x6C\x6F\x63\x6B"
"\x20\x6F\x66\x20\x74\x68\x65\x6D\x2E\x7D\x20\x0A\x67\x6F\x62\x20"
"\x5B\x67\x6F\x62\x21\x20\x6E\x6F\x6E\x65\x21\x5D\x0A\x5D\x20\x0A"
"\x73\x69\x7A\x65\x2D\x74\x65\x78\x74\x3A\x20\x63\x6F\x6D\x6D\x61"
"\x6E\x64\x20\x5B\x0A\x7B\x52\x65\x74\x75\x72\x6E\x73\x20\x74\x68"
"\x65\x20\x73\x69\x7A\x65\x20\x6F\x66\x20\x74\x65\x78\x74\x20\x72"
"\x65\x6E\x64\x65\x72\x65\x64\x20\x62\x79\x20\x61\x20\x67\x72\x61"
"\x70\x68\x69\x63\x73\x20\x6F\x62\x6A\x65\x63\x74\x2E\x7D\x20\x0A"
"\x67\x6F\x62\x20\x5B\x67\x6F\x62\x21\x5D\x0A\x5D\x20\x0A\x64\x72"
"\x61\x77\x3A\x20\x63\x6F\x6D\x6D\x61\x6E\x64\x20\x5B\x0A\x7B\x52"
"\x65\x6E\x64\x65\x72\x73\x20\x64\x72\x61\x77\x20\x64\x69\x61\x6C"
"\x65\x63\x74\x20\x28\x73\x63\x61\x6C\x61\x62\x6C\x65\x20\x76\x65"
"\x63\x74\x6F\x72\x20\x67\x72\x61\x70\x68\x69\x63\x73\x29\x20\x74"
"\x6F\x20\x61\x6E\x20\x69\x6D\x61\x67\x65\x20\x28\x72\x65\x74\x75"
"\x72\x6E\x65\x64\x29\x2E\x7D\x20\x0A\x69\x6D\x61\x67\x65\x20\x5B"
"\x69\x6D\x61\x67\x65\x21\x20\x70\x61\x69\x72\x21\x5D\x20\x22\x49"
"\x6D\x61\x67\x65\x20\x6F\x72\x20\x73\x69\x7A\x65\x20\x6F\x66\x20"
"\x69\x6D\x61\x67\x65\x22\x20\x0A\x63\x6F\x6D\x6D\x61\x6E\x64\x73"
"\x20\x5B\x62\x6C\x6F\x63\x6B\x21\x5D\x20\x22\x44\x72\x61\x77\x20"
"\x63\x6F\x6D\x6D\x61\x6E\x64\x73\x22\x0A\x5D\x20\x0A\x67\x75\x69"
"\x2D\x6D\x65\x74\x72\x69\x63\x3A\x20\x63\x6F\x6D\x6D\x61\x6E\x64"
"\x20\x5B\x0A\x22\x52\x65\x74\x75\x72\x6E\x73\x20\x73\x70\x65\x63"
"\x69\x66\x69\x63\x20\x67\x75\x69\x20\x72\x65\x6C\x61\x74\x65\x64"
"\x20\x6D\x65\x74\x72\x69\x63\x20\x73\x65\x74\x74\x69\x6E\x67\x2E"
"\x22\x20\x0A\x6B\x65\x79\x77\x6F\x72\x64\x20\x5B\x77\x6F\x72\x64"
"\x21\x5D\x20\x7B\x41\x76\x61\x69\x6C\x61\x62\x6C\x65\x20\x6B\x65"
"\x79\x77\x6F\x72\x64\x73\x3A\x20\x53\x43\x52\x45\x45\x4E\x2D\x53"
"\x49\x5A\x45\x2C\x20\x42\x4F\x52\x44\x45\x52\x2D\x53\x49\x5A\x45"
"\x2C\x20\x42\x4F\x52\x44\x45\x52\x2D\x46\x49\x58\x45\x44\x2C\x20"
"\x54\x49\x54\x4C\x45\x2D\x53\x49\x5A\x45\x2C\x20\x57\x4F\x52\x4B"
"\x2D\x4F\x52\x49\x47\x49\x4E\x20\x61\x6E\x64\x20\x57\x4F\x52\x4B"
"\x2D\x53\x49\x5A\x45\x2E\x7D\x0A\x5D\x20\x0A\x73\x79\x73\x74\x65"
"\x6D\x2F\x73\x74\x61\x6E\x64\x61\x72\x64\x2F\x66\x6F\x6E\x74\x3A"
"\x20\x63\x6F\x6E\x74\x65\x78\x74\x20\x5B\x0A\x6E\x61\x6D\x65\x3A"
"\x20\x22\x61\x72\x69\x61\x6C\x22\x20\x0A\x73\x74\x79\x6C\x65\x3A"
"\x20\x6E\x6F\x6E\x65\x20\x0A\x73\x69\x7A\x65\x3A\x20\x31\x32\x20"
"\x0A\x63\x6F\x6C\x6F\x72\x3A\x20\x30\x2E\x30\x2E\x30\x20\x0A\x6F"
"\x66\x66\x73\x65\x74\x3A\x20\x32\x78\x32\x20\x0A\x73\x70\x61\x63"
"\x65\x3A\x20\x30\x78\x30\x20\x0A\x73\x68\x61\x64\x6F\x77\x3A\x20"
"\x6E\x6F\x6E\x65\x0A\x5D\x20\x0A\x73\x79\x73\x74\x65\x6D\x2F\x73"
"\x74\x61\x6E\x64\x61\x72\x64\x2F\x70\x61\x72\x61\x3A\x20\x63\x6F"
"\x6E\x74\x65\x78\x74\x20\x5B\x0A\x6F\x72\x69\x67\x69\x6E\x3A\x20"
"\x32\x78\x32\x20\x0A\x6D\x61\x72\x67\x69\x6E\x3A\x20\x32\x78\x32"
"\x20\x0A\x69\x6E\x64\x65\x6E\x74\x3A\x20\x30\x78\x30\x20\x0A\x74"
"\x61\x62\x73\x3A\x20\x34\x30\x20\x0A\x77\x72\x61\x70\x3F\x3A\x20"
"\x74\x72\x75\x65\x20\x0A\x73\x63\x72\x6F\x6C\x6C\x3A\x20\x30\x78"
"\x30\x20\x0A\x61\x6C\x69\x67\x6E\x3A\x20\x27\x6C\x65\x66\x74\x20"
"\x0A\x76\x61\x6C\x69\x67\x6E\x3A\x20\x27\x74\x6F\x70\x0A\x5D\x20"
"\x0A\x76\x69\x65\x77\x3A\x20\x66\x75\x6E\x63\x20\x5B\x0A\x22\x44"
"\x69\x73\x70\x6C\x61\x79\x73\x20\x61\x20\x77\x69\x6E\x64\x6F\x77"
"\x20\x76\x69\x65\x77\x2E\x22\x20\x0A\x77\x69\x6E\x64\x6F\x77\x20"
"\x5B\x67\x6F\x62\x21\x20\x62\x6C\x6F\x63\x6B\x21\x20\x6F\x62\x6A"
"\x65\x63\x74\x21\x5D\x20\x22\x57\x69\x6E\x64\x6F\x77\x20\x67\x6F"
"\x62\x2C\x20\x56\x49\x44\x20\x66\x61\x63\x65\x2C\x20\x6F\x72\x20"
"\x56\x49\x44\x20\x6C\x61\x79\x6F\x75\x74\x20\x62\x6C\x6F\x63\x6B"
"\x22\x20\x0A\x2F\x6F\x70\x74\x69\x6F\x6E\x73\x20\x6F\x70\x74\x73"
"\x20\x5B\x62\x6C\x6F\x63\x6B\x21\x5D\x20\x22\x57\x69\x6E\x64\x6F"
"\x77\x20\x6F\x70\x74\x69\x6F\x6E\x73\x20\x73\x70\x65\x63\x20\x62"
"\x6C\x6F\x63\x6B\x22\x20\x0A\x2F\x6E\x6F\x2D\x77\x61\x69\x74\x20"
"\x7B\x52\x65\x74\x75\x72\x6E\x20\x69\x6D\x6D\x65\x64\x69\x61\x74"
"\x65\x6C\x79\x2E\x20\x44\x6F\x20\x6E\x6F\x74\x20\x77\x61\x69\x74"
"\x20\x61\x6E\x64\x20\x70\x72\x6F\x63\x65\x73\x73\x20\x65\x76\x65"
"\x6E\x74\x73\x2E\x7D\x20\x0A\x2F\x61\x73\x2D\x69\x73\x20\x22\x4C"
"\x65\x61\x76\x65\x20\x77\x69\x6E\x64\x6F\x77\x20\x61\x73\x20\x69"
"\x73\x2E\x20\x44\x6F\x20\x6E\x6F\x74\x20\x61\x64\x64\x20\x61\x20"
"\x70\x61\x72\x65\x6E\x74\x20\x67\x6F\x62\x2E\x22\x20\x0A\x2F\x6C"
"\x6F\x63\x61\x6C\x20\x73\x63\x72\x65\x65\x6E\x20\x74\x6D\x70\x20"
"\x78\x79\x0A\x5D\x20\x5B\x0A\x69\x66\x20\x6E\x6F\x74\x20\x73\x63"
"\x72\x65\x65\x6E\x3A\x20\x73\x79\x73\x74\x65\x6D\x2F\x76\x69\x65"
"\x77\x2F\x73\x63\x72\x65\x65\x6E\x2D\x67\x6F\x62\x20\x5B\x72\x65"
"\x74\x75\x72\x6E\x20\x6E\x6F\x6E\x65\x5D\x20\x0A\x6F\x70\x74\x73"
"\x3A\x20\x6D\x61\x6B\x65\x20\x6D\x61\x70\x21\x20\x61\x6E\x79\x20"
"\x5B\x72\x65\x64\x75\x63\x65\x2F\x6E\x6F\x2D\x73\x65\x74\x20\x6F"
"\x70\x74\x73\x20\x5B\x5D\x5D\x20\x0A\x63\x61\x73\x65\x2F\x61\x6C"
"\x6C\x20\x5B\x0A\x6E\x6F\x2D\x77\x61\x69\x74\x20\x5B\x6F\x70\x74"
"\x73\x2F\x6E\x6F\x2D\x77\x61\x69\x74\x3A\x20\x74\x72\x75\x65\x5D"
"\x20\x0A\x61\x73\x2D\x69\x73\x20\x5B\x6F\x70\x74\x73\x2F\x61\x73"
"\x2D\x69\x73\x3A\x20\x74\x72\x75\x65\x5D\x0A\x5D\x20\x0A\x69\x66"
"\x20\x67\x6F\x62\x3F\x20\x77\x69\x6E\x64\x6F\x77\x20\x5B\x0A\x75"
"\x6E\x6C\x65\x73\x73\x20\x6F\x70\x74\x73\x2F\x61\x73\x2D\x69\x73"
"\x20\x5B\x0A\x74\x6D\x70\x3A\x20\x77\x69\x6E\x64\x6F\x77\x20\x0A"
"\x74\x6D\x70\x2F\x6F\x66\x66\x73\x65\x74\x3A\x20\x30\x78\x30\x20"
"\x0A\x77\x69\x6E\x64\x6F\x77\x3A\x20\x6D\x61\x6B\x65\x20\x67\x6F"
"\x62\x21\x20\x5B\x73\x69\x7A\x65\x3A\x20\x74\x6D\x70\x2F\x73\x69"
"\x7A\x65\x5D\x20\x0A\x61\x70\x70\x65\x6E\x64\x20\x77\x69\x6E\x64"
"\x6F\x77\x20\x74\x6D\x70\x0A\x5D\x20\x0A\x69\x66\x20\x61\x6E\x79"
"\x20\x5B\x6F\x70\x74\x73\x2F\x63\x6F\x6C\x6F\x72\x20\x6F\x70\x74"
"\x73\x2F\x64\x72\x61\x77\x5D\x20\x5B\x0A\x69\x6E\x73\x65\x72\x74"
"\x20\x77\x69\x6E\x64\x6F\x77\x20\x6D\x61\x6B\x65\x20\x67\x6F\x62"
"\x21\x20\x61\x70\x70\x65\x6E\x64\x20\x63\x6F\x70\x79\x20\x5B\x0A"
"\x73\x69\x7A\x65\x3A\x20\x77\x69\x6E\x64\x6F\x77\x2F\x73\x69\x7A"
"\x65\x20\x0A\x6F\x66\x66\x73\x65\x74\x3A\x20\x30\x78\x30\x0A\x5D"
"\x20\x70\x69\x63\x6B\x20\x5B\x0A\x5B\x64\x72\x61\x77\x3A\x20\x6F"
"\x70\x74\x73\x2F\x64\x72\x61\x77\x5D\x20\x0A\x5B\x63\x6F\x6C\x6F"
"\x72\x3A\x20\x6F\x70\x74\x73\x2F\x63\x6F\x6C\x6F\x72\x5D\x0A\x5D"
"\x20\x62\x6C\x6F\x63\x6B\x3F\x20\x6F\x70\x74\x73\x2F\x64\x72\x61"
"\x77\x0A\x5D\x20\x0A\x75\x6E\x6C\x65\x73\x73\x20\x6F\x70\x74\x73"
"\x2F\x68\x61\x6E\x64\x6C\x65\x72\x20\x5B\x0A\x68\x61\x6E\x64\x6C"
"\x65\x2D\x65\x76\x65\x6E\x74\x73\x20\x5B\x0A\x6E\x61\x6D\x65\x3A"
"\x20\x27\x76\x69\x65\x77\x2D\x64\x65\x66\x61\x75\x6C\x74\x20\x0A"
"\x70\x72\x69\x6F\x72\x69\x74\x79\x3A\x20\x35\x30\x20\x0A\x68\x61"
"\x6E\x64\x6C\x65\x72\x3A\x20\x66\x75\x6E\x63\x20\x5B\x65\x76\x65"
"\x6E\x74\x5D\x20\x5B\x0A\x70\x72\x69\x6E\x74\x20\x5B\x22\x76\x69"
"\x65\x77\x2D\x65\x76\x65\x6E\x74\x3A\x22\x20\x65\x76\x65\x6E\x74"
"\x2F\x74\x79\x70\x65\x20\x65\x76\x65\x6E\x74\x2F\x6F\x66\x66\x73"
"\x65\x74\x5D\x20\x0A\x69\x66\x20\x73\x77\x69\x74\x63\x68\x20\x65"
"\x76\x65\x6E\x74\x2F\x74\x79\x70\x65\x20\x5B\x0A\x63\x6C\x6F\x73"
"\x65\x20\x5B\x74\x72\x75\x65\x5D\x20\x0A\x6B\x65\x79\x20\x5B\x65"
"\x76\x65\x6E\x74\x2F\x6B\x65\x79\x20\x3D\x20\x65\x73\x63\x61\x70"
"\x65\x5D\x0A\x5D\x20\x5B\x0A\x75\x6E\x68\x61\x6E\x64\x6C\x65\x2D"
"\x65\x76\x65\x6E\x74\x73\x20\x73\x65\x6C\x66\x20\x0A\x75\x6E\x76"
"\x69\x65\x77\x20\x65\x76\x65\x6E\x74\x2F\x77\x69\x6E\x64\x6F\x77"
"\x20\x0A\x71\x75\x69\x74\x0A\x5D\x20\x0A\x73\x68\x6F\x77\x20\x65"
"\x76\x65\x6E\x74\x2F\x77\x69\x6E\x64\x6F\x77\x20\x0A\x6E\x6F\x6E"
"\x65\x0A\x5D\x0A\x5D\x0A\x5D\x0A\x5D\x20\x0A\x69\x66\x20\x62\x6C"
"\x6F\x63\x6B\x3F\x20\x77\x69\x6E\x64\x6F\x77\x20\x5B\x0A\x77\x69"
"\x6E\x64\x6F\x77\x3A\x20\x6C\x61\x79\x6F\x75\x74\x2F\x62\x61\x63"
"\x6B\x67\x72\x6F\x75\x6E\x64\x20\x77\x69\x6E\x64\x6F\x77\x20\x61"
"\x6E\x79\x20\x5B\x6F\x70\x74\x73\x2F\x64\x72\x61\x77\x20\x6F\x70"
"\x74\x73\x2F\x63\x6F\x6C\x6F\x72\x5D\x0A\x5D\x20\x0A\x69\x66\x20"
"\x6F\x62\x6A\x65\x63\x74\x3F\x20\x77\x69\x6E\x64\x6F\x77\x20\x5B"
"\x0A\x77\x69\x6E\x64\x6F\x77\x3A\x20\x61\x70\x70\x65\x6E\x64\x20"
"\x6D\x61\x6B\x65\x20\x67\x6F\x62\x21\x20\x5B\x0A\x64\x61\x74\x61"
"\x3A\x20\x77\x69\x6E\x64\x6F\x77\x20\x0A\x73\x69\x7A\x65\x3A\x20"
"\x77\x69\x6E\x64\x6F\x77\x2F\x73\x69\x7A\x65\x0A\x5D\x20\x77\x69"
"\x6E\x64\x6F\x77\x2F\x67\x6F\x62\x20\x0A\x77\x69\x6E\x64\x6F\x77"
"\x2F\x66\x6C\x61\x67\x73\x3A\x20\x5B\x72\x65\x73\x69\x7A\x65\x5D"
"\x0A\x5D\x20\x0A\x77\x69\x6E\x64\x6F\x77\x2F\x74\x65\x78\x74\x3A"
"\x20\x61\x6E\x79\x20\x5B\x6F\x70\x74\x73\x2F\x74\x69\x74\x6C\x65"
"\x20\x77\x69\x6E\x64\x6F\x77\x2F\x74\x65\x78\x74\x20\x22\x52\x45"
"\x42\x4F\x4C\x3A\x20\x75\x6E\x74\x69\x74\x6C\x65\x64\x22\x5D\x20"
"\x0A\x69\x66\x20\x6F\x70\x74\x73\x2F\x6F\x66\x66\x73\x65\x74\x20"
"\x5B\x0A\x69\x66\x20\x77\x6F\x72\x64\x3F\x20\x6F\x70\x74\x73\x2F"
"\x6F\x66\x66\x73\x65\x74\x20\x5B\x0A\x6F\x70\x74\x73\x2F\x6F\x66"
"\x66\x73\x65\x74\x3A\x20\x65\x69\x74\x68\x65\x72\x20\x6F\x70\x74"
"\x73\x2F\x6F\x66\x66\x73\x65\x74\x20\x3D\x20\x27\x63\x65\x6E\x74"
"\x65\x72\x20\x5B\x73\x63\x72\x65\x65\x6E\x2F\x73\x69\x7A\x65\x20"
"\x2D\x20\x77\x69\x6E\x64\x6F\x77\x2F\x73\x69\x7A\x65\x20\x2F\x20"
"\x32\x5D\x20\x5B\x31\x30\x30\x78\x31\x30\x30\x5D\x0A\x5D\x20\x0A"
"\x77\x69\x6E\x64\x6F\x77\x2F\x6F\x66\x66\x73\x65\x74\x3A\x20\x6F"
"\x70\x74\x73\x2F\x6F\x66\x66\x73\x65\x74\x0A\x5D\x20\x0A\x69\x66"
"\x20\x6F\x70\x74\x73\x2F\x6F\x77\x6E\x65\x72\x20\x5B\x77\x69\x6E"
"\x64\x6F\x77\x2F\x6F\x77\x6E\x65\x72\x3A\x20\x6F\x70\x74\x73\x2F"
"\x6F\x77\x6E\x65\x72\x5D\x20\x0A\x69\x66\x20\x6F\x70\x74\x73\x2F"
"\x66\x6C\x61\x67\x73\x20\x5B\x77\x69\x6E\x64\x6F\x77\x2F\x66\x6C"
"\x61\x67\x73\x3A\x20\x6F\x70\x74\x73\x2F\x66\x6C\x61\x67\x73\x5D"
"\x20\x0A\x69\x66\x20\x6F\x70\x74\x73\x2F\x68\x61\x6E\x64\x6C\x65"
"\x72\x20\x5B\x68\x61\x6E\x64\x6C\x65\x2D\x65\x76\x65\x6E\x74\x73"
"\x20\x6F\x70\x74\x73\x2F\x68\x61\x6E\x64\x6C\x65\x72\x5D\x20\x0A"
"\x75\x6E\x6C\x65\x73\x73\x20\x77\x69\x6E\x64\x6F\x77\x20\x3D\x20"
"\x73\x63\x72\x65\x65\x6E\x20\x5B\x61\x70\x70\x65\x6E\x64\x20\x73"
"\x63\x72\x65\x65\x6E\x20\x77\x69\x6E\x64\x6F\x77\x5D\x20\x0A\x73"
"\x68\x6F\x77\x20\x77\x69\x6E\x64\x6F\x77\x20\x0A\x69\x66\x20\x61"
"\x6C\x6C\x20\x5B\x0A\x6E\x6F\x74\x20\x6F\x70\x74\x73\x2F\x6E\x6F"
"\x2D\x77\x61\x69\x74\x20\x31\x20\x3D\x20\x6C\x65\x6E\x67\x74\x68"
"\x3F\x20\x73\x63\x72\x65\x65\x6E\x0A\x5D\x20\x5B\x0A\x64\x6F\x2D"
"\x65\x76\x65\x6E\x74\x73\x0A\x5D\x20\x0A\x77\x69\x6E\x64\x6F\x77"
"\x0A\x5D\x20\x0A\x75\x6E\x76\x69\x65\x77\x3A\x20\x66\x75\x6E\x63"
"\x20\x5B\x0A\x22\x43\x6C\x6F\x73\x65\x73\x20\x61\x20\x77\x69\x6E"
"\x64\x6F\x77\x20\x76\x69\x65\x77\x2E\x22\x20\x0A\x77\x69\x6E\x64"
"\x6F\x77\x20\x5B\x6F\x62\x6A\x65\x63\x74\x21\x20\x67\x6F\x62\x21"
"\x20\x77\x6F\x72\x64\x21\x20\x6E\x6F\x6E\x65\x21\x5D\x20\x22\x57"
"\x69\x6E\x64\x6F\x77\x20\x66\x61\x63\x65\x20\x6F\x72\x20\x47\x4F"
"\x42\x2E\x20\x27\x61\x6C\x6C\x20\x66\x6F\x72\x20\x61\x6C\x6C\x2E"
"\x20\x6E\x6F\x6E\x65\x20\x66\x6F\x72\x20\x6C\x61\x73\x74\x22\x20"
"\x0A\x2F\x6C\x6F\x63\x61\x6C\x20\x73\x63\x72\x65\x65\x6E\x0A\x5D"
"\x20\x5B\x0A\x73\x63\x72\x65\x65\x6E\x3A\x20\x73\x79\x73\x74\x65"
"\x6D\x2F\x76\x69\x65\x77\x2F\x73\x63\x72\x65\x65\x6E\x2D\x67\x6F"
"\x62\x20\x0A\x63\x61\x73\x65\x20\x5B\x0A\x6F\x62\x6A\x65\x63\x74"
"\x3F\x20\x77\x69\x6E\x64\x6F\x77\x20\x5B\x77\x69\x6E\x64\x6F\x77"
"\x3A\x20\x77\x69\x6E\x64\x6F\x77\x2F\x67\x6F\x62\x2F\x70\x61\x72"
"\x65\x6E\x74\x5D\x20\x0A\x77\x69\x6E\x64\x6F\x77\x20\x3D\x20\x27"
"\x61\x6C\x6C\x20\x5B\x73\x68\x6F\x77\x20\x63\x6C\x65\x61\x72\x20"
"\x73\x63\x72\x65\x65\x6E\x20\x65\x78\x69\x74\x5D\x20\x0A\x6E\x6F"
"\x74\x20\x77\x69\x6E\x64\x6F\x77\x20\x5B\x77\x69\x6E\x64\x6F\x77"
"\x3A\x20\x6C\x61\x73\x74\x20\x73\x63\x72\x65\x65\x6E\x5D\x0A\x5D"
"\x20\x0A\x72\x65\x6D\x6F\x76\x65\x20\x66\x69\x6E\x64\x20\x73\x63"
"\x72\x65\x65\x6E\x20\x77\x69\x6E\x64\x6F\x77\x20\x0A\x73\x68\x6F"
"\x77\x20\x77\x69\x6E\x64\x6F\x77\x0A\x5D\x20\x0A\x62\x61\x73\x65"
"\x2D\x68\x61\x6E\x64\x6C\x65\x72\x3A\x20\x63\x6F\x6E\x74\x65\x78"
"\x74\x20\x5B\x0A\x6E\x61\x6D\x65\x3A\x20\x27\x6E\x6F\x2D\x6E\x61"
"\x6D\x65\x20\x0A\x70\x72\x69\x6F\x72\x69\x74\x79\x3A\x20\x30\x0A"
"\x5D\x20\x0A\x68\x61\x6E\x64\x6C\x65\x2D\x65\x76\x65\x6E\x74\x73"
"\x3A\x20\x66\x75\x6E\x63\x20\x5B\x0A\x22\x41\x64\x64\x73\x20\x61"
"\x20\x68\x61\x6E\x64\x6C\x65\x72\x20\x74\x6F\x20\x74\x68\x65\x20"
"\x76\x69\x65\x77\x20\x65\x76\x65\x6E\x74\x20\x73\x79\x73\x74\x65"
"\x6D\x2E\x22\x20\x0A\x68\x61\x6E\x64\x6C\x65\x72\x20\x5B\x62\x6C"
"\x6F\x63\x6B\x21\x5D\x20\x0A\x2F\x6C\x6F\x63\x61\x6C\x20\x73\x79"
"\x73\x2D\x68\x61\x6E\x64\x0A\x5D\x20\x5B\x0A\x68\x61\x6E\x64\x6C"
"\x65\x72\x3A\x20\x6D\x61\x6B\x65\x20\x62\x61\x73\x65\x2D\x68\x61"
"\x6E\x64\x6C\x65\x72\x20\x68\x61\x6E\x64\x6C\x65\x72\x20\x0A\x73"
"\x79\x73\x2D\x68\x61\x6E\x64\x3A\x20\x73\x79\x73\x74\x65\x6D\x2F"
"\x76\x69\x65\x77\x2F\x65\x76\x65\x6E\x74\x2D\x70\x6F\x72\x74\x2F"
"\x6C\x6F\x63\x61\x6C\x73\x2F\x68\x61\x6E\x64\x6C\x65\x72\x73\x20"
"\x0A\x75\x6E\x6C\x65\x73\x73\x20\x66\x6F\x72\x65\x61\x63\x68\x20"
"\x5B\x68\x65\x72\x65\x3A\x20\x68\x61\x6E\x64\x5D\x20\x73\x79\x73"
"\x2D\x68\x61\x6E\x64\x20\x5B\x0A\x69\x66\x20\x68\x61\x6E\x64\x6C"
"\x65\x72\x2F\x70\x72\x69\x6F\x72\x69\x74\x79\x20\x3E\x20\x68\x61"
"\x6E\x64\x2F\x70\x72\x69\x6F\x72\x69\x74\x79\x20\x5B\x0A\x69\x6E"
"\x73\x65\x72\x74\x20\x68\x65\x72\x65\x20\x68\x61\x6E\x64\x6C\x65"
"\x72\x20\x0A\x62\x72\x65\x61\x6B\x2F\x72\x65\x74\x75\x72\x6E\x20"
"\x74\x72\x75\x65\x0A\x5D\x0A\x5D\x20\x5B\x0A\x61\x70\x70\x65\x6E"
"\x64\x20\x73\x79\x73\x2D\x68\x61\x6E\x64\x20\x68\x61\x6E\x64\x6C"
"\x65\x72\x0A\x5D\x20\x0A\x68\x61\x6E\x64\x6C\x65\x72\x0A\x5D\x20"
"\x0A\x75\x6E\x68\x61\x6E\x64\x6C\x65\x2D\x65\x76\x65\x6E\x74\x73"
"\x3A\x20\x66\x75\x6E\x63\x20\x5B\x0A\x22\x52\x65\x6D\x6F\x76\x65"
"\x73\x20\x61\x20\x68\x61\x6E\x64\x6C\x65\x72\x20\x66\x72\x6F\x6D"
"\x20\x74\x68\x65\x20\x76\x69\x65\x77\x20\x65\x76\x65\x6E\x74\x20"
"\x73\x79\x73\x74\x65\x6D\x2E\x22\x20\x0A\x68\x61\x6E\x64\x6C\x65"
"\x72\x20\x5B\x6F\x62\x6A\x65\x63\x74\x21\x5D\x0A\x5D\x20\x5B\x0A"
"\x72\x65\x6D\x6F\x76\x65\x20\x66\x69\x6E\x64\x20\x73\x79\x73\x74"
"\x65\x6D\x2F\x76\x69\x65\x77\x2F\x65\x76\x65\x6E\x74\x2D\x70\x6F"
"\x72\x74\x2F\x6C\x6F\x63\x61\x6C\x73\x2F\x68\x61\x6E\x64\x6C\x65"
"\x72\x73\x20\x68\x61\x6E\x64\x6C\x65\x72\x20\x0A\x65\x78\x69\x74"
"\x0A\x5D\x20\x0A\x68\x61\x6E\x64\x6C\x65\x64\x2D\x65\x76\x65\x6E"
"\x74\x73\x3F\x3A\x20\x66\x75\x6E\x63\x20\x5B\x0A\x7B\x52\x65\x74"
"\x75\x72\x6E\x73\x20\x65\x76\x65\x6E\x74\x20\x68\x61\x6E\x64\x6C"
"\x65\x72\x20\x6F\x62\x6A\x65\x63\x74\x20\x6D\x61\x74\x63\x68\x69"
"\x6E\x67\x20\x61\x20\x67\x69\x76\x65\x6E\x20\x6E\x61\x6D\x65\x2E"
"\x7D\x20\x0A\x6E\x61\x6D\x65\x0A\x5D\x20\x5B\x0A\x66\x6F\x72\x65"
"\x61\x63\x68\x20\x68\x61\x6E\x64\x20\x73\x79\x73\x74\x65\x6D\x2F"
"\x76\x69\x65\x77\x2F\x65\x76\x65\x6E\x74\x2D\x70\x6F\x72\x74\x2F"
"\x6C\x6F\x63\x61\x6C\x73\x2F\x68\x61\x6E\x64\x6C\x65\x72\x73\x20"
"\x5B\x0A\x69\x66\x20\x68\x61\x6E\x64\x2F\x6E\x61\x6D\x65\x20\x3D"
"\x20\x6E\x61\x6D\x65\x20\x5B\x72\x65\x74\x75\x72\x6E\x20\x68\x61"
"\x6E\x64\x5D\x0A\x5D\x20\x0A\x6E\x6F\x6E\x65\x0A\x5D\x20\x0A\x64"
"\x6F\x2D\x65\x76\x65\x6E\x74\x73\x3A\x20\x66\x75\x6E\x63\x20\x5B"
"\x0A\x7B\x57\x61\x69\x74\x73\x20\x66\x6F\x72\x20\x77\x69\x6E\x64"
"\x6F\x77\x20\x65\x76\x65\x6E\x74\x73\x2E\x20\x52\x65\x74\x75\x72"
"\x6E\x73\x20\x77\x68\x65\x6E\x20\x61\x6C\x6C\x20\x77\x69\x6E\x64"
"\x6F\x77\x73\x20\x61\x72\x65\x20\x63\x6C\x6F\x73\x65\x64\x2E\x7D"
"\x0A\x5D\x20\x5B\x0A\x77\x61\x69\x74\x20\x73\x79\x73\x74\x65\x6D"
"\x2F\x76\x69\x65\x77\x2F\x65\x76\x65\x6E\x74\x2D\x70\x6F\x72\x74"
"\x0A\x5D\x20\x0A\x69\x6E\x69\x74\x2D\x76\x69\x65\x77\x2D\x73\x79"
"\x73\x74\x65\x6D\x3A\x20\x66\x75\x6E\x63\x20\x5B\x0A\x22\x49\x6E"
"\x69\x74\x69\x61\x6C\x69\x7A\x65\x20\x74\x68\x65\x20\x56\x69\x65"
"\x77\x20\x73\x75\x62\x73\x79\x73\x74\x65\x6D\x2E\x22\x20\x0A\x2F"
"\x6C\x6F\x63\x61\x6C\x20\x65\x70\x0A\x5D\x20\x5B\x0A\x69\x6E\x69"
"\x74\x20\x73\x79\x73\x74\x65\x6D\x2F\x76\x69\x65\x77\x2F\x73\x63"
"\x72\x65\x65\x6E\x2D\x67\x6F\x62\x3A\x20\x6D\x61\x6B\x65\x20\x67"
"\x6F\x62\x21\x20\x5B\x74\x65\x78\x74\x3A\x20\x22\x54\x6F\x70\x20"
"\x47\x6F\x62\x22\x5D\x20\x0A\x66\x6F\x72\x65\x61\x63\x68\x20\x77"
"\x20\x77\x6F\x72\x64\x73\x2D\x6F\x66\x20\x73\x79\x73\x74\x65\x6D"
"\x2F\x76\x69\x65\x77\x2F\x6D\x65\x74\x72\x69\x63\x73\x20\x5B\x0A"
"\x73\x65\x74\x20\x69\x6E\x20\x73\x79\x73\x74\x65\x6D\x2F\x76\x69"
"\x65\x77\x2F\x6D\x65\x74\x72\x69\x63\x73\x20\x77\x20\x67\x75\x69"
"\x2D\x6D\x65\x74\x72\x69\x63\x20\x77\x0A\x5D\x20\x0A\x69\x66\x20"
"\x73\x79\x73\x74\x65\x6D\x2F\x76\x69\x65\x77\x2F\x65\x76\x65\x6E"
"\x74\x2D\x70\x6F\x72\x74\x20\x5B\x65\x78\x69\x74\x5D\x20\x0A\x65"
"\x70\x3A\x20\x6F\x70\x65\x6E\x20\x5B\x73\x63\x68\x65\x6D\x65\x3A"
"\x20\x27\x65\x76\x65\x6E\x74\x5D\x20\x0A\x73\x79\x73\x74\x65\x6D"
"\x2F\x76\x69\x65\x77\x2F\x65\x76\x65\x6E\x74\x2D\x70\x6F\x72\x74"
"\x3A\x20\x65\x70\x20\x0A\x65\x70\x2F\x6C\x6F\x63\x61\x6C\x73\x3A"
"\x20\x63\x6F\x6E\x74\x65\x78\x74\x20\x5B\x68\x61\x6E\x64\x6C\x65"
"\x72\x73\x3A\x20\x63\x6F\x70\x79\x20\x5B\x5D\x5D\x20\x0A\x65\x70"
"\x2F\x61\x77\x61\x6B\x65\x3A\x20\x66\x75\x6E\x63\x20\x5B\x65\x76"
"\x65\x6E\x74\x20\x2F\x6C\x6F\x63\x61\x6C\x20\x68\x5D\x20\x5B\x0A"
"\x68\x3A\x20\x65\x76\x65\x6E\x74\x2F\x70\x6F\x72\x74\x2F\x6C\x6F"
"\x63\x61\x6C\x73\x2F\x68\x61\x6E\x64\x6C\x65\x72\x73\x20\x0A\x77"
"\x68\x69\x6C\x65\x20\x5B\x0A\x61\x6C\x6C\x20\x5B\x65\x76\x65\x6E"
"\x74\x20\x6E\x6F\x74\x20\x74\x61\x69\x6C\x3F\x20\x68\x5D\x0A\x5D"
"\x20\x5B\x0A\x65\x76\x65\x6E\x74\x3A\x20\x68\x2F\x31\x2F\x68\x61"
"\x6E\x64\x6C\x65\x72\x20\x65\x76\x65\x6E\x74\x20\x0A\x68\x3A\x20"
"\x6E\x65\x78\x74\x20\x68\x0A\x5D\x20\x0A\x74\x61\x69\x6C\x3F\x20"
"\x73\x79\x73\x74\x65\x6D\x2F\x76\x69\x65\x77\x2F\x73\x63\x72\x65"
"\x65\x6E\x2D\x67\x6F\x62\x0A\x5D\x0A\x5D\x20\x0A\x69\x6E\x69\x74"
"\x2D\x76\x69\x65\x77\x2D\x73\x79\x73\x74\x65\x6D\x0A\x00"

};

#endif
