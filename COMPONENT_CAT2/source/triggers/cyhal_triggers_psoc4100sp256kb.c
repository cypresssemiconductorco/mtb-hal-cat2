/***************************************************************************//**
* \file cyhal_triggers_psoc4100sp256kb.c
*
* \brief
* PSoC4100Sp256KB family HAL triggers header
*
* \note
* Generator version: 1.6.0.379
*
********************************************************************************
* \copyright
* Copyright 2016-2020 Cypress Semiconductor Corporation
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

#include "cy_device_headers.h"
#include "cyhal_hw_types.h"

#ifdef CY_DEVICE_PSOC4AMC
#include "triggers/cyhal_triggers_psoc4100sp256kb.h"

const uint16_t cyhal_sources_per_mux[5] =
{
    55, 37, 39, 15, 39, 
};

const bool cyhal_is_mux_1to1[5] =
{
    false, false, false, false, false, 
};

const cyhal_source_t cyhal_mux0_sources[55] =
{
    CYHAL_TRIGGER_CPUSS_ZERO,
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW0,
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW1,
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW2,
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW3,
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW4,
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW5,
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW6,
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW7,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH0,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH1,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH2,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH3,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH4,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH5,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH6,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH7,
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW0,
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW1,
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW2,
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW3,
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW4,
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW5,
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW6,
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW7,
    CYHAL_TRIGGER_SCB0_TR_TX_REQ,
    CYHAL_TRIGGER_SCB0_TR_RX_REQ,
    CYHAL_TRIGGER_SCB1_TR_TX_REQ,
    CYHAL_TRIGGER_SCB1_TR_RX_REQ,
    CYHAL_TRIGGER_SCB2_TR_TX_REQ,
    CYHAL_TRIGGER_SCB2_TR_RX_REQ,
    CYHAL_TRIGGER_SCB3_TR_TX_REQ,
    CYHAL_TRIGGER_SCB3_TR_RX_REQ,
    CYHAL_TRIGGER_SCB4_TR_TX_REQ,
    CYHAL_TRIGGER_SCB4_TR_RX_REQ,
    CYHAL_TRIGGER_EXCO_TRIGGER,
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT0,
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT1,
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT2,
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT3,
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT4,
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT5,
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT6,
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT7,
    CYHAL_TRIGGER_PASS0_DSI_SAR_SAMPLE_DONE,
    CYHAL_TRIGGER_PASS0_TR_SAR_OUT,
    CYHAL_TRIGGER_CSD_TR_ADC_DONE,
    CYHAL_TRIGGER_PASS0_DSI_CTB_CMP0,
    CYHAL_TRIGGER_PASS0_DSI_CTB_CMP1,
    CYHAL_TRIGGER_PASS1_DSI_SAR_SAMPLE_DONE,
    CYHAL_TRIGGER_PASS1_TR_SAR_OUT,
    CYHAL_TRIGGER_PASS1_DSI_CTB_CMP0,
    CYHAL_TRIGGER_PASS1_DSI_CTB_CMP1,
    CYHAL_TRIGGER_LPCOMP_COMP_OUT0,
    CYHAL_TRIGGER_LPCOMP_COMP_OUT1,
};

const cyhal_source_t cyhal_mux1_sources[37] =
{
    CYHAL_TRIGGER_CPUSS_ZERO,
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW0,
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW1,
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW2,
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW3,
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW4,
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW5,
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW6,
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW7,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH0,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH1,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH2,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH3,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH4,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH5,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH6,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH7,
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW0,
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW1,
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW2,
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW3,
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW4,
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW5,
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW6,
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW7,
    CYHAL_TRIGGER_PASS0_DSI_SAR_SAMPLE_DONE,
    CYHAL_TRIGGER_PASS0_TR_SAR_OUT,
    CYHAL_TRIGGER_PASS0_DSI_CTB_CMP0,
    CYHAL_TRIGGER_PASS0_DSI_CTB_CMP1,
    CYHAL_TRIGGER_LPCOMP_COMP_OUT0,
    CYHAL_TRIGGER_LPCOMP_COMP_OUT1,
    CYHAL_TRIGGER_CSD_DSI_SENSE_OUT,
    CYHAL_TRIGGER_PASS1_DSI_SAR_SAMPLE_DONE,
    CYHAL_TRIGGER_PASS1_TR_SAR_OUT,
    CYHAL_TRIGGER_PASS1_DSI_CTB_CMP0,
    CYHAL_TRIGGER_PASS1_DSI_CTB_CMP1,
    CYHAL_TRIGGER_EXCO_TRIGGER,
};

const cyhal_source_t cyhal_mux2_sources[39] =
{
    CYHAL_TRIGGER_CPUSS_ZERO,
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW0,
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW1,
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW2,
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW3,
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW4,
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW5,
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW6,
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW7,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH0,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH1,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH2,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH3,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH4,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH5,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH6,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH7,
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW0,
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW1,
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW2,
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW3,
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW4,
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW5,
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW6,
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW7,
    CYHAL_TRIGGER_TCPWM_LINE0,
    CYHAL_TRIGGER_TCPWM_LINE1,
    CYHAL_TRIGGER_TCPWM_LINE2,
    CYHAL_TRIGGER_TCPWM_LINE3,
    CYHAL_TRIGGER_TCPWM_LINE4,
    CYHAL_TRIGGER_TCPWM_LINE5,
    CYHAL_TRIGGER_TCPWM_LINE6,
    CYHAL_TRIGGER_TCPWM_LINE7,
    CYHAL_TRIGGER_PASS0_DSI_SAR_SAMPLE_DONE,
    CYHAL_TRIGGER_PASS0_TR_SAR_OUT,
    CYHAL_TRIGGER_PASS0_DSI_CTB_CMP0,
    CYHAL_TRIGGER_PASS0_DSI_CTB_CMP1,
    CYHAL_TRIGGER_LPCOMP_COMP_OUT0,
    CYHAL_TRIGGER_LPCOMP_COMP_OUT1,
};

const cyhal_source_t cyhal_mux3_sources[15] =
{
    CYHAL_TRIGGER_CPUSS_ZERO,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH0,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH1,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH2,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH3,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH4,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH5,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH6,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH7,
    CYHAL_TRIGGER_PASS0_DSI_CTB_CMP0,
    CYHAL_TRIGGER_PASS0_DSI_CTB_CMP1,
    CYHAL_TRIGGER_LPCOMP_COMP_OUT0,
    CYHAL_TRIGGER_LPCOMP_COMP_OUT1,
    CYHAL_TRIGGER_PASS1_DSI_CTB_CMP0,
    CYHAL_TRIGGER_PASS1_DSI_CTB_CMP1,
};

const cyhal_source_t cyhal_mux4_sources[39] =
{
    CYHAL_TRIGGER_CPUSS_ZERO,
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW0,
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW1,
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW2,
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW3,
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW4,
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW5,
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW6,
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW7,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH0,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH1,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH2,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH3,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH4,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH5,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH6,
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH7,
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW0,
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW1,
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW2,
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW3,
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW4,
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW5,
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW6,
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW7,
    CYHAL_TRIGGER_TCPWM_LINE0,
    CYHAL_TRIGGER_TCPWM_LINE1,
    CYHAL_TRIGGER_TCPWM_LINE2,
    CYHAL_TRIGGER_TCPWM_LINE3,
    CYHAL_TRIGGER_TCPWM_LINE4,
    CYHAL_TRIGGER_TCPWM_LINE5,
    CYHAL_TRIGGER_TCPWM_LINE6,
    CYHAL_TRIGGER_TCPWM_LINE7,
    CYHAL_TRIGGER_PASS1_DSI_SAR_SAMPLE_DONE,
    CYHAL_TRIGGER_PASS1_TR_SAR_OUT,
    CYHAL_TRIGGER_PASS1_DSI_CTB_CMP0,
    CYHAL_TRIGGER_PASS1_DSI_CTB_CMP1,
    CYHAL_TRIGGER_LPCOMP_COMP_OUT0,
    CYHAL_TRIGGER_LPCOMP_COMP_OUT1,
};

const cyhal_source_t* cyhal_mux_to_sources[5] =
{
    cyhal_mux0_sources, 
    cyhal_mux1_sources, 
    cyhal_mux2_sources, 
    cyhal_mux3_sources, 
    cyhal_mux4_sources, 
};

const uint8_t cyhal_dest_to_mux[18] =
{
    0, /* CYHAL_TRIGGER_CPUSS_DMAC_TR_IN0 */
    0, /* CYHAL_TRIGGER_CPUSS_DMAC_TR_IN1 */
    0, /* CYHAL_TRIGGER_CPUSS_DMAC_TR_IN2 */
    0, /* CYHAL_TRIGGER_CPUSS_DMAC_TR_IN3 */
    0, /* CYHAL_TRIGGER_CPUSS_DMAC_TR_IN4 */
    0, /* CYHAL_TRIGGER_CPUSS_DMAC_TR_IN5 */
    0, /* CYHAL_TRIGGER_CPUSS_DMAC_TR_IN6 */
    0, /* CYHAL_TRIGGER_CPUSS_DMAC_TR_IN7 */
    3, /* CYHAL_TRIGGER_CSD_DSI_START */
    2, /* CYHAL_TRIGGER_PASS0_TR_SAR_IN */
    4, /* CYHAL_TRIGGER_PASS1_TR_SAR_IN */
    1, /* CYHAL_TRIGGER_TCPWM_TR_IN7 */
    1, /* CYHAL_TRIGGER_TCPWM_TR_IN8 */
    1, /* CYHAL_TRIGGER_TCPWM_TR_IN9 */
    1, /* CYHAL_TRIGGER_TCPWM_TR_IN10 */
    1, /* CYHAL_TRIGGER_TCPWM_TR_IN11 */
    1, /* CYHAL_TRIGGER_TCPWM_TR_IN12 */
    1, /* CYHAL_TRIGGER_TCPWM_TR_IN13 */
};

const uint8_t cyhal_mux_dest_index[18] =
{
    0, /* CYHAL_TRIGGER_CPUSS_DMAC_TR_IN0 */
    1, /* CYHAL_TRIGGER_CPUSS_DMAC_TR_IN1 */
    2, /* CYHAL_TRIGGER_CPUSS_DMAC_TR_IN2 */
    3, /* CYHAL_TRIGGER_CPUSS_DMAC_TR_IN3 */
    4, /* CYHAL_TRIGGER_CPUSS_DMAC_TR_IN4 */
    5, /* CYHAL_TRIGGER_CPUSS_DMAC_TR_IN5 */
    6, /* CYHAL_TRIGGER_CPUSS_DMAC_TR_IN6 */
    7, /* CYHAL_TRIGGER_CPUSS_DMAC_TR_IN7 */
    0, /* CYHAL_TRIGGER_CSD_DSI_START */
    0, /* CYHAL_TRIGGER_PASS0_TR_SAR_IN */
    0, /* CYHAL_TRIGGER_PASS1_TR_SAR_IN */
    0, /* CYHAL_TRIGGER_TCPWM_TR_IN7 */
    1, /* CYHAL_TRIGGER_TCPWM_TR_IN8 */
    2, /* CYHAL_TRIGGER_TCPWM_TR_IN9 */
    3, /* CYHAL_TRIGGER_TCPWM_TR_IN10 */
    4, /* CYHAL_TRIGGER_TCPWM_TR_IN11 */
    5, /* CYHAL_TRIGGER_TCPWM_TR_IN12 */
    6, /* CYHAL_TRIGGER_TCPWM_TR_IN13 */
};

#endif /* CY_DEVICE_PSOC4AMC */