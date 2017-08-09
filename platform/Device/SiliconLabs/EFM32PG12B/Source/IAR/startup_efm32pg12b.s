;/**************************************************************************//**
; * @file startup_efm32pg12b.s
; * @brief    CMSIS Core Device Startup File
; *           Silicon Labs EFM32PG12B Device Series
; * @version 5.2.2
; * @date     30. January 2012
; *
; * @note
; * Copyright (C) 2012 ARM Limited. All rights reserved.
; *
; * @par
; * ARM Limited (ARM) is supplying this software for use with Cortex-M
; * processor based microcontrollers.  This file can be freely distributed
; * within development tools that are supporting such ARM based processors.
; *
; * @par
; * THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
; * OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
; * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
; * ARM SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR
; * CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
; *
; ******************************************************************************/

;
; The modules in this file are included in the libraries, and may be replaced
; by any user-defined modules that define the PUBLIC symbol _program_start or
; a user defined start symbol.
; To override the cstartup defined in the library, simply add your modified
; version to the workbench project.
;
; The vector table is normally located at address 0.
;
; When debugging in RAM, it can be located in RAM with at least a 128 byte
; alignment, 256 byte alignment is requied if all interrupt vectors are in use.
;
; The name "__vector_table" has special meaning for C-SPY:
; it is where the SP start value is found, and the NVIC vector
; table register (VTOR) is initialized to this address if != 0.
;
; Cortex-M version
;
        MODULE  ?cstartup

        ;; Forward declaration of sections.
        SECTION CSTACK:DATA:NOROOT(3)

        SECTION .intvec:CODE:NOROOT(8)

        EXTERN  __iar_program_start
        EXTERN  SystemInit
        PUBLIC  __vector_table
        PUBLIC  __vector_table_0x1c
        PUBLIC  __Vectors
        PUBLIC  __Vectors_End
        PUBLIC  __Vectors_Size

        DATA

__vector_table
        DCD     sfe(CSTACK)
        DCD     Reset_Handler

        DCD     NMI_Handler
        DCD     HardFault_Handler
        DCD     MemManage_Handler
        DCD     BusFault_Handler
        DCD     UsageFault_Handler
__vector_table_0x1c
        DCD     0
        DCD     0
        DCD     0
        DCD     0
        DCD     SVC_Handler
        DCD     DebugMon_Handler
        DCD     0
        DCD     PendSV_Handler
        DCD     SysTick_Handler

        ; External Interrupts

        DCD EMU_IRQHandler  ; 0: EMU Interrupt
        DCD 0               ; 1: Reserved Interrupt
        DCD WDOG0_IRQHandler  ; 2: WDOG0 Interrupt
        DCD WDOG1_IRQHandler  ; 3: WDOG1 Interrupt
        DCD 0               ; 4: Reserved Interrupt
        DCD 0               ; 5: Reserved Interrupt
        DCD 0               ; 6: Reserved Interrupt
        DCD 0               ; 7: Reserved Interrupt
        DCD 0               ; 8: Reserved Interrupt
        DCD LDMA_IRQHandler  ; 9: LDMA Interrupt
        DCD GPIO_EVEN_IRQHandler  ; 10: GPIO_EVEN Interrupt
        DCD TIMER0_IRQHandler  ; 11: TIMER0 Interrupt
        DCD USART0_RX_IRQHandler  ; 12: USART0_RX Interrupt
        DCD USART0_TX_IRQHandler  ; 13: USART0_TX Interrupt
        DCD ACMP0_IRQHandler  ; 14: ACMP0 Interrupt
        DCD ADC0_IRQHandler  ; 15: ADC0 Interrupt
        DCD IDAC0_IRQHandler  ; 16: IDAC0 Interrupt
        DCD I2C0_IRQHandler  ; 17: I2C0 Interrupt
        DCD GPIO_ODD_IRQHandler  ; 18: GPIO_ODD Interrupt
        DCD TIMER1_IRQHandler  ; 19: TIMER1 Interrupt
        DCD USART1_RX_IRQHandler  ; 20: USART1_RX Interrupt
        DCD USART1_TX_IRQHandler  ; 21: USART1_TX Interrupt
        DCD LEUART0_IRQHandler  ; 22: LEUART0 Interrupt
        DCD PCNT0_IRQHandler  ; 23: PCNT0 Interrupt
        DCD CMU_IRQHandler  ; 24: CMU Interrupt
        DCD MSC_IRQHandler  ; 25: MSC Interrupt
        DCD CRYPTO0_IRQHandler  ; 26: CRYPTO0 Interrupt
        DCD LETIMER0_IRQHandler  ; 27: LETIMER0 Interrupt
        DCD 0               ; 28: Reserved Interrupt
        DCD 0               ; 29: Reserved Interrupt
        DCD RTCC_IRQHandler  ; 30: RTCC Interrupt
        DCD 0               ; 31: Reserved Interrupt
        DCD CRYOTIMER_IRQHandler  ; 32: CRYOTIMER Interrupt
        DCD 0               ; 33: Reserved Interrupt
        DCD FPUEH_IRQHandler  ; 34: FPUEH Interrupt
        DCD SMU_IRQHandler  ; 35: SMU Interrupt
        DCD WTIMER0_IRQHandler  ; 36: WTIMER0 Interrupt
        DCD WTIMER1_IRQHandler  ; 37: WTIMER1 Interrupt
        DCD PCNT1_IRQHandler  ; 38: PCNT1 Interrupt
        DCD PCNT2_IRQHandler  ; 39: PCNT2 Interrupt
        DCD USART2_RX_IRQHandler  ; 40: USART2_RX Interrupt
        DCD USART2_TX_IRQHandler  ; 41: USART2_TX Interrupt
        DCD I2C1_IRQHandler  ; 42: I2C1 Interrupt
        DCD USART3_RX_IRQHandler  ; 43: USART3_RX Interrupt
        DCD USART3_TX_IRQHandler  ; 44: USART3_TX Interrupt
        DCD VDAC0_IRQHandler  ; 45: VDAC0 Interrupt
        DCD CSEN_IRQHandler  ; 46: CSEN Interrupt
        DCD LESENSE_IRQHandler  ; 47: LESENSE Interrupt
        DCD CRYPTO1_IRQHandler  ; 48: CRYPTO1 Interrupt
        DCD TRNG0_IRQHandler  ; 49: TRNG0 Interrupt
        DCD 0               ; 50: Reserved Interrupt

__Vectors_End
__Vectors       EQU   __vector_table
__Vectors_Size  EQU   __Vectors_End - __Vectors


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;
;; Default interrupt handlers.
;;
        THUMB

        PUBWEAK Reset_Handler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reset_Handler
        LDR     R0, =SystemInit
        BLX     R0
        LDR     R0, =__iar_program_start
        BX      R0

        PUBWEAK NMI_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
NMI_Handler
        B NMI_Handler

        PUBWEAK HardFault_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
HardFault_Handler
        B HardFault_Handler

        PUBWEAK MemManage_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
MemManage_Handler
        B MemManage_Handler

        PUBWEAK BusFault_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
BusFault_Handler
        B BusFault_Handler

        PUBWEAK UsageFault_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
UsageFault_Handler
        B UsageFault_Handler

        PUBWEAK SVC_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
SVC_Handler
        B SVC_Handler

        PUBWEAK DebugMon_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
DebugMon_Handler
        B DebugMon_Handler

        PUBWEAK PendSV_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
PendSV_Handler
        B PendSV_Handler

        PUBWEAK SysTick_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
SysTick_Handler
        B SysTick_Handler

        ; Device specific interrupt handlers

        PUBWEAK EMU_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
EMU_IRQHandler
        B EMU_IRQHandler

        PUBWEAK WDOG0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
WDOG0_IRQHandler
        B WDOG0_IRQHandler

        PUBWEAK WDOG1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
WDOG1_IRQHandler
        B WDOG1_IRQHandler

        PUBWEAK LDMA_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
LDMA_IRQHandler
        B LDMA_IRQHandler

        PUBWEAK GPIO_EVEN_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GPIO_EVEN_IRQHandler
        B GPIO_EVEN_IRQHandler

        PUBWEAK TIMER0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TIMER0_IRQHandler
        B TIMER0_IRQHandler

        PUBWEAK USART0_RX_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
USART0_RX_IRQHandler
        B USART0_RX_IRQHandler

        PUBWEAK USART0_TX_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
USART0_TX_IRQHandler
        B USART0_TX_IRQHandler

        PUBWEAK ACMP0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
ACMP0_IRQHandler
        B ACMP0_IRQHandler

        PUBWEAK ADC0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
ADC0_IRQHandler
        B ADC0_IRQHandler

        PUBWEAK IDAC0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
IDAC0_IRQHandler
        B IDAC0_IRQHandler

        PUBWEAK I2C0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
I2C0_IRQHandler
        B I2C0_IRQHandler

        PUBWEAK GPIO_ODD_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GPIO_ODD_IRQHandler
        B GPIO_ODD_IRQHandler

        PUBWEAK TIMER1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TIMER1_IRQHandler
        B TIMER1_IRQHandler

        PUBWEAK USART1_RX_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
USART1_RX_IRQHandler
        B USART1_RX_IRQHandler

        PUBWEAK USART1_TX_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
USART1_TX_IRQHandler
        B USART1_TX_IRQHandler

        PUBWEAK LEUART0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
LEUART0_IRQHandler
        B LEUART0_IRQHandler

        PUBWEAK PCNT0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
PCNT0_IRQHandler
        B PCNT0_IRQHandler

        PUBWEAK CMU_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
CMU_IRQHandler
        B CMU_IRQHandler

        PUBWEAK MSC_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
MSC_IRQHandler
        B MSC_IRQHandler

        PUBWEAK CRYPTO0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
CRYPTO0_IRQHandler
        B CRYPTO0_IRQHandler

        PUBWEAK LETIMER0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
LETIMER0_IRQHandler
        B LETIMER0_IRQHandler

        PUBWEAK RTCC_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
RTCC_IRQHandler
        B RTCC_IRQHandler

        PUBWEAK CRYOTIMER_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
CRYOTIMER_IRQHandler
        B CRYOTIMER_IRQHandler

        PUBWEAK FPUEH_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
FPUEH_IRQHandler
        B FPUEH_IRQHandler

        PUBWEAK SMU_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SMU_IRQHandler
        B SMU_IRQHandler

        PUBWEAK WTIMER0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
WTIMER0_IRQHandler
        B WTIMER0_IRQHandler

        PUBWEAK WTIMER1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
WTIMER1_IRQHandler
        B WTIMER1_IRQHandler

        PUBWEAK PCNT1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
PCNT1_IRQHandler
        B PCNT1_IRQHandler

        PUBWEAK PCNT2_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
PCNT2_IRQHandler
        B PCNT2_IRQHandler

        PUBWEAK USART2_RX_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
USART2_RX_IRQHandler
        B USART2_RX_IRQHandler

        PUBWEAK USART2_TX_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
USART2_TX_IRQHandler
        B USART2_TX_IRQHandler

        PUBWEAK I2C1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
I2C1_IRQHandler
        B I2C1_IRQHandler

        PUBWEAK USART3_RX_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
USART3_RX_IRQHandler
        B USART3_RX_IRQHandler

        PUBWEAK USART3_TX_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
USART3_TX_IRQHandler
        B USART3_TX_IRQHandler

        PUBWEAK VDAC0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VDAC0_IRQHandler
        B VDAC0_IRQHandler

        PUBWEAK CSEN_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
CSEN_IRQHandler
        B CSEN_IRQHandler

        PUBWEAK LESENSE_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
LESENSE_IRQHandler
        B LESENSE_IRQHandler

        PUBWEAK CRYPTO1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
CRYPTO1_IRQHandler
        B CRYPTO1_IRQHandler

        PUBWEAK TRNG0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TRNG0_IRQHandler
        B TRNG0_IRQHandler


        END
