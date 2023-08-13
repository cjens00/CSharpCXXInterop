#ifndef demolib_h
#define demolib_h

#ifdef __cplusplus
extern "C"
{
#endif
#ifdef _WIN32
#ifdef MODULE_API_EXPORTS
#define MODULE_API __declspec(dllexport)
#else
#define MODULE_API __declspec(dllimport)
#endif
#else
#define MODULE_API
#endif
    MODULE_API int add_two_numbers(int, int);
#ifdef __cplusplus
}
#endif
#endif