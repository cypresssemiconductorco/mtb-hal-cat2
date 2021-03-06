/***************************************************************************//**
* \file cyhal_hw_resources.h
*
* \brief
* Provides struct definitions for configuration resources in the PDL.
*
********************************************************************************
* \copyright
* Copyright 2018-2021 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
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
*******************************************************************************/

/**
* \addtogroup group_hal_impl_hw_types
* \ingroup group_hal_impl
* \{
*/

#pragma once

#include "cy_pdl.h"

#ifdef __cplusplus
extern "C" {
#endif

// Documented in cyhal.h
#define CYHAL_DRIVER_AVAILABLE_ADC          (CY_IP_M0S8PASS4A_INSTANCES)
#define CYHAL_DRIVER_AVAILABLE_CLOCK        (1)
#define CYHAL_DRIVER_AVAILABLE_COMP         (0) /* Not yet supported */
#define CYHAL_DRIVER_AVAILABLE_CRC          (0) /* Not yet supported */
#define CYHAL_DRIVER_AVAILABLE_DAC          (0)
#define CYHAL_DRIVER_AVAILABLE_DMA          (CY_IP_M0S8CPUSSV3_DMAC)
#define CYHAL_DRIVER_AVAILABLE_EZI2C        (CY_IP_MXSCB || CY_IP_M0S8SCB)
#define CYHAL_DRIVER_AVAILABLE_FLASH        (1)
#define CYHAL_DRIVER_AVAILABLE_GPIO         (1)
#define CYHAL_DRIVER_AVAILABLE_HWMGR        (1)
#define CYHAL_DRIVER_AVAILABLE_I2C          (CY_IP_MXSCB || CY_IP_M0S8SCB)
#define CYHAL_DRIVER_AVAILABLE_I2S          (0) /* Not yet supported */
#define CYHAL_DRIVER_AVAILABLE_INTERCONNECT (CY_IP_M0S8PERI_TR)
#define CYHAL_DRIVER_AVAILABLE_KEYSCAN      (0)
#define CYHAL_DRIVER_AVAILABLE_LPTIMER      (CY_IP_M0S8WCO && WCO_WDT_EN)
#define CYHAL_DRIVER_AVAILABLE_OPAMP        (0) /* Not yet supported */
#define CYHAL_DRIVER_AVAILABLE_PDMPCM       (0)
#define CYHAL_DRIVER_AVAILABLE_PWM          (CY_IP_M0S8TCPWM)
#define CYHAL_DRIVER_AVAILABLE_QSPI         (0)
#define CYHAL_DRIVER_AVAILABLE_QUADDEC      (CY_IP_M0S8TCPWM)
#define CYHAL_DRIVER_AVAILABLE_RTC          (0)
#define CYHAL_DRIVER_AVAILABLE_SDHC         (0)
#define CYHAL_DRIVER_AVAILABLE_SDIO         (0)
#define CYHAL_DRIVER_AVAILABLE_SPI          (CY_IP_MXSCB || CY_IP_M0S8SCB)
#define CYHAL_DRIVER_AVAILABLE_SYSPM        (1)
#define CYHAL_DRIVER_AVAILABLE_SYSTEM       (1)
#define CYHAL_DRIVER_AVAILABLE_TDM          (0)
#define CYHAL_DRIVER_AVAILABLE_TIMER        (CY_IP_M0S8TCPWM)
#define CYHAL_DRIVER_AVAILABLE_TRNG         (0) /* Not yet supported */
#define CYHAL_DRIVER_AVAILABLE_UART         (CY_IP_MXSCB || CY_IP_M0S8SCB)
#define CYHAL_DRIVER_AVAILABLE_USB_DEV      (0)
#define CYHAL_DRIVER_AVAILABLE_WDT          (1)


/* NOTE: Any changes made to this enum must also be made to the hardware manager resource tracking */
/** Resource types that the hardware manager supports */
typedef enum
{
    CYHAL_RSC_ADC,       /*!< Analog to digital converter */
    CYHAL_RSC_CAN,       /*!< CAN communication block */
    CYHAL_RSC_CLOCK,     /*!< Clock */
    CYHAL_RSC_CRYPTO,    /*!< Crypto hardware accelerator */
    CYHAL_RSC_DMA,       /*!< DMA controller */
    CYHAL_RSC_GPIO,      /*!< General purpose I/O pin */
    CYHAL_RSC_I2S,       /*!< I2S communications block */
    CYHAL_RSC_LCD,       /*!< Segment LCD controller */
    CYHAL_RSC_LPCOMP,    /*!< Low power comparator */
    CYHAL_RSC_LPTIMER,   /*!< Low power timer */
    CYHAL_RSC_OPAMP,     /*!< Opamp */
    CYHAL_RSC_SCB,       /*!< Serial Communications Block */
    CYHAL_RSC_TCPWM,     /*!< Timer/Counter/PWM block */
    CYHAL_RSC_USB,       /*!< USB Full Speed Device block */
    CYHAL_RSC_USBPD,     /*!< USB-C Power Delivery */
    CYHAL_RSC_INVALID,   /*!< Placeholder for invalid type */
} cyhal_resource_t;

/** \cond INTERNAL */
/* Extracts the divider from the Peri group block number */
#define _CYHAL_PERIPHERAL_GROUP_GET_DIVIDER_TYPE(block)     ((cy_en_divider_types_t)block)
#define _CYHAL_PERIPHERAL_GROUP_GET_GROUP(block)            (0)
/** \endcond */


/* NOTE: Any changes here must also be made in cyhal_hwmgr.c */
/** Enum for the different types of clocks that exist on the device. */
typedef enum
{
    // The first four items are here for backwards compatability with old clock APIs
    CYHAL_CLOCK_BLOCK_PERIPHERAL_8BIT = CY_SYSCLK_DIV_8_BIT,        /*!< 8bit Peripheral Divider */
    CYHAL_CLOCK_BLOCK_PERIPHERAL_16BIT = CY_SYSCLK_DIV_16_BIT,      /*!< 16bit Peripheral Divider */
    CYHAL_CLOCK_BLOCK_PERIPHERAL_16_5BIT = CY_SYSCLK_DIV_16_5_BIT,  /*!< 16.5bit Peripheral Divider */
    CYHAL_CLOCK_BLOCK_PERIPHERAL_24_5BIT = CY_SYSCLK_DIV_24_5_BIT,  /*!< 24.5bit Peripheral Divider */

    CYHAL_CLOCK_BLOCK_IMO,                                          /*!< Internal Main Oscillator Input Clock */
    CYHAL_CLOCK_BLOCK_ECO,                                          /*!< External Crystal Oscillator Input Clock */
    CYHAL_CLOCK_BLOCK_EXT,                                          /*!< External Input Clock */
    CYHAL_CLOCK_BLOCK_ILO,                                          /*!< Internal Low Speed Oscillator Input Clock */
    CYHAL_CLOCK_BLOCK_WCO,                                          /*!< Watch Crystal Oscillator Input Clock */

    CYHAL_CLOCK_BLOCK_WDCSEL,                                       /*!< Watch Dog Counter Select Mux */

    CYHAL_CLOCK_BLOCK_PLLSEL,                                       /*!< Phase-Locked Loop Select Mux */
    CYHAL_CLOCK_BLOCK_PLL,                                          /*!< Phase-Locked Loop Clock */

    CYHAL_CLOCK_BLOCK_LF,                                           /*!< Low Frequency Clock */
    CYHAL_CLOCK_BLOCK_HF,                                           /*!< High Frequency Clock */

    CYHAL_CLOCK_BLOCK_PUMP,                                         /*!< Analog Pump Clock */
    CYHAL_CLOCK_BLOCK_SYS,                                          /*!< System Clock */
} cyhal_clock_block_t;

/** @brief Clock object
  * Application code should not rely on the specific contents of this struct.
  * They are considered an implementation detail which is subject to change
  * between platforms and/or HAL releases. */
typedef struct
{
    cyhal_clock_block_t     block;    //!< The resource block type
    uint8_t                 channel;  //!< The resource instance number
    bool                    reserved; //!< Whether the clock is 'owned'
} cyhal_clock_t;

/**
  * @brief Represents a particular instance of a resource on the chip.
  * Application code should not rely on the specific contents of this struct.
  * They are considered an implementation detail which is subject to change
  * between platforms and/or HAL releases.
  */
typedef struct
{
    cyhal_resource_t type;      //!< The resource block type
    uint8_t          block_num; //!< The resource block index
    /**
      * The channel number, if the resource type defines multiple channels
      * per block instance. Otherwise, 0 */
    uint8_t          channel_num;
} cyhal_resource_inst_t;

#if defined(__cplusplus)
}
#endif /* __cplusplus */

/** \} group_hal_impl_hw_types */
