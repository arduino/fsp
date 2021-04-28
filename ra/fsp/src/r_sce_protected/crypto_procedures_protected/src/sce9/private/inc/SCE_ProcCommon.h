/***********************************************************************************************************************
 * DISCLAIMER
 * This software is supplied by Renesas Electronics Corporation and is only intended for use with Renesas products. No
 * other uses are authorized. This software is owned by Renesas Electronics Corporation and is protected under all
 * applicable laws, including copyright laws.
 * THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES REGARDING
 * THIS SOFTWARE, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT. ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED. TO THE MAXIMUM
 * EXTENT PERMITTED NOT PROHIBITED BY LAW, NEITHER RENESAS ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES
 * SHALL BE LIABLE FOR ANY DIRECT, INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR ANY REASON RELATED TO THIS
 * SOFTWARE, EVEN IF RENESAS OR ITS AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
 * Renesas reserves the right, without notice, to make changes to this software and to discontinue the availability of
 * this software. By using this software, you agree to the additional terms and conditions found by accessing the
 * following link:
 * http://www.renesas.com/disclaimer
 *
 * Copyright (C) 2018 Renesas Electronics Corporation. All rights reserved.
 ***********************************************************************************************************************/

/***********************************************************************************************************************
 * File Name    : r_sce_E017.h
 * Description  : IO definition for SOTB TSIP
 ***********************************************************************************************************************/

/***********************************************************************************************************************
 * History : DD.MM.YYYY Version Description
 *         : 31.08.2018 0.50    alpha 1
 ***********************************************************************************************************************/
#ifndef HW_SCE_E017_H
#define HW_SCE_E017_H

#include "bsp_api.h"
#include "SCE_module.h"

#define SCE    ((SCE_Type *) SCE_BASE)

typedef struct
{
    union
    {
        __IOM uint32_t REG_00H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_00H_b;
    };
    union
    {
        __IOM uint32_t REG_04H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_04H_b;
    };
    union
    {
        __IOM uint32_t REG_08H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_08H_b;
    };
    union
    {
        __IOM uint32_t REG_0CH;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_0CH_b;
    };
    union
    {
        __IOM uint32_t REG_10H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_10H_b;
    };
    union
    {
        __IOM uint32_t REG_14H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_14H_b;
    };
    union
    {
        __IOM uint32_t REG_18H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_18H_b;
    };
    union
    {
        __IOM uint32_t REG_1CH;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_1CH_b;
    };
    union
    {
        __IOM uint32_t REG_20H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_20H_b;
    };
    union
    {
        __IOM uint32_t REG_24H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_24H_b;
    };
    union
    {
        __IOM uint32_t REG_28H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_28H_b;
    };
    union
    {
        __IOM uint32_t REG_2CH;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_2CH_b;
    };
    union
    {
        __IOM uint32_t REG_30H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_30H_b;
    };
    union
    {
        __IOM uint32_t REG_34H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_34H_b;
    };
    union
    {
        __IOM uint32_t REG_38H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_38H_b;
    };
    union
    {
        __IOM uint32_t REG_3CH;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_3CH_b;
    };
    union
    {
        __IOM uint32_t REG_40H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_40H_b;
    };
    union
    {
        __IOM uint32_t REG_44H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_44H_b;
    };
    union
    {
        __IOM uint32_t REG_48H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_48H_b;
    };
    union
    {
        __IOM uint32_t REG_4CH;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_4CH_b;
    };
    union
    {
        __IOM uint32_t REG_50H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_50H_b;
    };
    union
    {
        __IOM uint32_t REG_54H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_54H_b;
    };
    union
    {
        __IOM uint32_t REG_58H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_58H_b;
    };
    union
    {
        __IOM uint32_t REG_5CH;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_5CH_b;
    };
    union
    {
        __IOM uint32_t REG_60H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_60H_b;
    };
    union
    {
        __IOM uint32_t REG_64H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_64H_b;
    };
    union
    {
        __IOM uint32_t REG_68H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_68H_b;
    };
    union
    {
        __IOM uint32_t REG_6CH;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_6CH_b;
    };
    union
    {
        __IOM uint32_t REG_70H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_70H_b;
    };
    union
    {
        __IOM uint32_t REG_74H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_74H_b;
    };
    union
    {
        __IOM uint32_t REG_78H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_78H_b;
    };
    union
    {
        __IOM uint32_t REG_7CH;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_7CH_b;
    };
    union
    {
        __IOM uint32_t REG_80H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_80H_b;
    };
    union
    {
        __IOM uint32_t REG_84H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_84H_b;
    };
    union
    {
        __IOM uint32_t REG_88H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_88H_b;
    };
    union
    {
        __IOM uint32_t REG_8CH;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_8CH_b;
    };
    union
    {
        __IOM uint32_t REG_90H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_90H_b;
    };
    union
    {
        __IOM uint32_t REG_94H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_94H_b;
    };
    union
    {
        __IOM uint32_t REG_98H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_98H_b;
    };
    union
    {
        __IOM uint32_t REG_9CH;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_9CH_b;
    };
    union
    {
        __IOM uint32_t REG_A0H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_A0H_b;
    };
    union
    {
        __IOM uint32_t REG_A4H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_A4H_b;
    };
    union
    {
        __IOM uint32_t REG_A8H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_A8H_b;
    };
    union
    {
        __IOM uint32_t REG_ACH;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_ACH_b;
    };
    union
    {
        __IOM uint32_t REG_B0H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_B0H_b;
    };
    union
    {
        __IOM uint32_t REG_B4H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_B4H_b;
    };
    union
    {
        __IOM uint32_t REG_B8H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_B8H_b;
    };
    union
    {
        __IOM uint32_t REG_BCH;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_BCH_b;
    };
    union
    {
        __IOM uint32_t REG_C0H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_C0H_b;
    };
    union
    {
        __IOM uint32_t REG_C4H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_C4H_b;
    };
    union
    {
        __IOM uint32_t REG_C8H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_C8H_b;
    };
    union
    {
        __IOM uint32_t REG_CCH;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_CCH_b;
    };
    union
    {
        __IOM uint32_t REG_D0H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_D0H_b;
    };
    union
    {
        __IOM uint32_t REG_D4H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_D4H_b;
    };
    union
    {
        __IOM uint32_t REG_D8H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_D8H_b;
    };
    union
    {
        __IOM uint32_t REG_DCH;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_DCH_b;
    };
    union
    {
        __IOM uint32_t REG_E0H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_E0H_b;
    };
    union
    {
        __IOM uint32_t REG_E4H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_E4H_b;
    };
    union
    {
        __IOM uint32_t REG_E8H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_E8H_b;
    };
    union
    {
        __IOM uint32_t REG_ECH;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_ECH_b;
    };
    union
    {
        __IOM uint32_t REG_F0H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_F0H_b;
    };
    union
    {
        __IOM uint32_t REG_F4H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_F4H_b;
    };
    union
    {
        __IOM uint32_t REG_F8H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_F8H_b;
    };
    union
    {
        __IOM uint32_t REG_FCH;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_FCH_b;
    };
    union
    {
        __IOM uint32_t REG_100H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_100H_b;
    };
    union
    {
        __IOM uint32_t REG_104H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_104H_b;
    };
    union
    {
        __IOM uint32_t REG_108H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_108H_b;
    };
    union
    {
        __IOM uint32_t REG_10CH;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_10CH_b;
    };
    union
    {
        __IOM uint32_t REG_110H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_110H_b;
    };
    union
    {
        __IOM uint32_t REG_114H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_114H_b;
    };
    union
    {
        __IOM uint32_t REG_118H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_118H_b;
    };
    union
    {
        __IOM uint32_t REG_11CH;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_11CH_b;
    };
    union
    {
        __IOM uint32_t REG_120H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_120H_b;
    };
    union
    {
        __IOM uint32_t REG_124H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_124H_b;
    };
    union
    {
        __IOM uint32_t REG_128H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_128H_b;
    };
    union
    {
        __IOM uint32_t REG_12CH;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_12CH_b;
    };
    union
    {
        __IOM uint32_t REG_130H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_130H_b;
    };
    union
    {
        __IOM uint32_t REG_134H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_134H_b;
    };
    union
    {
        __IOM uint32_t REG_138H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_138H_b;
    };
    union
    {
        __IOM uint32_t REG_13CH;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_13CH_b;
    };
    union
    {
        __IOM uint32_t REG_140H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_140H_b;
    };
    union
    {
        __IOM uint32_t REG_144H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_144H_b;
    };
    union
    {
        __IOM uint32_t REG_148H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_148H_b;
    };
    union
    {
        __IOM uint32_t REG_14CH;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_14CH_b;
    };
    union
    {
        __IOM uint32_t REG_150H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_150H_b;
    };
    union
    {
        __IOM uint32_t REG_154H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_154H_b;
    };
    union
    {
        __IOM uint32_t REG_158H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_158H_b;
    };
    union
    {
        __IOM uint32_t REG_15CH;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_15CH_b;
    };
    union
    {
        __IOM uint32_t REG_160H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_160H_b;
    };
    union
    {
        __IOM uint32_t REG_164H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_164H_b;
    };
    union
    {
        __IOM uint32_t REG_168H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_168H_b;
    };
    union
    {
        __IOM uint32_t REG_16CH;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_16CH_b;
    };
    union
    {
        __IOM uint32_t REG_170H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_170H_b;
    };
    union
    {
        __IOM uint32_t REG_174H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_174H_b;
    };
    union
    {
        __IOM uint32_t REG_178H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_178H_b;
    };
    union
    {
        __IOM uint32_t REG_17CH;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_17CH_b;
    };
    union
    {
        __IOM uint32_t REG_180H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_180H_b;
    };
    union
    {
        __IOM uint32_t REG_184H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_184H_b;
    };
    union
    {
        __IOM uint32_t REG_188H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_188H_b;
    };
    union
    {
        __IOM uint32_t REG_18CH;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_18CH_b;
    };
    union
    {
        __IOM uint32_t REG_190H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_190H_b;
    };
    union
    {
        __IOM uint32_t REG_194H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_194H_b;
    };
    union
    {
        __IOM uint32_t REG_198H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_198H_b;
    };
    union
    {
        __IOM uint32_t REG_19CH;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_19CH_b;
    };
    union
    {
        __IOM uint32_t REG_1A0H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_1A0H_b;
    };
    union
    {
        __IOM uint32_t REG_1A4H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_1A4H_b;
    };
    union
    {
        __IOM uint32_t REG_1A8H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_1A8H_b;
    };
    union
    {
        __IOM uint32_t REG_1ACH;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_1ACH_b;
    };
    union
    {
        __IOM uint32_t REG_1B0H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_1B0H_b;
    };
    union
    {
        __IOM uint32_t REG_1B4H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_1B4H_b;
    };
    union
    {
        __IOM uint32_t REG_1B8H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_1B8H_b;
    };
    union
    {
        __IOM uint32_t REG_1BCH;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_1BCH_b;
    };
    union
    {
        __IOM uint32_t REG_1C0H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_1C0H_b;
    };
    union
    {
        __IOM uint32_t REG_1C4H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_1C4H_b;
    };
    union
    {
        __IOM uint32_t REG_1C8H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_1C8H_b;
    };
    union
    {
        __IOM uint32_t REG_1CCH;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_1CCH_b;
    };
    union
    {
        __IOM uint32_t REG_1D0H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_1D0H_b;
    };
    union
    {
        __IOM uint32_t REG_1D4H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_1D4H_b;
    };
    union
    {
        __IOM uint32_t REG_1D8H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_1D8H_b;
    };
    union
    {
        __IOM uint32_t REG_1DCH;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_1DCH_b;
    };
    union
    {
        __IOM uint32_t REG_1E0H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_1E0H_b;
    };
    union
    {
        __IOM uint32_t REG_1E4H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_1E4H_b;
    };
    union
    {
        __IOM uint32_t REG_1E8H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_1E8H_b;
    };
    union
    {
        __IOM uint32_t REG_1ECH;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_1ECH_b;
    };
    union
    {
        __IOM uint32_t REG_1F0H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_1F0H_b;
    };
    union
    {
        __IOM uint32_t REG_1F4H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_1F4H_b;
    };
    union
    {
        __IOM uint32_t REG_1F8H;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_1F8H_b;
    };
    union
    {
        __IOM uint32_t REG_1FCH;
        struct
        {
            __IOM uint32_t B0  : 1;
            __IOM uint32_t B1  : 1;
            __IOM uint32_t B2  : 1;
            __IOM uint32_t B3  : 1;
            __IOM uint32_t B4  : 1;
            __IOM uint32_t B5  : 1;
            __IOM uint32_t B6  : 1;
            __IOM uint32_t B7  : 1;
            __IOM uint32_t B8  : 1;
            __IOM uint32_t B9  : 1;
            __IOM uint32_t B10 : 1;
            __IOM uint32_t B11 : 1;
            __IOM uint32_t B12 : 1;
            __IOM uint32_t B13 : 1;
            __IOM uint32_t B14 : 1;
            __IOM uint32_t B15 : 1;
            __IOM uint32_t B16 : 1;
            __IOM uint32_t B17 : 1;
            __IOM uint32_t B18 : 1;
            __IOM uint32_t B19 : 1;
            __IOM uint32_t B20 : 1;
            __IOM uint32_t B21 : 1;
            __IOM uint32_t B22 : 1;
            __IOM uint32_t B23 : 1;
            __IOM uint32_t B24 : 1;
            __IOM uint32_t B25 : 1;
            __IOM uint32_t B26 : 1;
            __IOM uint32_t B27 : 1;
            __IOM uint32_t B28 : 1;
            __IOM uint32_t B29 : 1;
            __IOM uint32_t B30 : 1;
            __IOM uint32_t B31 : 1;
        } REG_1FCH_b;
    };
} SCE_Type;

#define MSTP_SECURITY    R_MSTP->MSTPCRC_b.MSTPC31

#endif                                 /* HW_SCE_E017_H */
