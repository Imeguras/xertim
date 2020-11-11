#ifndef GRAPDEC_IMPLEMENTED
#define GRAPDEC_IMPLEMENTED
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <stdarg.h>
#include <stdbool.h>
#include <X11/Xlib.h>
#include "gfx.h"
#include <png.h>
//uint8_t **(*EscreveNoEcra)(uint8_t **matrix, int32_t width, int32_t height);
png_bytepp JanelaEescreve(png_bytepp matrix, uint32_t width, uint32_t height, const int8_t *title);
#endif