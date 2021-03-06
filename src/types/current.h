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
 * Description: provide result function definition
 ********************************************************************************/
#ifndef CLIBCNI_TYPES_CURRENT_H
#define CLIBCNI_TYPES_CURRENT_H

#include "types.h"
#include "result_curr.h"

#define curr_implemented_spec_version "0.3.1"

struct result *new_curr_result(const char *json_data, char **err);

result_curr *result_curr_to_json_result(const struct result *src, char **err);

#endif
