/*******************************************************************************
* File Name: cycfg_clocks.c
*
* Description:
* Clock configuration
* This file was automatically generated and should not be modified.
* Tools Package 2.4.0.5972
* mtb-pdl-cat1 2.3.0.11018
* personalities 4.0.0.0
* udd 3.0.0.1445
*
********************************************************************************
* Copyright 2021 Cypress Semiconductor Corporation (an Infineon company) or
* an affiliate of Cypress Semiconductor Corporation.
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
********************************************************************************/

#include "cycfg_clocks.h"

#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSD_CLK_DIV_obj = 
    {
        .type = CYHAL_RSC_CLOCK,
        .block_num = CYBSP_CSD_CLK_DIV_HW,
        .channel_num = CYBSP_CSD_CLK_DIV_NUM,
    };
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t Base_Clock_obj = 
    {
        .type = CYHAL_RSC_CLOCK,
        .block_num = Base_Clock_HW,
        .channel_num = Base_Clock_NUM,
    };
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t Test_clock_123_obj = 
    {
        .type = CYHAL_RSC_CLOCK,
        .block_num = Test_clock_123_HW,
        .channel_num = Test_clock_123_NUM,
    };
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t Fixed_clco_obj = 
    {
        .type = CYHAL_RSC_CLOCK,
        .block_num = Fixed_clco_HW,
        .channel_num = Fixed_clco_NUM,
    };
#endif //defined (CY_USING_HAL)


void init_cycfg_clocks(void)
{
    Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_8_BIT, 0U);
    Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_8_BIT, 0U, 255U);
    Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_8_BIT, 0U);
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSD_CLK_DIV_obj);
#endif //defined (CY_USING_HAL)

    Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_8_BIT, 2U);
    Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_8_BIT, 2U, 0U);
    Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_8_BIT, 2U);
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&Base_Clock_obj);
#endif //defined (CY_USING_HAL)

    Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_8_BIT, 3U);
    Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_8_BIT, 3U, 108U);
    Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_8_BIT, 3U);
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&Test_clock_123_obj);
#endif //defined (CY_USING_HAL)

    Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_8_BIT, 4U);
    Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_8_BIT, 4U, 0U);
    Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_8_BIT, 4U);
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&Fixed_clco_obj);
#endif //defined (CY_USING_HAL)
}
