/*
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

   xrdp: A Remote Desktop Protocol server.
   Copyright (C) Jay Sorg 2006-2007

   keylayout

*/

#include "xrdp.h"

/*****************************************************************************/
/* us english */

/* non shift chars */
char en_us_noshift[] =
{
  0,    0,   '1',  '2',  '3',  '4',  '5',  '6',
 '7',  '8',  '9',  '0',  '-',  '=',   0,    0,
 'q',  'w',  'e',  'r',  't',  'y',  'u',  'i',
 'o',  'p',  '[',  ']',   0,    0,   'a',  's',
 'd',  'f',  'g',  'h',  'j',  'k',  'l',  ';',
 '\'', '`',   0,   '\\', 'z',  'x',  'c',  'v',
 'b',  'n',  'm',  ',',  '.',  '/',   0,   '*',
  0,   ' ',   0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,   '7',
 '8',  '9',  '-',  '4',  '5',  '6',  '+',  '1',
 '2',  '3',  '0',  '.',   0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0
};

/* shift chars */
char en_us_shift[] =
{
  0,    0,   '!',  '@',  '#',  '$',  '%',  '^',
 '&',  '*',  '(',  ')',  '_',  '+',   0,    0,
 'Q',  'W',  'E',  'R',  'T',  'Y',  'U',  'I',
 'O',  'P',  '{',  '}',   0,    0,   'A',  'S',
 'D',  'F',  'G',  'H',  'J',  'K',  'L',  ':',
 '"',  '~',   0,   '|',  'Z',  'X',  'C',  'V',
 'B',  'N',  'M',  '<',  '>',  '?',   0,   '*',
  0,   ' ',   0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,   '7',
 '8',  '9',  '-',  '4',  '5',  '6',  '+',  '1',
 '2',  '3',  '0',  '.',   0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0
};

/* right alt chars */
char en_us_altgr[] =
{
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0
};

/*****************************************************************************/
/* italy */

/* non shift chars */
char it_noshift[] =
{
  0,    0,   '1',  '2',  '3',  '4',  '5',  '6',
 '7',  '8',  '9',  '0',  '\'', 0xec,  0,    0,
 'q',  'w',  'e',  'r',  't',  'y',  'u',  'i',
 'o',  'p',  0xe8, '+',   0,    0,   'a',  's',
 'd',  'f',  'g',  'h',  'j',  'k',  'l',  0xf2,
 0xe0, '\\',  0,   0xf9, 'z',  'x',  'c',  'v',
 'b',  'n',  'm',  ',',  '.',  '-',   0,   '*',
  0,   ' ',   0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,   '7',
 '8',  '9',  '-',  '4',  '5',  '6',  '+',  '1',
 '2',  '3',  '0',  '.',   0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0
};

/* shift chars */
char it_shift[] =
{
  0,    0,   '!',  '"',  0xa3, '$',  '%',  '&',
 '/',  '(',  ')',  '=',  '?',  '^',   0,    0,
 'Q',  'W',  'E',  'R',  'T',  'Y',  'U',  'I',
 'O',  'P',  0xe9, '*',   0,    0,   'A',  'S',
 'D',  'F',  'G',  'H',  'J',  'K',  'L',  0xe7,
 0xb0, '|',   0,   0xa7, 'Z',  'X',  'C',  'V',
 'B',  'N',  'M',  ';',  ':',  '_',   0,   '*',
  0,   ' ',   0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,   '7',
 '8',  '9',  '-',  '4',  '5',  '6',  '+',  '1',
 '2',  '3',  '0',  '.',   0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0
};

/* right alt chars */
char it_altgr[] =
{
  0,    0,    0,    0,    0,    0,   0x80,  0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,   0x80,  0,    0,    0,    0,    0,
  0,    0,   '[',  ']',   0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,   '@',
 '#',   0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0
};

/*****************************************************************************/
/* Portuguese (Brazil) */

/* non shift chars */
char pt_br_noshift[] =
{
  0,    0,   '1',  '2',  '3',  '4',  '5',  '6',
 '7',  '8',  '9',  '0',  '-',  '=',   0,    0,
 'q',  'w',  'e',  'r',  't',  'y',  'u',  'i',
 'o',  'p',  0xb4, '[',   0,    0,   'a',  's',
 'd',  'f',  'g',  'h',  'j',  'k',  'l',  0xe7,
 '~',  '`',   0,   ']',  'z',  'x',  'c',  'v',
 'b',  'n',  'm',  ',',  '.',  ';',   0,   '*',
  0,   ' ',   0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,   '7',
 '8',  '9',  '-',  '4',  '5',  '6',  '+',  '1',
 '2',  '3',  '0',  '.',   0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0
};

/* shift chars */
char pt_br_shift[] =
{
  0,    0,   '!',  '@',  '#',  '$',  '%',  0xa8,
 '&',  '*',  '(',  ')',  '_',  '+',   0,    0,
 'Q',  'W',  'E',  'R',  'T',  'Y',  'U',  'I',
 'O',  'P',  '`',  '{',   0,    0,   'A',  'S',
 'D',  'F',  'G',  'H',  'J',  'K',  'L',  0xc7,
 '^',  '"',   0,   '}',  'Z',  'X',  'C',  'V',
 'B',  'N',  'M',  '<',  '>',  ':',   0,   '*',
  0,   ' ',   0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,   '7',
 '8',  '9',  '-',  '4',  '5',  '6',  '+',  '1',
 '2',  '3',  '0',  '.',   0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0
};

/* right alt chars */
char pt_br_altgr[] =
{
  0,    0,   0xb9, 0xb2, 0xb3, 0xa3, 0xa2, 0xac,
  0,    0,    0,    0,    0,   0xa7,  0,    0,
 '/',  '?',  0xb0,  0,    0,    0,    0,    0,
  0,    0,    0,   0xaa,  0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,   0xba,  0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0
};

/*****************************************************************************/
/* uk english */

/* non shift chars */
char en_uk_noshift[] =
{
  0,    0,   '1',  '2',  '3',  '4',  '5',  '6',
 '7',  '8',  '9',  '0',  '-',  '=',   0,    0,
 'q',  'w',  'e',  'r',  't',  'y',  'u',  'i',
 'o',  'p',  '[',  ']',   0,    0,   'a',  's',
 'd',  'f',  'g',  'h',  'j',  'k',  'l',  ';',
 '\'', '`',   0,   '#',  'z',  'x',  'c',  'v',
 'b',  'n',  'm',  ',',  '.',  '/',   0,   '*',
  0,   ' ',   0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,   '7',
 '8',  '9',  '-',  '4',  '5',  '6',  '+',  '1',
 '2',  '3',  '0',  '.',   0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0
};

/* shift chars */
char en_uk_shift[] =
{
  0,    0,   '!',  '"',  0xa3, '$',  '%',  '^',
 '&',  '*',  '(',  ')',  '_',  '+',   0,    0,
 'Q',  'W',  'E',  'R',  'T',  'Y',  'U',  'I',
 'O',  'P',  '{',  '}',   0,    0,   'A',  'S',
 'D',  'F',  'G',  'H',  'J',  'K',  'L',  ':',
 '@',  0xac,  0,   '~',  'Z',  'X',  'C',  'V',
 'B',  'N',  'M',  '<',  '>',  '?',   0,   '*',
  0,   ' ',   0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,   '7',
 '8',  '9',  '-',  '4',  '5',  '6',  '+',  '1',
 '2',  '3',  '0',  '.',   0,    0,   0xa6,  0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0
};

/* right alt chars */
char en_uk_altgr[] =
{
  0,    0,    0,    0,    0,   0x80,  0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,   0xe9,  0,    0,    0,   0xfa, 0xed,
 0xf3,  0,    0,    0,    0,    0,   0xe1,  0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,   0xa6,  0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,   0xa6,  0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0
};

/*****************************************************************************/
/* german */

/* non shift chars */
char de_noshift[] =
{
  0,    0,   '1',  '2',  '3',  '4',  '5',  '6',
 '7',  '8',  '9',  '0',  0xdf, 0xb4,  0,    0,
 'q',  'w',  'e',  'r',  't',  'z',  'u',  'i',
 'o',  'p',  0xfc, '+',   0,    0,   'a',  's',
 'd',  'f',  'g',  'h',  'j',  'k',  'l',  0xf6,
 0xe4, '^',   0,   '#',  'y',  'x',  'c',  'v',
 'b',  'n',  'm',  ',',  '.',  '-',   0,   '*',
  0,   ' ',   0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,   '7',
 '8',  '9',  '-',  '4',  '5',  '6',  '+',  '1',
 '2',  '3',  '0',  '.',   0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0
};

/* shift chars */
char de_shift[] =
{
  0,    0,   '!',  '"',  0xa7, '$',  '%',  '&',
 '/',  '(',  ')',  '=',  '?',  '`',   0,    0,
 'Q',  'W',  'E',  'R',  'T',  'Z',  'U',  'I',
 'O',  'P',  0xdc, '*',   0,    0,   'A',  'S',
 'D',  'F',  'G',  'H',  'J',  'K',  'L',  0xd6,
 0xc4, 0xb0,  0,   '\'', 'Y',  'X',  'C',  'V',
 'B',  'N',  'M',  ';',  ':',  '_',   0,   '*',
  0,   ' ',   0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,   '7',
 '8',  '9',  '-',  '4',  '5',  '6',  '+',  '1',
 '2',  '3',  '0',  '.',   0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0
};

/* right alt chars */
char de_altgr[] =
{
  0,    0,    0,   0xb2, 0xb3,  0,    0,    0,
 '{',  '[',  ']',  '}',  '\\',  0,    0,    0,
 '@',   0,   0x80,  0,    0,    0,    0,    0,
  0,    0,    0,   '~',   0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,   0xb5,  0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0
};

/*****************************************************************************/
/* french */

/* non shift chars */
char fr_noshift[] =
{
  0,    0,   '&',  0xe9, '"',  '\'', '(',  '-',
 0xe8, '_',  0xe7, 0xe0, ')',  '=',   0,    0,
 'a',  'z',  'e',  'r',  't',  'y',  'u',  'i',
 'o',  'p',  '^',  '$',   0,    0,   'q',  's',
 'd',  'f',  'g',  'h',  'j',  'k',  'l',  'm',
 0xf9, 0xb2,  0,   '*',  'w',  'x',  'c',  'v',
 'b',  'n',  ',',  ';',  ':',  '!',   0,   '*',
  0,   ' ',   0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,   '7',
 '8',  '9',  '-',  '4',  '5',  '6',  '+',  '1',
 '2',  '3',  '0',  '.',   0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0
};

/* shift chars */
char fr_shift[] =
{
  0,    0,   '1',  '2',  '3',  '4',  '5',  '6',
 '7',  '8',  '9',  '0',  0xb0, '+',   0,    0,
 'A',  'Z',  'E',  'R',  'T',  'Y',  'U',  'I',
 'O',  'P',  0xa8, 0xa3,  0,    0,   'Q',  'S',
 'D',  'F',  'G',  'H',  'J',  'K',  'L',  'M',
 '%',  '~',   0,   0xb5, 'W',  'X',  'C',  'V',
 'B',  'N',  '?',  '.',  '/',  0xa7,  0,   '*',
  0,   ' ',   0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,   '7',
 '8',  '9',  '-',  '4',  '5',  '6',  '+',  '1',
 '2',  '3',  '0',  '.',   0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0
};

/* right alt chars */
char fr_altgr[] =
{
  0,    0,    0,   '~',  '#',  '{',  '[',  '|',
 '`',  '\\', '^',  '@',  ']',  '}',   0,    0,
  0,    0,   0x80,  0,    0,    0,    0,    0,
  0,    0,    0,   0xa4,  0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0,
  0,    0,    0,    0,    0,    0,    0,    0
};

/*****************************************************************************/
char APP_CC
get_char_from_scan_code(int device_flags, int scan_code, int* keys,
                        int caps_lock, int num_lock, int scroll_lock,
                        int keylayout)
{
  char rv;
  char* keys_noshift;
  char* keys_shift;
  char* keys_altgr;
  int shift;
  int altgr;
  int ext;

  if (keylayout == 0x40c) /* france */
  {
    keys_noshift = fr_noshift;
    keys_shift = fr_shift;
    keys_altgr = fr_altgr;
  }
  else if (keylayout == 0x809) /* en-uk or en-gb */
  {
    keys_noshift = en_uk_noshift;
    keys_shift = en_uk_shift;
    keys_altgr = en_uk_altgr;
  }
  else if (keylayout == 0x407) /* german */
  {
    keys_noshift = de_noshift;
    keys_shift = de_shift;
    keys_altgr = de_altgr;
  }
  else if (keylayout == 0x416) /* Portuguese (Brazil) */
  {
    keys_noshift = pt_br_noshift;
    keys_shift = pt_br_shift;
    keys_altgr = pt_br_altgr;
  }
  else if (keylayout == 0x410) /* italy */
  {
    keys_noshift = it_noshift;
    keys_shift = it_shift;
    keys_altgr = it_altgr;
  }
  else /* english us 0x409 */
  {
    keys_noshift = en_us_noshift;
    keys_shift = en_us_shift;
    keys_altgr = en_us_altgr;
  }
  /*g_writeln("%d %d %x", scan_code, device_flags, keylayout);*/
  shift = keys[42] || keys[54];
  altgr = keys[56]; /* right alt */
  ext = device_flags & 0x0100;
  rv = 0;
  if (scan_code >= 128)
  {
    scan_code = scan_code % 128;
    num_lock = 0;
  }
  if (!num_lock)
  {
    switch (scan_code)
    {
      case 71: /* 7 */
      case 72: /* 8 */
      case 73: /* 9 */
      case 75: /* 4 */
      case 76: /* 5 */
      case 77: /* 6 */
      case 79: /* 1 */
      case 80: /* 2 */
      case 81: /* 3 */
      case 82: /* 0 */
      case 83: /* . */
        return rv;
    }
  }
  if (ext)
  {
    if (scan_code == 53)
    {
      rv = '/';
    }
  }
  else
  {
    if (shift)
    {
      rv = keys_shift[scan_code];
    }
    else
    {
      if (altgr)
      {
        rv = keys_altgr[scan_code];
      }
      else
      {
        rv = keys_noshift[scan_code];
      }
    }
    if (rv >= 'a' && rv <= 'z' && caps_lock)
    {
      rv = rv - ('a' - 'A');
    }
    else if (rv >= 'A' && rv <= 'Z' && caps_lock)
    {
      rv = rv + ('a' - 'A');
    }
  }
  return rv;
}
