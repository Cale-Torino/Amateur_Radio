;/***************************************************************************************
; FileName:        Detconst.inc
; Dependencies:    Header (.h) files if applicable, see below
; Processor:       dsPIC33Fxxxx
; Compiler:        MPLAB� C30 v3.00 or higher
;
; SOFTWARE LICENSE AGREEMENT:
; Microchip Technology Incorporated ("Microchip") retains all ownership and 
; intellectual property rights in the code accompanying this message and in all 
; derivatives hereto.  You may use this code, and any derivatives created by 
; any person or entity by or on your behalf, exclusively with Microchip's
; proprietary products.  Your acceptance and/or use of this code constitutes 
; agreement to the terms and conditions of this notice.
;
; CODE ACCOMPANYING THIS MESSAGE IS SUPPLIED BY MICROCHIP "AS IS".  NO 
; WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT NOT LIMITED 
; TO, IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY AND FITNESS FOR A 
; PARTICULAR PURPOSE APPLY TO THIS CODE, ITS INTERACTION WITH MICROCHIP'S 
; PRODUCTS, COMBINATION WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION. 
;
; YOU ACKNOWLEDGE AND AGREE THAT, IN NO EVENT, SHALL MICROCHIP BE LIABLE, WHETHER 
; IN CONTRACT, WARRANTY, TORT (INCLUDING NEGLIGENCE OR BREACH OF STATUTORY DUTY), 
; STRICT LIABILITY, INDEMNITY, CONTRIBUTION, OR OTHERWISE, FOR ANY INDIRECT, SPECIAL, 
; PUNITIVE, EXEMPLARY, INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, FOR COST OR EXPENSE OF 
; ANY KIND WHATSOEVER RELATED TO THE CODE, HOWSOEVER CAUSED, EVEN IF MICROCHIP HAS BEEN 
; ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE FULLEST EXTENT 
; ALLOWABLE BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO 
; THIS CODE, SHALL NOT EXCEED THE PRICE YOU PAID DIRECTLY TO MICROCHIP SPECIFICALLY TO 
; HAVE THIS CODE DEVELOPED.
;
; You agree that you are solely responsible for testing the code and 
; determining its suitability.  Microchip has no obligation to modify, test, 
; certify, or support the code.
;***************************************************************************************/

#ifndef DETCONST_INC
#define DETCONST_INC

    .equ LEFT_JUSTIFIED,         1     ; 16 bit input, right shift
    .equ RIGHT_JUSTIFIED,        0     ; 14 bit input, no right shift

    .equ NUM,                    100   ; mem buffer length
    .equ FLEN,                   80    ; length of the input buffer

    .equ BUFFER_DELAY,           5     ; during subframe count = 0
    .equ VALID_DIGIT_FRAME,      0     ; valid DTMF digit just detected
    .equ POSSIBLE_DIGIT_FRAME,   1     ; a valid digit may be present 
    .equ DIGIT_DETECTED,         2
    .equ PAUSE_AFTER_DIGIT_FRAME,4     ; silence period after the digit
    .equ NOT_A_DIGIT_FRAME,      6     ; frame not a part of DTMF digit
    .equ ERROR_FRAME,           -1     ; error in frame
    .equ TONE_SHAPE_TEST,        3     ; a tone has been detected
                                       ; shape test in progress

    .equ NO,                     0     ; false flag
    .equ YES,                    1     ; true flag

    .equ THR_STDTWI,        11626   ; threshold for standard twist (-5dB) 
    .equ THR_REVTWI,         4628   ; threshold for reverse twist (-8.6dB) 
    .equ THR_ROWREL,         1000   ; threshold for row's relative peak (-12dB)
    .equ THR_ROW2nd,          200   ; threshold for row's 2nd har ratio (-12dB)
    .equ THR_COLREL,         1000   ; threshold colomn's reative peak (-12dB)
    .equ THR_COL2nd,          200   ; threshold for col's 2nd harmonic (-12db)



    .global DTMFEnergyThreshold        ;Silence Threshold
    .global DTMFSilenceThreshold       ;Energy Threshold
    .global DTMFworkBuff               ;DTMF working Buffer
    .global DTMFframeType              ;frame type
    .global DTMFshapeTest              ;Enable/Disable Shape Test
    .global DTMFcurrentDigit           ;Current Digit detected
    .global DTMFdeclaredDigit          ;Digit stored in previous frame
    .global DTMFsubframeCount          ;counter for subframes
    .global DTMFsilenceCount           ;counter for silence
    .global DTMFinputType              ;input pattern type
    .global DTMFframe                  ;frame

#endif
;******************************************************************************
;    END OF FILE
;******************************************************************************

