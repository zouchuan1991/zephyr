/*
 * Copyright (c) 2018 Intel Corporation Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/* SoC level DTS fixup file */

#define DT_PHYS_RAM_ADDR                    CONFIG_SRAM_BASE_ADDRESS

#define DT_PHYS_LOAD_ADDR                   CONFIG_FLASH_BASE_ADDRESS

#define DT_RAM_SIZE                         CONFIG_SRAM_SIZE

#define DT_ROM_SIZE                         CONFIG_FLASH_SIZE

#define DT_IOAPIC_BASE_ADDRESS              DT_INTEL_IOAPIC_FEC00000_BASE_ADDRESS

#define DT_APL_GPIO_BASE_ADDRESS_0          DT_INTEL_APL_GPIO_D0C50000_BASE_ADDRESS_0
#define DT_APL_GPIO_BASE_ADDRESS_1          DT_INTEL_APL_GPIO_D0C50000_BASE_ADDRESS_1
#define DT_APL_GPIO_BASE_ADDRESS_2          DT_INTEL_APL_GPIO_D0C50000_BASE_ADDRESS_2
#define DT_APL_GPIO_BASE_ADDRESS_3          DT_INTEL_APL_GPIO_D0C50000_BASE_ADDRESS_3
#define DT_APL_GPIO_IRQ                     DT_INTEL_APL_GPIO_D0C50000_IRQ_0
#define DT_APL_GPIO_IRQ_PRIORITY            DT_INTEL_APL_GPIO_D0C50000_IRQ_0_PRIORITY
#define DT_APL_GPIO_IRQ_SENSE               DT_INTEL_APL_GPIO_D0C50000_IRQ_0_SENSE
#define DT_APL_GPIO_LABEL                   DT_INTEL_APL_GPIO_D0C50000_LABEL
#define DT_APL_GPIO_MEM_SIZE_0              DT_INTEL_APL_GPIO_D0C50000_SIZE_0
#define DT_APL_GPIO_MEM_SIZE_1              DT_INTEL_APL_GPIO_D0C50000_SIZE_1
#define DT_APL_GPIO_MEM_SIZE_2              DT_INTEL_APL_GPIO_D0C50000_SIZE_2
#define DT_APL_GPIO_MEM_SIZE_3              DT_oINTEL_APL_GPIO_D0C50000_SIZE_3

/* End of SoC Level DTS fixup file */