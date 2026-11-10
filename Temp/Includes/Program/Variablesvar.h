/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1791905356_1_
#define _BUR_1791905356_1_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL struct LedStateMachine LedState;
_BUR_LOCAL plcbit mme;
_BUR_LOCAL struct DriveStateMachine EVIRD;
_BUR_LOCAL struct DoorStateMachine DoorState;
_BUR_LOCAL signed short act_speed;
_BUR_LOCAL signed short k;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Program/Variables.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Library/Library.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1791905356_1_ */

