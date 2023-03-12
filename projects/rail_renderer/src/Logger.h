#ifndef __RAIL_LOGGER_H__
#define __RAIL_LOGGER_H__

#include <stdio.h>
#include <stdarg.h>

__declspec(dllexport) extern inline __stdcall void rail_vlog(char* color, char* format, va_list args)
{
  printf("%s", color);

  while(*format != '\0')
  {
    if (*format == '%' && *++format != '\0')
    {
      if (*format == 'd')
      {
        int i = va_arg(args, int);
        printf("%d", i);
      }
      else if (*format == 'c')
      {
        int c = va_arg(args, int);
        printf("%c", c);
      }
      else if (*format == 's')
      {
        char* str = va_arg(args, char*);
        printf("%s", str);
      }
      else if (*format == 'd')
      {
        double d = va_arg(args, double);
        printf("%f", d);
      }
    }
    else
    {
      printf("%c", *format);
    }
    ++format;
  }

  printf("\033[1;39;49m\n");
}

__declspec(dllexport) extern inline __stdcall void rail_log(char* color, char* format, ...)
{
  va_list args;
  va_start(args, format);

  rail_vlog(color, format, args);

  va_end(args);
}

__declspec(dllexport) extern inline __stdcall void rail_log_neutral(char* format, ...)
{
  va_list args;
  va_start(args, format);
  
  rail_vlog("\033[1;14;49m", format, args);

  va_end(args);
}

__declspec(dllexport) extern inline __stdcall void rail_log_debug(char* format, ...)
{
  va_list args;
  va_start(args, format);

  rail_vlog("\033[1;39;49m\033[38;5;14m", format, args);

  va_end(args);
}

__declspec(dllexport) extern inline __stdcall void rail_log_warn(char* format, ...)
{
  va_list args;
  va_start(args, format);

  rail_vlog("\033[1;39;49m\033[38;5;172m", format, args);

  va_end(args);
}

__declspec(dllexport) extern inline __stdcall void rail_log_error(char* format, ...)
{
  va_list args;
  va_start(args, format);

  rail_vlog("\033[1;39;49m\033[38;5;196m", format, args);

  va_end(args);
}
#endif // __RAIL_LOGGER_H__