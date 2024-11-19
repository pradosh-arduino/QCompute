#include <memory.h>
#include <limine.h>
#include "../src/flanterm/flanterm.h"
#include "../src/flanterm/backends/fb.h"
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

extern struct limine_framebuffer* framebuffer;
extern struct flanterm_context* ft_ctx;