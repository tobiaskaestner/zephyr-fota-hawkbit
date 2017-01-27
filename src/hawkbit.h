/*
 * Copyright (c) 2016 Linaro Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#define HAWKBIT_HOST	"gitci.com:8080"
#define HAWKBIT_IPADDR	"fc00::d4e7:0:0:1"
#define HAWKBIT_PORT	8888
#define HAWKBIT_JSON_URL "/DEFAULT/controller/v1"

extern int poll_sleep;

/* TODO: Use the proper reboot Zephyr API instead (enabled via Kconfig) */
extern void sys_arch_reboot(int type);
int hawkbit_ddi_poll(void);
