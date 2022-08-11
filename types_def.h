/*
 * File      : types_def.h
 * This file is type def header  
 *
 * Change Logs:
 * Date           Author       Notes
 * 2019-1-12     fengyong    first version
 * 2020-4-11     fengyong    second version    
 */

#ifndef _TYPES_DEF_H
#define _TYPES_DEF_H

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <wchar.h>
#include <errno.h>
#include <assert.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <fcntl.h>
#include <sys/select.h>
#include <sys/time.h>
#include <sys/types.h>

#ifndef _INT8_T_DECLARED
typedef __int8_t int8_t;
#define _INT8_T_DECLARED
#endif
#ifndef _UINT8_T_DECLARED
typedef __uint8_t uint8_t;
#define _UINT8_T_DECLARED
#endif

#ifndef _INT16_T_DECLARED
typedef __int16_t int16_t;
#define _INT16_T_DECLARED
#endif
#ifndef _UINT16_T_DECLARED
typedef __uint16_t uint16_t;
#define _UINT16_T_DECLARED
#endif

#ifndef _INT32_T_DECLARED
typedef __int32_t int32_t;
#define _INT32_T_DECLARED
#endif
#ifndef _UINT32_T_DECLARED
typedef __uint32_t uint32_t;
#define _UINT32_T_DECLARED
#endif

/**
 * @enum ret_t 
 */
typedef enum _ret_t {
  /**
   * @const RET_EOK
   * success
   */
  RET_EOK = 0,
  /**
   * @const RET_ERROR
   * generic error
   */
  RET_ERROR,
  /**
   * @const RET_EINVAL
   * Invalid argument
   */
  RET_EINVAL,
  /**
   * @const RET_ENOMEM
   * No memory
   */
  RET_ENOMEM,
  /**
   * @const RET_EIO
   * IO error(ioctl)
   */  
  RET_EIO, 
  /**
   * @const RET_ETIMEOUT
   * Timed out
   */  
  RET_ETIMEOUT, 
  /**
   * @const RET_EFULL
   * resource is full
   */
  RET_EFULL,
  /**
   * @const RET_EEMPTY
   * resource is empty
   */
  RET_EEMPTY, 
  /**
   * @const RET_BUSY
   * busy
   */
  RET_EBUSY,
  /**
   * @const RET_EFAIL
   * busy
   */
  RET_EFAIL,
} ret_t;

#if 0
#define log_debug(format, args...) \
  if (log_get_log_level() <= LOG_LEVEL_DEBUG) printf(format, ##args)
#define log_info(format, args...) \
  if (log_get_log_level() <= LOG_LEVEL_INFO) printf(format, ##args)
#define log_warn(format, args...) \
  if (log_get_log_level() <= LOG_LEVEL_WARN) printf(format, ##args)
#define log_error(format, args...) \
  if (log_get_log_level() <= LOG_LEVEL_ERROR) printf(format, ##args)
#else
#define log_warn(format, args...) printf(format, ##args) 
#endif

#define goto_error_if_fail(p)                           \
  if (!(p)) {                                           \
    log_warn("%s:%d " #p "\n", __FUNCTION__, __LINE__); \
    goto error;                                         \
  }

#define break_if_fail(p)                                \
  if (!(p)) {                                           \
    log_warn("%s:%d " #p "\n", __FUNCTION__, __LINE__); \
    break;                                              \
  }

#define return_if_fail(p)                               \
  if (!(p)) {                                           \
    log_warn("%s:%d " #p "\n", __FUNCTION__, __LINE__); \
    return;                                             \
  }

#define return_value_if_fail(p, value)                  \
  if (!(p)) {                                           \
    log_warn("%s:%d " #p "\n", __FUNCTION__, __LINE__); \
    return (value);                                     \
  }

#endif /* _TYPES_DEF_H */


