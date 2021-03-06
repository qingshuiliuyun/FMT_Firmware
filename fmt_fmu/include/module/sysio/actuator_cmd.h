/******************************************************************************
 * Copyright 2020 The Firmament Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#ifndef __ACTUATOR_CMD_H__
#define __ACTUATOR_CMD_H__

#include <firmament.h>

fmt_err send_actuator_cmd(void);
fmt_err send_hil_actuator_cmd(void);
fmt_err actuator_init(const char* device_name);
fmt_err actuator_deinit(void);

#endif