#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <limine.h>

/**
 * @brief 
 * 
 * @param dest 
 * @param src 
 * @param n 
 * @return void* 
 */
void *memcpy(void *dest, const void *src, size_t n);

/**
 * @brief 
 * 
 * @param s 
 * @param c 
 * @param n 
 * @return void* 
 */
void *memset(void *s, int c, size_t n);

/**
 * @brief 
 * 
 * @param dest 
 * @param src 
 * @param n 
 * @return void* 
 */
void *memmove(void *dest, const void *src, size_t n);

/**
 * @brief 
 * 
 * @param s1 
 * @param s2 
 * @param n 
 * @return int 
 */
int memcmp(const void *s1, const void *s2, size_t n);