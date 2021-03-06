#include "program/errors.h"

#define STB_IMAGE_IMPLEMENTATION
#define STBI_ASSERT(expr) ASSERT(expr, "In STB Image: " #expr)
#include <stb_image.h>

#define STB_IMAGE_WRITE_IMPLEMENTATION
#define STBIW_ASSERT(expr) ASSERT(expr, "In STB Image Write: " #expr)
#include <stb_image_write.h>

#define STB_RECT_PACK_IMPLEMENTATION
#define STBRP_ASSERT(expr) ASSERT(expr, "In STB Rect Pack: " #expr)
#include <stb_rect_pack.h>
