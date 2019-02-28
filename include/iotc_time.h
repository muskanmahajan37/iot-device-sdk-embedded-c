/* Copyright 2018-2019 Google LLC
 *
 * This is part of the Google Cloud IoT Device SDK for Embedded C.
 * It is licensed under the BSD 3-Clause license; you may not use this file
 * except in compliance with the License.
 *
 * You may obtain a copy of the License at:
 *  https://opensource.org/licenses/BSD-3-Clause
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __IOTC_TIME_H__
#define __IOTC_TIME_H__

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @name iotc_time_t
 * @brief Time storage type.
 *
 * Provide a consistent time type. Use a 64-bit time type whenever possible to
 * prevent timer rollovers.
 */
typedef long iotc_time_t;

#ifdef __cplusplus
}
#endif

#endif /* __IOTC_TIME_H__ */
