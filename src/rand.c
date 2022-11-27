/*
 *  Copyright 2014-2022 The GmSSL Project. All Rights Reserved.
 *
 *  Licensed under the Apache License, Version 2.0 (the License); you may
 *  not use this file except in compliance with the License.
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 */



#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <gmssl/rand.h>
#include <gmssl/error.h>

#define RAND_MAX_BUF_SIZE 4096

int rand_bytes(uint8_t *buf, size_t len)
{
    time_t t;
    srand((unsigned)time(&t));

    for(size_t i = 0; i < len; i++)
    {
        buf[i] = rand();
    }

	return 1;
}
