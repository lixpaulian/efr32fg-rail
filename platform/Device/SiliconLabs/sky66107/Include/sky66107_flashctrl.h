/**************************************************************************//**
* @file
* @brief sky66107_flashctrl Register and Bit Field definitions
* @version 5.2.2
******************************************************************************
* @section License
* <b>(C) Copyright 2014 Silicon Labs, http://www.silabs.com</b>
*******************************************************************************
*
* Permission is granted to anyone to use this software for any purpose,
* including commercial applications, and to alter it and redistribute it
* freely, subject to the following restrictions:
*
* 1. The origin of this software must not be misrepresented; you must not
*    claim that you wrote the original software.
* 2. Altered source versions must be plainly marked as such, and must not be
*    misrepresented as being the original software.
* 3. This notice may not be removed or altered from any source distribution.
*
* DISCLAIMER OF WARRANTY/LIMITATION OF REMEDIES: Silicon Labs has no
* obligation to support this Software. Silicon Labs is providing the
* Software "AS IS", with no express or implied warranties of any kind,
* including, but not limited to, any implied warranties of merchantability
* or fitness for any particular purpose or warranties against infringement
* of any proprietary rights of a third party.
*
* Silicon Labs will not be liable for any consequential, incidental, or
* special damages, or any other relief, or for any claim by any third party,
* arising from your use of this Software.
*
******************************************************************************/
/**************************************************************************//**
 * @defgroup SKY66107_FLASHCTRL
 * @{
 * @brief SKY66107_FLASHCTRL Register Declaration
 *****************************************************************************/

typedef struct {
  __IOM uint32_t ACCESS;
  __OM uint32_t FPECKEY;
  __OM uint32_t OPTKEY;
  __IOM uint32_t STATUS;
  __IOM uint32_t CTRL;
  __IOM uint32_t ADDR;
  uint32_t RESERVED0[1];
  __IM uint32_t OPTBYTE;
  __IM uint32_t WRPROTECT;
  uint32_t RESERVED1[23];
  __IOM uint32_t TESTCTRL;
  __IOM uint32_t DATA0;
} FLASHCTRL_TypeDef;              /** @} */

/**************************************************************************//**
 * @defgroup SKY66107_FLASHCTRL_BitFields
 * @{
 *****************************************************************************/

/* Bit fields for FLASHCTRL ACCESS */
#define _FLASHCTRL_ACCESS_RESETVALUE                 0x00000031UL
#define _FLASHCTRL_ACCESS_MASK                       0x0000007FUL
#define FLASHCTRL_ACCESS_FLASHLP                     (0x1UL << 6)
#define _FLASHCTRL_ACCESS_FLASHLP_SHIFT              6
#define _FLASHCTRL_ACCESS_FLASHLP_MASK               0x40UL
#define _FLASHCTRL_ACCESS_FLASHLP_DEFAULT            0x00000000UL
#define FLASHCTRL_ACCESS_FLASHLP_DEFAULT             (_FLASHCTRL_ACCESS_FLASHLP_DEFAULT << 6)
#define FLASHCTRL_ACCESS_PREFETCHSTATUS              (0x1UL << 5)
#define _FLASHCTRL_ACCESS_PREFETCHSTATUS_SHIFT       5
#define _FLASHCTRL_ACCESS_PREFETCHSTATUS_MASK        0x20UL
#define _FLASHCTRL_ACCESS_PREFETCHSTATUS_DEFAULT     0x00000001UL
#define FLASHCTRL_ACCESS_PREFETCHSTATUS_DEFAULT      (_FLASHCTRL_ACCESS_PREFETCHSTATUS_DEFAULT << 5)
#define FLASHCTRL_ACCESS_PREFETCHEN                  (0x1UL << 4)
#define _FLASHCTRL_ACCESS_PREFETCHEN_SHIFT           4
#define _FLASHCTRL_ACCESS_PREFETCHEN_MASK            0x10UL
#define _FLASHCTRL_ACCESS_PREFETCHEN_DEFAULT         0x00000001UL
#define FLASHCTRL_ACCESS_PREFETCHEN_DEFAULT          (_FLASHCTRL_ACCESS_PREFETCHEN_DEFAULT << 4)
#define FLASHCTRL_ACCESS_HALFCYCLEACCESS             (0x1UL << 3)
#define _FLASHCTRL_ACCESS_HALFCYCLEACCESS_SHIFT      3
#define _FLASHCTRL_ACCESS_HALFCYCLEACCESS_MASK       0x8UL
#define _FLASHCTRL_ACCESS_HALFCYCLEACCESS_DEFAULT    0x00000000UL
#define FLASHCTRL_ACCESS_HALFCYCLEACCESS_DEFAULT     (_FLASHCTRL_ACCESS_HALFCYCLEACCESS_DEFAULT << 3)
#define FLASHCTRL_ACCESS_CODELATENCY                 (0x1UL << 0)
#define _FLASHCTRL_ACCESS_CODELATENCY_SHIFT          0
#define _FLASHCTRL_ACCESS_CODELATENCY_MASK           0x7UL
#define _FLASHCTRL_ACCESS_CODELATENCY_DEFAULT        0x00000001UL
#define FLASHCTRL_ACCESS_CODELATENCY_DEFAULT         (_FLASHCTRL_ACCESS_CODELATENCY_DEFAULT << 0)

/* Bit fields for FLASHCTRL FPECKEY */
#define _FLASHCTRL_FPECKEY_RESETVALUE       0x00000000UL
#define _FLASHCTRL_FPECKEY_MASK             0xFFFFFFFFUL
#define _FLASHCTRL_FPECKEY_FKEYR_SHIFT      0
#define _FLASHCTRL_FPECKEY_FKEYR_MASK       0xFFFFFFFFUL
#define _FLASHCTRL_FPECKEY_FKEYR_DEFAULT    0x00000000UL
#define FLASHCTRL_FPECKEY_FKEYR_DEFAULT     (_FLASHCTRL_FPECKEY_FKEYR_DEFAULT << 0)

/* Bit fields for FLASHCTRL OPTKEY */
#define _FLASHCTRL_OPTKEY_RESETVALUE         0x00000000UL
#define _FLASHCTRL_OPTKEY_MASK               0xFFFFFFFFUL
#define _FLASHCTRL_OPTKEY_OPTKEYR_SHIFT      0
#define _FLASHCTRL_OPTKEY_OPTKEYR_MASK       0xFFFFFFFFUL
#define _FLASHCTRL_OPTKEY_OPTKEYR_DEFAULT    0x00000000UL
#define FLASHCTRL_OPTKEY_OPTKEYR_DEFAULT     (_FLASHCTRL_OPTKEY_OPTKEYR_DEFAULT << 0)

/* Bit fields for FLASHCTRL STATUS */
#define _FLASHCTRL_STATUS_RESETVALUE             0x00000000UL
#define _FLASHCTRL_STATUS_MASK                   0x0000003FUL
#define FLASHCTRL_STATUS_EOP                     (0x1UL << 5)
#define _FLASHCTRL_STATUS_EOP_SHIFT              5
#define _FLASHCTRL_STATUS_EOP_MASK               0x20UL
#define _FLASHCTRL_STATUS_EOP_DEFAULT            0x00000000UL
#define FLASHCTRL_STATUS_EOP_DEFAULT             (_FLASHCTRL_STATUS_EOP_DEFAULT << 5)
#define FLASHCTRL_STATUS_WRPERR                  (0x1UL << 4)
#define _FLASHCTRL_STATUS_WRPERR_SHIFT           4
#define _FLASHCTRL_STATUS_WRPERR_MASK            0x10UL
#define _FLASHCTRL_STATUS_WRPERR_DEFAULT         0x00000000UL
#define FLASHCTRL_STATUS_WRPERR_DEFAULT          (_FLASHCTRL_STATUS_WRPERR_DEFAULT << 4)
#define FLASHCTRL_STATUS_PAGEPROGERR             (0x1UL << 3)
#define _FLASHCTRL_STATUS_PAGEPROGERR_SHIFT      3
#define _FLASHCTRL_STATUS_PAGEPROGERR_MASK       0x8UL
#define _FLASHCTRL_STATUS_PAGEPROGERR_DEFAULT    0x00000000UL
#define FLASHCTRL_STATUS_PAGEPROGERR_DEFAULT     (_FLASHCTRL_STATUS_PAGEPROGERR_DEFAULT << 3)
#define FLASHCTRL_STATUS_PROGERR                 (0x1UL << 2)
#define _FLASHCTRL_STATUS_PROGERR_SHIFT          2
#define _FLASHCTRL_STATUS_PROGERR_MASK           0x4UL
#define _FLASHCTRL_STATUS_PROGERR_DEFAULT        0x00000000UL
#define FLASHCTRL_STATUS_PROGERR_DEFAULT         (_FLASHCTRL_STATUS_PROGERR_DEFAULT << 2)
#define FLASHCTRL_STATUS_EARLYBSY                (0x1UL << 1)
#define _FLASHCTRL_STATUS_EARLYBSY_SHIFT         1
#define _FLASHCTRL_STATUS_EARLYBSY_MASK          0x2UL
#define _FLASHCTRL_STATUS_EARLYBSY_DEFAULT       0x00000000UL
#define FLASHCTRL_STATUS_EARLYBSY_DEFAULT        (_FLASHCTRL_STATUS_EARLYBSY_DEFAULT << 1)
#define FLASHCTRL_STATUS_FLABSY                  (0x1UL << 0)
#define _FLASHCTRL_STATUS_FLABSY_SHIFT           0
#define _FLASHCTRL_STATUS_FLABSY_MASK            0x1UL
#define _FLASHCTRL_STATUS_FLABSY_DEFAULT         0x00000000UL
#define FLASHCTRL_STATUS_FLABSY_DEFAULT          (_FLASHCTRL_STATUS_FLABSY_DEFAULT << 0)

/* Bit fields for FLASHCTRL CTRL */
#define _FLASHCTRL_CTRL_RESETVALUE             0x00000080UL
#define _FLASHCTRL_CTRL_MASK                   0x00001FFFUL
#define FLASHCTRL_CTRL_EOPIE                   (0x1UL << 12)
#define _FLASHCTRL_CTRL_EOPIE_SHIFT            12
#define _FLASHCTRL_CTRL_EOPIE_MASK             0x1000UL
#define _FLASHCTRL_CTRL_EOPIE_DEFAULT          0x00000000UL
#define FLASHCTRL_CTRL_EOPIE_DEFAULT           (_FLASHCTRL_CTRL_EOPIE_DEFAULT << 12)
#define FLASHCTRL_CTRL_EARLYBSYIE              (0x1UL << 11)
#define _FLASHCTRL_CTRL_EARLYBSYIE_SHIFT       11
#define _FLASHCTRL_CTRL_EARLYBSYIE_MASK        0x800UL
#define _FLASHCTRL_CTRL_EARLYBSYIE_DEFAULT     0x00000000UL
#define FLASHCTRL_CTRL_EARLYBSYIE_DEFAULT      (_FLASHCTRL_CTRL_EARLYBSYIE_DEFAULT << 11)
#define FLASHCTRL_CTRL_ERRIE                   (0x1UL << 10)
#define _FLASHCTRL_CTRL_ERRIE_SHIFT            10
#define _FLASHCTRL_CTRL_ERRIE_MASK             0x400UL
#define _FLASHCTRL_CTRL_ERRIE_DEFAULT          0x00000000UL
#define FLASHCTRL_CTRL_ERRIE_DEFAULT           (_FLASHCTRL_CTRL_ERRIE_DEFAULT << 10)
#define FLASHCTRL_CTRL_OPTWREN                 (0x1UL << 9)
#define _FLASHCTRL_CTRL_OPTWREN_SHIFT          9
#define _FLASHCTRL_CTRL_OPTWREN_MASK           0x200UL
#define _FLASHCTRL_CTRL_OPTWREN_DEFAULT        0x00000000UL
#define FLASHCTRL_CTRL_OPTWREN_DEFAULT         (_FLASHCTRL_CTRL_OPTWREN_DEFAULT << 9)
#define FLASHCTRL_CTRL_FSTPROG                 (0x1UL << 8)
#define _FLASHCTRL_CTRL_FSTPROG_SHIFT          8
#define _FLASHCTRL_CTRL_FSTPROG_MASK           0x100UL
#define _FLASHCTRL_CTRL_FSTPROG_DEFAULT        0x00000000UL
#define FLASHCTRL_CTRL_FSTPROG_DEFAULT         (_FLASHCTRL_CTRL_FSTPROG_DEFAULT << 8)
#define FLASHCTRL_CTRL_LOCK                    (0x1UL << 7)
#define _FLASHCTRL_CTRL_LOCK_SHIFT             7
#define _FLASHCTRL_CTRL_LOCK_MASK              0x80UL
#define _FLASHCTRL_CTRL_LOCK_DEFAULT           0x00000001UL
#define FLASHCTRL_CTRL_LOCK_DEFAULT            (_FLASHCTRL_CTRL_LOCK_DEFAULT << 7)
#define FLASHCTRL_CTRL_FLASTART                (0x1UL << 6)
#define _FLASHCTRL_CTRL_FLASTART_SHIFT         6
#define _FLASHCTRL_CTRL_FLASTART_MASK          0x40UL
#define _FLASHCTRL_CTRL_FLASTART_DEFAULT       0x00000000UL
#define FLASHCTRL_CTRL_FLASTART_DEFAULT        (_FLASHCTRL_CTRL_FLASTART_DEFAULT << 6)
#define FLASHCTRL_CTRL_OPTERASE                (0x1UL << 5)
#define _FLASHCTRL_CTRL_OPTERASE_SHIFT         5
#define _FLASHCTRL_CTRL_OPTERASE_MASK          0x20UL
#define _FLASHCTRL_CTRL_OPTERASE_DEFAULT       0x00000000UL
#define FLASHCTRL_CTRL_OPTERASE_DEFAULT        (_FLASHCTRL_CTRL_OPTERASE_DEFAULT << 5)
#define FLASHCTRL_CTRL_OPTPROG                 (0x1UL << 4)
#define _FLASHCTRL_CTRL_OPTPROG_SHIFT          4
#define _FLASHCTRL_CTRL_OPTPROG_MASK           0x10UL
#define _FLASHCTRL_CTRL_OPTPROG_DEFAULT        0x00000000UL
#define FLASHCTRL_CTRL_OPTPROG_DEFAULT         (_FLASHCTRL_CTRL_OPTPROG_DEFAULT << 4)
#define FLASHCTRL_CTRL_GLOBALERASE             (0x1UL << 3)
#define _FLASHCTRL_CTRL_GLOBALERASE_SHIFT      3
#define _FLASHCTRL_CTRL_GLOBALERASE_MASK       0x8UL
#define _FLASHCTRL_CTRL_GLOBALERASE_DEFAULT    0x00000000UL
#define FLASHCTRL_CTRL_GLOBALERASE_DEFAULT     (_FLASHCTRL_CTRL_GLOBALERASE_DEFAULT << 3)
#define FLASHCTRL_CTRL_MASSERASE               (0x1UL << 2)
#define _FLASHCTRL_CTRL_MASSERASE_SHIFT        2
#define _FLASHCTRL_CTRL_MASSERASE_MASK         0x4UL
#define _FLASHCTRL_CTRL_MASSERASE_DEFAULT      0x00000000UL
#define FLASHCTRL_CTRL_MASSERASE_DEFAULT       (_FLASHCTRL_CTRL_MASSERASE_DEFAULT << 2)
#define FLASHCTRL_CTRL_PAGEERASE               (0x1UL << 1)
#define _FLASHCTRL_CTRL_PAGEERASE_SHIFT        1
#define _FLASHCTRL_CTRL_PAGEERASE_MASK         0x2UL
#define _FLASHCTRL_CTRL_PAGEERASE_DEFAULT      0x00000000UL
#define FLASHCTRL_CTRL_PAGEERASE_DEFAULT       (_FLASHCTRL_CTRL_PAGEERASE_DEFAULT << 1)
#define FLASHCTRL_CTRL_PROG                    (0x1UL << 0)
#define _FLASHCTRL_CTRL_PROG_SHIFT             0
#define _FLASHCTRL_CTRL_PROG_MASK              0x1UL
#define _FLASHCTRL_CTRL_PROG_DEFAULT           0x00000000UL
#define FLASHCTRL_CTRL_PROG_DEFAULT            (_FLASHCTRL_CTRL_PROG_DEFAULT << 0)

/* Bit fields for FLASHCTRL ADDR */
#define _FLASHCTRL_ADDR_RESETVALUE     0x00000000UL
#define _FLASHCTRL_ADDR_MASK           0xFFFFFFFFUL
#define _FLASHCTRL_ADDR_FAR_SHIFT      0
#define _FLASHCTRL_ADDR_FAR_MASK       0xFFFFFFFFUL
#define _FLASHCTRL_ADDR_FAR_DEFAULT    0x00000000UL
#define FLASHCTRL_ADDR_FAR_DEFAULT     (_FLASHCTRL_ADDR_FAR_DEFAULT << 0)

/* Bit fields for FLASHCTRL OPTBYTE */
#define _FLASHCTRL_OPTBYTE_RESETVALUE        0xFBFFFFFEUL
#define _FLASHCTRL_OPTBYTE_MASK              0xFFFFFFFFUL
#define FLASHCTRL_OPTBYTE_RSVD               (0x1UL << 27)
#define _FLASHCTRL_OPTBYTE_RSVD_SHIFT        27
#define _FLASHCTRL_OPTBYTE_RSVD_MASK         0xF8000000UL
#define _FLASHCTRL_OPTBYTE_RSVD_DEFAULT      0x0000001FUL
#define FLASHCTRL_OPTBYTE_RSVD_DEFAULT       (_FLASHCTRL_OPTBYTE_RSVD_DEFAULT << 27)
#define FLASHCTRL_OPTBYTE_OBR                (0x1UL << 2)
#define _FLASHCTRL_OPTBYTE_OBR_SHIFT         2
#define _FLASHCTRL_OPTBYTE_OBR_MASK          0x7FFFFFCUL
#define _FLASHCTRL_OPTBYTE_OBR_DEFAULT       0x00FFFFFFUL
#define FLASHCTRL_OPTBYTE_OBR_DEFAULT        (_FLASHCTRL_OPTBYTE_OBR_DEFAULT << 2)
#define FLASHCTRL_OPTBYTE_RDPROT             (0x1UL << 1)
#define _FLASHCTRL_OPTBYTE_RDPROT_SHIFT      1
#define _FLASHCTRL_OPTBYTE_RDPROT_MASK       0x2UL
#define _FLASHCTRL_OPTBYTE_RDPROT_DEFAULT    0x00000001UL
#define FLASHCTRL_OPTBYTE_RDPROT_DEFAULT     (_FLASHCTRL_OPTBYTE_RDPROT_DEFAULT << 1)
#define FLASHCTRL_OPTBYTE_OPTERR             (0x1UL << 0)
#define _FLASHCTRL_OPTBYTE_OPTERR_SHIFT      0
#define _FLASHCTRL_OPTBYTE_OPTERR_MASK       0x1UL
#define _FLASHCTRL_OPTBYTE_OPTERR_DEFAULT    0x00000000UL
#define FLASHCTRL_OPTBYTE_OPTERR_DEFAULT     (_FLASHCTRL_OPTBYTE_OPTERR_DEFAULT << 0)

/* Bit fields for FLASHCTRL WRPROTECT */
#define _FLASHCTRL_WRPROTECT_RESETVALUE     0xFFFFFFFFUL
#define _FLASHCTRL_WRPROTECT_MASK           0xFFFFFFFFUL
#define _FLASHCTRL_WRPROTECT_WRP_SHIFT      0
#define _FLASHCTRL_WRPROTECT_WRP_MASK       0xFFFFFFFFUL
#define _FLASHCTRL_WRPROTECT_WRP_DEFAULT    0xFFFFFFFFUL
#define FLASHCTRL_WRPROTECT_WRP_DEFAULT     (_FLASHCTRL_WRPROTECT_WRP_DEFAULT << 0)

/* Bit fields for FLASHCTRL TESTCTRL */
#define _FLASHCTRL_TESTCTRL_RESETVALUE          0x00000000UL
#define _FLASHCTRL_TESTCTRL_MASK                0x00001FFFUL
#define FLASHCTRL_TESTCTRL_TMR                  (0x1UL << 12)
#define _FLASHCTRL_TESTCTRL_TMR_SHIFT           12
#define _FLASHCTRL_TESTCTRL_TMR_MASK            0x1000UL
#define _FLASHCTRL_TESTCTRL_TMR_DEFAULT         0x00000000UL
#define FLASHCTRL_TESTCTRL_TMR_DEFAULT          (_FLASHCTRL_TESTCTRL_TMR_DEFAULT << 12)
#define FLASHCTRL_TESTCTRL_ERASE                (0x1UL << 11)
#define _FLASHCTRL_TESTCTRL_ERASE_SHIFT         11
#define _FLASHCTRL_TESTCTRL_ERASE_MASK          0x800UL
#define _FLASHCTRL_TESTCTRL_ERASE_DEFAULT       0x00000000UL
#define FLASHCTRL_TESTCTRL_ERASE_DEFAULT        (_FLASHCTRL_TESTCTRL_ERASE_DEFAULT << 11)
#define FLASHCTRL_TESTCTRL_MAS1                 (0x1UL << 10)
#define _FLASHCTRL_TESTCTRL_MAS1_SHIFT          10
#define _FLASHCTRL_TESTCTRL_MAS1_MASK           0x400UL
#define _FLASHCTRL_TESTCTRL_MAS1_DEFAULT        0x00000000UL
#define FLASHCTRL_TESTCTRL_MAS1_DEFAULT         (_FLASHCTRL_TESTCTRL_MAS1_DEFAULT << 10)
#define FLASHCTRL_TESTCTRL_TESTPROG             (0x1UL << 9)
#define _FLASHCTRL_TESTCTRL_TESTPROG_SHIFT      9
#define _FLASHCTRL_TESTCTRL_TESTPROG_MASK       0x200UL
#define _FLASHCTRL_TESTCTRL_TESTPROG_DEFAULT    0x00000000UL
#define FLASHCTRL_TESTCTRL_TESTPROG_DEFAULT     (_FLASHCTRL_TESTCTRL_TESTPROG_DEFAULT << 9)
#define FLASHCTRL_TESTCTRL_NVSTR                (0x1UL << 8)
#define _FLASHCTRL_TESTCTRL_NVSTR_SHIFT         8
#define _FLASHCTRL_TESTCTRL_NVSTR_MASK          0x100UL
#define _FLASHCTRL_TESTCTRL_NVSTR_DEFAULT       0x00000000UL
#define FLASHCTRL_TESTCTRL_NVSTR_DEFAULT        (_FLASHCTRL_TESTCTRL_NVSTR_DEFAULT << 8)
#define FLASHCTRL_TESTCTRL_SE                   (0x1UL << 7)
#define _FLASHCTRL_TESTCTRL_SE_SHIFT            7
#define _FLASHCTRL_TESTCTRL_SE_MASK             0x80UL
#define _FLASHCTRL_TESTCTRL_SE_DEFAULT          0x00000000UL
#define FLASHCTRL_TESTCTRL_SE_DEFAULT           (_FLASHCTRL_TESTCTRL_SE_DEFAULT << 7)
#define FLASHCTRL_TESTCTRL_IFREN                (0x1UL << 6)
#define _FLASHCTRL_TESTCTRL_IFREN_SHIFT         6
#define _FLASHCTRL_TESTCTRL_IFREN_MASK          0x40UL
#define _FLASHCTRL_TESTCTRL_IFREN_DEFAULT       0x00000000UL
#define FLASHCTRL_TESTCTRL_IFREN_DEFAULT        (_FLASHCTRL_TESTCTRL_IFREN_DEFAULT << 6)
#define FLASHCTRL_TESTCTRL_YE                   (0x1UL << 5)
#define _FLASHCTRL_TESTCTRL_YE_SHIFT            5
#define _FLASHCTRL_TESTCTRL_YE_MASK             0x20UL
#define _FLASHCTRL_TESTCTRL_YE_DEFAULT          0x00000000UL
#define FLASHCTRL_TESTCTRL_YE_DEFAULT           (_FLASHCTRL_TESTCTRL_YE_DEFAULT << 5)
#define FLASHCTRL_TESTCTRL_XE                   (0x1UL << 4)
#define _FLASHCTRL_TESTCTRL_XE_SHIFT            4
#define _FLASHCTRL_TESTCTRL_XE_MASK             0x10UL
#define _FLASHCTRL_TESTCTRL_XE_DEFAULT          0x00000000UL
#define FLASHCTRL_TESTCTRL_XE_DEFAULT           (_FLASHCTRL_TESTCTRL_XE_DEFAULT << 4)
#define FLASHCTRL_TESTCTRL_SWCTRL               (0x1UL << 3)
#define _FLASHCTRL_TESTCTRL_SWCTRL_SHIFT        3
#define _FLASHCTRL_TESTCTRL_SWCTRL_MASK         0x8UL
#define _FLASHCTRL_TESTCTRL_SWCTRL_DEFAULT      0x00000000UL
#define FLASHCTRL_TESTCTRL_SWCTRL_DEFAULT       (_FLASHCTRL_TESTCTRL_SWCTRL_DEFAULT << 3)
#define FLASHCTRL_TESTCTRL_SW                   (0x1UL << 1)
#define _FLASHCTRL_TESTCTRL_SW_SHIFT            1
#define _FLASHCTRL_TESTCTRL_SW_MASK             0x6UL
#define _FLASHCTRL_TESTCTRL_SW_DEFAULT          0x00000000UL
#define FLASHCTRL_TESTCTRL_SW_DEFAULT           (_FLASHCTRL_TESTCTRL_SW_DEFAULT << 1)
#define FLASHCTRL_TESTCTRL_SWEN                 (0x1UL << 0)
#define _FLASHCTRL_TESTCTRL_SWEN_SHIFT          0
#define _FLASHCTRL_TESTCTRL_SWEN_MASK           0x1UL
#define _FLASHCTRL_TESTCTRL_SWEN_DEFAULT        0x00000000UL
#define FLASHCTRL_TESTCTRL_SWEN_DEFAULT         (_FLASHCTRL_TESTCTRL_SWEN_DEFAULT << 0)

/* Bit fields for FLASHCTRL DATA0 */
#define _FLASHCTRL_DATA0_RESETVALUE      0xFFFFFFFFUL
#define _FLASHCTRL_DATA0_MASK            0xFFFFFFFFUL
#define _FLASHCTRL_DATA0_FDR0_SHIFT      0
#define _FLASHCTRL_DATA0_FDR0_MASK       0xFFFFFFFFUL
#define _FLASHCTRL_DATA0_FDR0_DEFAULT    0xFFFFFFFFUL
#define FLASHCTRL_DATA0_FDR0_DEFAULT     (_FLASHCTRL_DATA0_FDR0_DEFAULT << 0)

/** @} End of group SKY66107_FLASHCTRL_BitFields */
