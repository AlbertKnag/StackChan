/*
 * SPDX-FileCopyrightText: 2026 M5Stack Technology CO LTD
 *
 * SPDX-License-Identifier: MIT
 */
#pragma once
#include <lvgl.h>
#include <string_view>

LV_FONT_DECLARE(MontserratSemiBold26);

extern const char ogg_camera_shutter_start[] asm("_binary_camera_shutter_ogg_start");
extern const char ogg_camera_shutter_end[] asm("_binary_camera_shutter_ogg_end");
static const std::string_view OGG_CAMERA_SHUTTER{
    static_cast<const char*>(ogg_camera_shutter_start),
    static_cast<size_t>(ogg_camera_shutter_end - ogg_camera_shutter_start)};

extern const char ogg_new_notification_start[] asm("_binary_new_notification_ogg_start");
extern const char ogg_new_notification_end[] asm("_binary_new_notification_ogg_end");
static const std::string_view OGG_NEW_NOTIFICATION{
    static_cast<const char*>(ogg_new_notification_start),
    static_cast<size_t>(ogg_new_notification_end - ogg_new_notification_start)};

extern const char ogg_head_pet_comfort_start[] asm("_binary_head_pet_comfort_ogg_start");
extern const char ogg_head_pet_comfort_end[] asm("_binary_head_pet_comfort_ogg_end");
static const std::string_view OGG_HEAD_PET_COMFORT{
    static_cast<const char*>(ogg_head_pet_comfort_start),
    static_cast<size_t>(ogg_head_pet_comfort_end - ogg_head_pet_comfort_start)};

extern const char ogg_head_pet_prompt_start[] asm("_binary_head_pet_prompt_ogg_start");
extern const char ogg_head_pet_prompt_end[] asm("_binary_head_pet_prompt_ogg_end");
static const std::string_view OGG_HEAD_PET_PROMPT{
    static_cast<const char*>(ogg_head_pet_prompt_start),
    static_cast<size_t>(ogg_head_pet_prompt_end - ogg_head_pet_prompt_start)};

extern const char ogg_shake_prompt_start[] asm("_binary_shake_prompt_ogg_start");
extern const char ogg_shake_prompt_end[] asm("_binary_shake_prompt_ogg_end");
static const std::string_view OGG_SHAKE_PROMPT{
    static_cast<const char*>(ogg_shake_prompt_start),
    static_cast<size_t>(ogg_shake_prompt_end - ogg_shake_prompt_start)};

namespace assets {

lv_image_dsc_t get_image(std::string_view name);

}  // namespace assets
