/**
 * @file fft.c
 * @author Jared McArthur
 * @brief Implementation of the abstracted out fast fourier transform functions
 * from the stm32 assembly files
 * @version 0.1
 * @date 2022-10-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "fft.h"

/**
 * Extern the relevant stm32 fft functions
 * Files that need to be included in the project:
 *  inc/cr4_fft_64_stm32.s
 *  inc/cr4_fft_256_stm32.s
 *  inc/cr4_fft_1024_stm32.s
 */

extern void cr4_fft_64_stm32(uint16_t in[], uint16_t out[], uint16_t n);
extern void cr4_fft_256_stm32(uint16_t in[], uint16_t out[], uint16_t n);
extern void cr4_fft_1024_stm32(uint16_t in[], uint16_t out[], uint16_t n);

void fft_64(uint16_t in[], uint16_t out[]) {
    cr4_fft_64_stm32(in, out, 64);
}

void fft_256(uint16_t in[], uint16_t out[]) {
    cr4_fft_64_stm32(in, out, 256);
}

void fft_1024(uint16_t in[], uint16_t out[]) {
    cr4_fft_64_stm32(in, out, 1024);
}
