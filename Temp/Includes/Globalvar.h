/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1791903804_1_
#define _BUR_1791903804_1_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_GLOBAL plcbit LedRandom;
_GLOBAL signed short speed;
_GLOBAL plcbit LedAll_Buttons[4];
_GLOBAL plcbit LedAll[4];
_GLOBAL plcbit gAxis01_ModuleOk;
_GLOBAL struct SdcHwCfg_typ gAxis01_HW;
_GLOBAL struct SdcDrvIf16_typ gAxis01_DrvIf;
_GLOBAL struct SdcDiDoIf_typ gAxis01_DiDoIf;
_GLOBAL struct ACP10AXIS_typ gAxis01;
_GLOBAL plcbit blink;
_GLOBAL plcbit direction;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Global.var\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1791903804_1_ */

