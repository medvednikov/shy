// Keep Shy allocator entry points distinct from the standard stbi module.
#define stbi__callback_malloc shy__wraps__stbi__cb_malloc
#define stbi__callback_realloc shy__wraps__stbi__cb_realloc
#define stbi__callback_free shy__wraps__stbi__cb_free
#include "../../thirdparty/stb/stbi.c"
