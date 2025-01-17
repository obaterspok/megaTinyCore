/* core_devices  - a part of Arduino.h for megaTinyCore 2.3.0 and later and DxCore 1.4.0, but
 * which takes ion much greater importance (and girth) with the toolchain update in 2.6 and 1.6)
 * This is directly included by Arduino.h and nothing else; it just moves
 * clutter out of that file. You should not directly include this file ever.
 *
 * Spence Konde 2021 -2022- megaTinyCore and DxCore are free software (LGPL 2.1)
 * See LICENSE.txt for full legal boilerplate if you must */

#ifndef Core_Devices_h
#define Core_Devices_h
#include <avr/io.h>
#include <core_parameters.h>
#define PROGMEM_MAPPED // All modern tinyAVRs have mapped flash.
//#defines to identify part families
#if   defined(__AVR_ATtiny3227__)
  #define MEGATINYCORE_MCU 3227
  #define MEGATINYCORE_SERIES 2
  #define __AVR_ATtinyx27__
  #define __AVR_ATtinyxy7__
  #define _AVR_FLASH__ 32
#elif defined(__AVR_ATtiny1627__)
  #define MEGATINYCORE_MCU 1627
  #define MEGATINYCORE_SERIES 2
  #define __AVR_ATtinyx27__
  #define __AVR_ATtinyxy7__
  #define _AVR_FLASH__ 16
#elif defined(__AVR_ATtiny827__)
  #define MEGATINYCORE_MCU 827
  #define MEGATINYCORE_SERIES 2
  #define __AVR_ATtinyx27__
  #define __AVR_ATtinyxy7__
  #define _AVR_FLASH__ 8
#elif defined(__AVR_ATtiny427__)
  #define MEGATINYCORE_MCU 427
  #define MEGATINYCORE_SERIES 2
  #define __AVR_ATtinyx27__
  #define __AVR_ATtinyxy7__
  #define _AVR_FLASH__ 4
#elif defined(__AVR_ATtiny3226__)
  #define MEGATINYCORE_MCU 3226
  #define MEGATINYCORE_SERIES 2
  #define __AVR_ATtinyx26__
  #define __AVR_ATtinyxy6__
  #define _AVR_FLASH__ 32
#elif defined(__AVR_ATtiny1626__)
  #define MEGATINYCORE_MCU 1626
  #define MEGATINYCORE_SERIES 2
  #define __AVR_ATtinyx26__
  #define __AVR_ATtinyxy6__
  #define _AVR_FLASH__ 16
#elif defined(__AVR_ATtiny826__)
  #define MEGATINYCORE_MCU 826
  #define MEGATINYCORE_SERIES 2
  #define __AVR_ATtinyx26__
  #define __AVR_ATtinyxy6__
  #define _AVR_FLASH__ 8
#elif defined(__AVR_ATtiny426__)
  #define MEGATINYCORE_MCU 426
  #define MEGATINYCORE_SERIES 2
  #define __AVR_ATtinyx26__
  #define __AVR_ATtinyxy6__
  #define _AVR_FLASH__ 4
#elif defined(__AVR_ATtiny3224__)
  #define MEGATINYCORE_MCU 3224
  #define MEGATINYCORE_SERIES 2
  #define __AVR_ATtinyx24__
  #define __AVR_ATtinyxy4__
  #define _AVR_FLASH__ 32
#elif defined(__AVR_ATtiny1624__)
  #define MEGATINYCORE_MCU 1624
  #define MEGATINYCORE_SERIES 2
  #define __AVR_ATtinyx24__
  #define __AVR_ATtinyxy4__
  #define _AVR_FLASH__ 16
#elif defined(__AVR_ATtiny824__)
  #define MEGATINYCORE_MCU 824
  #define MEGATINYCORE_SERIES 2
  #define __AVR_ATtinyx24__
  #define __AVR_ATtinyxy4__
  #define _AVR_FLASH__ 8
#elif defined(__AVR_ATtiny424__)
  #define MEGATINYCORE_MCU 424
  #define MEGATINYCORE_SERIES 2
  #define __AVR_ATtinyx24__
  #define __AVR_ATtinyxy4__
  #define _AVR_FLASH__ 4
#elif defined(__AVR_ATtiny3217__)
  #define MEGATINYCORE_MCU 3217
  #define MEGATINYCORE_SERIES 1
  #define __AVR_ATtinyx17__
  #define __AVR_ATtinyxy7__
  #define _AVR_FLASH__ 32
#elif defined(__AVR_ATtiny1617__)
  #define MEGATINYCORE_MCU 1617
  #define MEGATINYCORE_SERIES 1
  #define __AVR_ATtinyx17__
  #define __AVR_ATtinyxy7__
  #define _AVR_FLASH__ 2
#elif defined(__AVR_ATtiny817__)
  #define MEGATINYCORE_MCU 817
  #define MEGATINYCORE_SERIES 1
  #define __AVR_ATtinyx17__
  #define __AVR_ATtinyxy7__
  #define _AVR_FLASH__ 2
#elif defined(__AVR_ATtiny417__)
  #define MEGATINYCORE_MCU 417
  #define MEGATINYCORE_SERIES 1
  #define __AVR_ATtinyx17__
  #define __AVR_ATtinyxy7__
  #define _AVR_FLASH__ 2
#elif defined(__AVR_ATtiny3207__)
  #define MEGATINYCORE_MCU 3207
  #define MEGATINYCORE_SERIES 0
  #define __AVR_ATtinyx07__
  #define __AVR_ATtinyxy7__
  #define _AVR_FLASH__ 2
#elif defined(__AVR_ATtiny1607__)
  #define MEGATINYCORE_MCU 1607
  #define MEGATINYCORE_SERIES 0
  #define __AVR_ATtinyx07__
  #define __AVR_ATtinyxy7__
  #define _AVR_FLASH__ 2
#elif defined(__AVR_ATtiny807__)
  #define MEGATINYCORE_MCU 807
  #define MEGATINYCORE_SERIES 0
  #define __AVR_ATtinyx07__
  #define __AVR_ATtinyxy7__
  #define _AVR_FLASH__ 2
#elif defined(__AVR_ATtiny407__)
  #define MEGATINYCORE_MCU 407
  #define MEGATINYCORE_SERIES 0
  #define __AVR_ATtinyx07__
  #define __AVR_ATtinyxy7__
  #define _AVR_FLASH__ 2
#elif defined(__AVR_ATtiny3216__)
  #define MEGATINYCORE_MCU 3216
  #define MEGATINYCORE_SERIES 1
  #define __AVR_ATtinyx06__
  #define __AVR_ATtinyxy6__
  #define _AVR_FLASH__ 2
#elif defined(__AVR_ATtiny1616__)
  #define MEGATINYCORE_MCU 1616
  #define MEGATINYCORE_SERIES 1
  #define __AVR_ATtinyx06__
  #define __AVR_ATtinyxy6__
  #define _AVR_FLASH__ 2
#elif defined(__AVR_ATtiny816__)
  #define MEGATINYCORE_MCU 816
  #define MEGATINYCORE_SERIES 1
  #define __AVR_ATtinyx06__
  #define __AVR_ATtinyxy6__
  #define _AVR_FLASH__ 2
#elif defined(__AVR_ATtiny416__)
  #define MEGATINYCORE_MCU 416
  #define MEGATINYCORE_SERIES 1
  #define __AVR_ATtinyx16__
  #define __AVR_ATtinyxy6__
  #define _AVR_FLASH__ 2
#elif defined(__AVR_ATtiny1606__)
  #define MEGATINYCORE_MCU 1606
  #define MEGATINYCORE_SERIES 0
  #define __AVR_ATtinyx06__
  #define __AVR_ATtinyxy6__
  #define _AVR_FLASH__ 2
#elif defined(__AVR_ATtiny806__)
  #define MEGATINYCORE_MCU 806
  #define MEGATINYCORE_SERIES 0
  #define __AVR_ATtinyx06__
  #define __AVR_ATtinyxy6__
  #define _AVR_FLASH__ 2
#elif defined(__AVR_ATtiny406__)
  #define MEGATINYCORE_MCU 406
  #define MEGATINYCORE_SERIES 0
  #define __AVR_ATtinyx06__
  #define __AVR_ATtinyxy6__
  #define _AVR_FLASH__ 2
#elif defined(__AVR_ATtiny214__)
  #define MEGATINYCORE_MCU 214
  #define MEGATINYCORE_SERIES 1
  #define __AVR_ATtinyx14__
  #define __AVR_ATtinyxy4__
  #define _AVR_FLASH__ 2
#elif defined(__AVR_ATtiny1614__)
  #define MEGATINYCORE_MCU 1614
  #define MEGATINYCORE_SERIES 1
  #define __AVR_ATtinyx14__
  #define __AVR_ATtinyxy4__
  #define _AVR_FLASH__ 2
#elif defined(__AVR_ATtiny814__)
  #define MEGATINYCORE_MCU 814
  #define MEGATINYCORE_SERIES 1
  #define __AVR_ATtinyx14__
  #define __AVR_ATtinyxy4__
  #define _AVR_FLASH__ 2
#elif defined(__AVR_ATtiny414__)
  #define MEGATINYCORE_MCU 414
  #define MEGATINYCORE_SERIES 1
  #define __AVR_ATtinyx14__
  #define __AVR_ATtinyxy4__
  #define _AVR_FLASH__ 2
#elif defined(__AVR_ATtiny204__)
  #define MEGATINYCORE_MCU 204
  #define MEGATINYCORE_SERIES 0
  #define __AVR_ATtinyx04__
  #define __AVR_ATtinyxy4__
  #define _AVR_FLASH__ 2
#elif defined(__AVR_ATtiny804__)
  #define MEGATINYCORE_MCU 804
  #define MEGATINYCORE_SERIES 0
  #define __AVR_ATtinyx04__
  #define __AVR_ATtinyxy4__
  #define _AVR_FLASH__ 2
#elif defined(__AVR_ATtiny404__)
  #define MEGATINYCORE_MCU 404
  #define MEGATINYCORE_SERIES 0
  #define __AVR_ATtinyx04__
  #define __AVR_ATtinyxy4__
  #define _AVR_FLASH__ 2
#elif defined(__AVR_ATtiny1604__)
  #define MEGATINYCORE_MCU 1604
  #define MEGATINYCORE_SERIES 0
  #define __AVR_ATtinyx04__
  #define __AVR_ATtinyxy4__
  #define _AVR_FLASH__ 2
#elif defined(__AVR_ATtiny212__)
  #define MEGATINYCORE_MCU 212
  #define MEGATINYCORE_SERIES 1
  #define __AVR_ATtinyx12__
  #define __AVR_ATtinyxy2__
  #define _AVR_FLASH__ 2
#elif defined(__AVR_ATtiny412__)
  #define MEGATINYCORE_MCU 412
  #define MEGATINYCORE_SERIES 1
  #define __AVR_ATtinyx12__
  #define __AVR_ATtinyxy2__
  #define _AVR_FLASH__ 2
#elif defined(__AVR_ATtiny202__)
  #define MEGATINYCORE_MCU 202
  #define MEGATINYCORE_SERIES 0
  #define __AVR_ATtinyx02__
  #define __AVR_ATtinyxy2__
  #define _AVR_FLASH__ 2
#elif defined(__AVR_ATtiny402__)
  #define MEGATINYCORE_MCU 402
  #define MEGATINYCORE_SERIES 0
  #define __AVR_ATtinyx02__
  #define __AVR_ATtinyxy2__
  #define _AVR_FLASH__ 2
#else
  #error "Can't-happen: unknown chip somehow being used!"
#endif

#if MEGATINYCORE_SERIES == 0
  #define _AVR_FAMILY "T0"
  #define __AVR_TINY_0__
#elif MEGATINYCORE_SERIES == 1
  #define _AVR_FAMILY "T1"
  #define __AVR_TINY_1__
#elif MEGATINYCORE_SERIES == 2
  #define _AVR_FAMILY "T2"
  #define __AVR_TINY_2__
#endif

#if defined(AC2)
  #define _AVR_AC_COUNT      (3)
#elif defined(AC1)
  #define _AVR_AC_COUNT      (2)
#elif defined(AC0)
  #define _AVR_AC_COUNT      (1)
#else
  #define _AVR_AC_COUNT      (0)
#endif

#if defined(ADC1)
  #define _AVR_ADC_COUNT     (2)
#elif defined(ADC0)
  #define _AVR_ADC_COUNT     (1)
#else
  #define _AVR_ADC_COUNT     (0)
  #warning "No ADC? No supported parts exist, something is wrong"
#endif


#if defined(OPAMP2)
  #define _AVR_OPAMP_COUNT   (3)
#elif defined(OPAMP1)
  #define _AVR_OPAMP_COUNT   (2)
#elif defined(OPAMP0)
  #define _AVR_OPAMP_COUNT   (1)
#else
  #define _AVR_OPAMP_COUNT   (0)
#endif


#if defined(CCL_TRUTH4)
  #define _AVR_LUT_COUNT     (6)
#elif defined(CCL_TRUTH2)
  #define _AVR_LUT_COUNT     (4)
#elif defined(CCL_TRUTH0)
  #define _AVR_LUT_COUNT     (2)
#else
  #warning "No AC? No supported parts exist, something is wrong"
#endif


#if defined(TCA1)
  #define _AVR_TCA_COUNT     (2)
#elif defined(TCA0)
  #define _AVR_TCA_COUNT     (1)
#else
  #warning "No TCA? No supported parts exist, something is wrong"
#endif

#if defined(TCB5)
  #define _AVR_TCB_COUNT     (6)
#elif defined(TCB4)
  #define _AVR_TCB_COUNT     (5)
#elif defined(TCB3)
  #define _AVR_TCB_COUNT     (4)
#elif defined(TCB2)
  #define _AVR_TCB_COUNT     (3)
#elif defined(TCB1)
  #define _AVR_TCB_COUNT     (2)
#elif defined(TCB0)
  #define _AVR_TCB_COUNT     (1)
#else
  #warning "No TCBs? No such parts exist, something is wrong"
#endif


#if defined(TCD1)
  #define _AVR_TCD_COUNT     (1)
#else
  #define _AVR_TCD_COUNT     (0)
#endif

#if defined(TWI1)
  #define _AVR_TWI_COUNT     (2)
#elif defined(TWI0)
  #define _AVR_TWI_COUNT     (1)
#else
  #define _AVR_TWI_COUNT     (0)
  #warning "No TWI? No supported parts like that exist..."
#endif

#if defined(USART5)
  #define _AVR_USART_COUNT     (6)
#elif defined(USART4)
  #define _AVR_USART_COUNT     (5)
#elif defined(USART3)
  #define _AVR_USART_COUNT     (4)
#elif defined(USART2)
  #define _AVR_USART_COUNT     (3)
#elif defined(USART1)
  #define _AVR_USART_COUNT     (2)
#elif defined(USART0)
  #define _AVR_USART_COUNT     (1)
#else
  #define _AVR_USART_COUNT     (0)
  #warning "No USARTs? No such parts exist, something is wrong";
#endif




/* Used for AttachInterrupt to reduce RAM use. */
#ifdef __AVR_ATtinyxy4__
  #define PORTB_PINS 4
  #define _AVR_PINCOUNT 14
#endif
#ifdef __AVR_ATtinyxy6__
  #define PORTB_PINS 6
  #define PORTC_PINS 4
  #define _AVR_PINCOUNT 20
#endif
#ifdef __AVR_ATtinyxy7__
  #define PORTB_PINS 8
  #define PORTC_PINS 6
  #define _AVR_PINCOUNT 24
#endif
#ifdef __AVR_ATtinyxy2__
  #define _AVR_PINCOUNT 8
#endif


// #define OUTPUT_PULLUP 3  // not implemented

/* PORT names and the NOT_A_* definitions - used EVERYWHERE! */

#define NOT_A_PIN 255
#define NOT_A_PORT 255
#define NOT_AN_INTERRUPT 255
#define NOT_A_MUX 255
#define MUX_NONE 128

#define PA 0
#define PB 1
#define PC 2
#define PD 3
#define PE 4
#define PF 5
#define PG 6
#define NUM_TOTAL_PORTS 7


#if MEGATINYCORE_SERIES <= 2
  #define RTC_CLKSEL_OSC32K_gc  RTC_CLKSEL_INT32K_gc
  #define RTC_CLKSEL_OSC1K_gc   RTC_CLKSEL_INT1K_gc
  #define RTC_CLKSEL_XTAL32K_gc RTC_CLKSEL_TOSC32K_gc
#endif

#if MEGATINYCORE_SERIES == 2
/* Initial version of the IO headers omits these definitions!
 * then some versions had them, then the removed them all and stopped
 * performing the cal at all (which was not as usuful as on 0/1-series)
 */
 #if !defined(SIGROW_OSC16ERR3V)
    #define SIGROW_OSC16ERR3V (SIGROW.reserved_3[badCall("the SIGROW does not contain error information about the main oscillator except on very early versions")]
  #endif
  #if !defined(SIGROW_OSC16ERR5V)
    #define SIGROW_OSC16ERR5V (SIGROW.reserved_3[badCall("the SIGROW does not contain error information about the main oscillator except on very early versions")]
  #endif
  #if !defined(SIGROW_OSC20ERR3V)
    #define SIGROW_OSC20ERR3V (SIGROW.reserved_3[badCall("the SIGROW does not contain error information about the main oscillator except on very early versions")]
  #endif
  #if !defined(SIGROW_OSC20ERR5V)
    #define SIGROW_OSC20ERR5V (SIGROW.reserved_3[badCall("the SIGROW does not contain error information about the main oscillator except on very early versions")]
  #endif
#else
  /* 0/1-series, on the other hand, doesm't have these defined even though they are present */
  #if !defined(SIGROW_OSCCAL16M0)
    #define SIGROW_OSCCAL16M0 _SFR_MEM8(0x1118)
  #endif
  #if !defined(SIGROW_OSCCAL16M1)
    #define SIGROW_OSCCAL16M1 _SFR_MEM8(0x1119)
  #endif
  #if !defined(SIGROW_OSCCAL20M0)
    #define SIGROW_OSCCAL20M0 _SFR_MEM8(0x111A)
  #endif
  #if !defined(SIGROW_OSCCAL20M1)
    #define SIGROW_OSCCAL20M1 _SFR_MEM8(0x111B)
  #endif
  // Also, the 0/1-series have useless names for the event channels. But we can define the 2-series names for them!
  // This makes it easier to write portable code without using the event library and incurring that overhead.

  #if defined(EVSYS_SYNCUSER0)
    #define EVSYS_USERTCA0CNTA EVSYS_SYNCUSER0
  #endif
  #if defined(EVSYS_SYNCUSER1)
    #define EVSYS_USERUSART0IRDA EVSYS_SYNCUSER1
  #endif
  #if defined(EVSYS_ASYNCUSER0)
    #define EVSYS_USERTCB0CAPT EVSYS_ASYNCUSER0
  #endif
  #if defined(EVSYS_ASYNCUSER1)
    #define EVSYS_USERADC0START EVSYS_ASYNCUSER1
  #endif
  #if defined(EVSYS_ASYNCUSER2)
    #define EVSYS_USERCCLLUT0A EVSYS_ASYNCUSER2
  #endif
  #if defined(EVSYS_ASYNCUSER3)
    #define EVSYS_USERCCLLUT1A EVSYS_ASYNCUSER3
  #endif
  #if defined(EVSYS_ASYNCUSER4)
    #define EVSYS_USERCCLLUT0B EVSYS_ASYNCUSER4
  #endif
  #if defined(EVSYS_ASYNCUSER5)
    #define EVSYS_USERCCLLUT1B EVSYS_ASYNCUSER5
  #endif
  #if defined(EVSYS_ASYNCUSER6)
    #define EVSYS_USERTCD0INPUTA EVSYS_ASYNCUSER6
  #endif
  #if defined(EVSYS_ASYNCUSER7)
    #define EVSYS_USERTCD0INPUTB EVSYS_ASYNCUSER7
  #endif
  #if defined(EVSYS_ASYNCUSER8)
    #define EVSYS_USEREVSYSEVOUTA EVSYS_ASYNCUSER8
  #endif
  #if defined(EVSYS_ASYNCUSER9)
    #define EVSYS_USEREVSYSEVOUTB EVSYS_ASYNCUSER9
  #endif
  #if defined(EVSYS_ASYNCUSER10)
    #define EVSYS_USEREVSYSEVOUTC EVSYS_ASYNCUSER10
  #endif
  #if defined(EVSYS_ASYNCUSER11)
    #define EVSYS_USERTCB1CAPT EVSYS_ASYNCUSER11
  #endif
  #if defined(EVSYS_ASYNCUSER12)
    #define EVSYS_USERADC1START EVSYS_ASYNCUSER12
  #endif

#endif

#define CLOCK_TUNE_START (USER_SIGNATURES_SIZE - 12)

/* Microchip has shown a tendency to rename registers bitfields and similar between product lines, even when the behavior is identical.
 * This is a major hindrance to writing highly portable code which I assume is what most people wish to do. It certainly beats having
 * to run code through find replace making trivial changes, forcing a fork where you would rather not have one.
 * Since having to adjust code to match the arbitrary and capricious whims of the header generation scheme kinda sucks, we try to catch
 * all the places they do this and provide a macro for backwards compatibility. For some bizarre reason you may wish to turn this off
 * maybe in preparation for jumping to another development environment like Microchip Studio that does not use Arduino cores.
 * Instead of backwards compatibilily, you want the opposite, which some wags have called "Backwards combatibility"
 * Defining BACKWARD_COMBATIBILITY_MODE turns off all of these definitions that paper over name changes.
 */

/* Add a feature - yay!
 * Rename registers so people can't carry code back and forth - booo!
 */
#ifndef TCA_SINGLE_CNTEI_bm
  #define TCA_SINGLE_CNTEI_bm TCA_SINGLE_CNTAEI_bm
  #define TCA_SINGLE_EVACT_POSEDGE_gc TCA_SINGLE_EVACTA_CNT_POSEDGE_gc
  #define TCA_SINGLE_EVACT_CNT_ANYEDGE_gc TCA_SINGLE_EVACTA_CNT_ANYEDGE_gc
  #define TCA_SINGLE_EVACT_CNT_HIGHLVL_gc TCA_SINGLE_EVACTA_CNT_HIGHLVL_gc
  #define TCA_SINGLE_EVACT_UPDOWN_gc TCA_SINGLE_EVACTA_UPDOWN_gc
  #define TCB_CLKSEL_CLKDIV1_gc TCB_CLKSEL_DIV1_gc
  #define TCB_CLKSEL_CLKDIV2_gc TCB_CLKSEL_DIV2_gc
  #define TCB_CLKSEL_CLKTCA_gc TCB_CLKSEL_TCA0_gc
#else
  #define TCB_CLKSEL_DIV1_gc  TCB_CLKSEL_CLKDIV1_gc
  #define TCB_CLKSEL_DIV2_gc  TCB_CLKSEL_CLKDIV2_gc
  #define TCB_CLKSEL_TCA0_gc  TCB_CLKSEL_CLKTCA_gc
  #define TCB_CLKSEL_EVENT_gc  (badCall("This processor does not support TCB count on event mode. Only Dx, Ex, and 2-series tiny support that"))
#endif
/* Make sure we error out quickly if told to use an RTC timing option that isn't available. */
#if (defined(MILLIS_USE_TIMERRTC_XTAL) || defined(MILLIS_USE_TIMERRTC_XOSC))
  #if (MEGATINYCORE_SERIES == 0 || defined(__AVR_ATtinyxy2__))
    #error "Only the tinyAVR 1-series and 2-series parts with at least 14 pins support external RTC timebase"
  #endif
#endif
#endif
