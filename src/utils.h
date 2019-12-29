/******************************************************************************
 * Copyright (c) Huawei Technologies Co., Ltd. 2019. All rights reserved.
 * clibcni licensed under the Mulan PSL v1.
 * You can use this software according to the terms and conditions of the Mulan PSL v1.
 * You may obtain a copy of Mulan PSL v1 at:
 *     http://license.coscl.org.cn/MulanPSL
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND, EITHER EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT, MERCHANTABILITY OR FIT FOR A PARTICULAR
 * PURPOSE.
 * See the Mulan PSL v1 for more details.
 * Author: tanyifeng
 * Create: 2019-04-25
 * Description: provide util function definition
 *********************************************************************************/
#ifndef CLIBCNI_INVOKE_UTILS_H
#define CLIBCNI_INVOKE_UTILS_H

#include <unistd.h>
#include <string.h>
#include <inttypes.h>
#include <stdbool.h>

#define BUFFER_SIZE 4096
#define MB (1 * 1024 * 1024)

#define NUMSTRLEN64_MAXLEN 21

#define DEFAULT_SECURE_DIRECTORY_MODE 0750

#if __WORDSIZE == 64
/* current max user memory for 64-machine is 2^47 B */
#define MAX_MEMORY_SIZE ((size_t)1 << 47)
#else
/* current max user memory for 32-machine is 2^31 B */
#define MAX_MEMORY_SIZE ((size_t)1 << 31)
#endif

bool is_null_or_empty(const char *str);

size_t util_array_len(const char * const *array);

void util_free_array(char **array);

void *util_smart_calloc_s(size_t count, size_t unit_size);

void *util_common_calloc_s(size_t size);

ssize_t util_write_nointr(int fd, const void *buf, size_t count);

ssize_t util_read_nointr(int fd, void *buf, size_t count);

char *cni_util_string_join(const char *sep, const char * const *parts, size_t len);

char *util_uint8_join(const char *sep, const char *type, const uint8_t *parts, size_t len);

int util_safe_uint(const char *numstr, unsigned int *converted);

bool util_dir_exists(const char *path);

int util_grow_array(char ***orig_array, size_t *orig_capacity, size_t size, size_t increment);

char *util_strdup_s(const char *src);

int util_validate_absolute_path(const char *path);

int util_validate_name(const char *name);

int util_open(const char *filename, unsigned int flags, mode_t mode);

int util_build_dir(const char *name);

#endif
