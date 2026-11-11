#pragma once

#include "uhf_types.h"

#include <stdbool.h>
#include <stddef.h>

bool uhf_tag_epc_hex_to_ascii(const char* epc_hex, char* out, size_t out_size);
bool uhf_tag_ascii_to_epc_hex(const char* ascii, char* out, size_t out_size);
/* Zero is a TID-only tag. Other lengths are whole words from 4 through 48 bytes. */
bool uhf_tag_epc_length_ok(size_t epc_len);
const char* uhf_tag_bank_name(UhfTagBank bank);
const char* uhf_tag_bank_button_name(UhfTagBank bank);
