# Copyright 2014 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

TARGET_KERNEL_CONFIG := aosp_shinano_scorpion_defconfig

$(call inherit-product, $(SRC_TARGET_DIR)/product/telephony.mk)
$(call inherit-product, device/sony/scorpion/aosp_sgp621_common.mk)

# Device Init
PRODUCT_PACKAGES += \
    init.recovery.scorpion \
    init.scorpion \
    ueventd.scorpion

# Lights
PRODUCT_PACKAGES += \
    lights.scorpion

# Simple PowerHAL
PRODUCT_PACKAGES += \
    power.scorpion

# NFC config
PRODUCT_PACKAGES += \
    nfc_nci.scorpion

PRODUCT_NAME := aosp_sgp621
PRODUCT_DEVICE := scorpion
PRODUCT_MODEL := Xperia Z3 Tablet Compact(AOSP)
PRODUCT_BRAND := Sony
PRODUCT_MANUFACTURER := Sony
