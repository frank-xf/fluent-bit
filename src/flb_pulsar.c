/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

/*  Fluent Bit
 *  ==========
 *  Copyright (C) 2019-2021 The Fluent Bit Authors
 *  Copyright (C) 2015-2018 Treasure Data Inc.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#include "fluent-bit/flb_config.h"
#include "fluent-bit/flb_mem.h"
#include "fluent-bit/flb_str.h"
#include "fluent-bit/flb_utils.h"
#include "monkey/mk_core/mk_list.h"
#include <fluent-bit/flb_kv.h>
#include <fluent-bit/flb_pulsar.h>


pulsar_client_t * flb_pulsar_create_client(const char* url, const char* token) {
    pulsar_client_configuration_t *conf = pulsar_client_configuration_create();
    return pulsar_client_create(url, conf);
}
