
#ifndef __MODEL_H__
#define __MODEL_H__

#define __PREFIX(x) model ## x

#include "Gap.h"

#ifdef __EMUL__
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/param.h>
#include <string.h>
extern AT_HYPERFLASH_FS_EXT_ADDR_TYPE model_L3_Flash;
#endif

#if defined(USE_HYPER)
extern AT_HYPERFLASH_FS_EXT_ADDR_TYPE model_L3_Flash;
#elif defined(USE_SPI)
extern AT_QSPIFLASH_FS_EXT_ADDR_TYPE model_L3_Flash;
#endif


#endif
