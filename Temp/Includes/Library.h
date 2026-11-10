/* Automation Studio generated header file */
/* Do not edit ! */
/* Library  */

#ifndef _LIBRARY_
#define _LIBRARY_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Constants */
#ifdef _REPLACE_CONST
 #define STATE_SWITCHED_ON 35U
 #define STATE_DISABLED 64U
 #define STATE_READY 33U
 #define CMD_SHUTDOWN 6U
 #define CMD_ENABLED 15U
 #define CMD_DISABLE_VOLTAGE 0U
 #define CMD_SWITCHED_ON 7U
#else
 _GLOBAL_CONST unsigned short STATE_SWITCHED_ON;
 _GLOBAL_CONST unsigned short STATE_DISABLED;
 _GLOBAL_CONST unsigned short STATE_READY;
 _GLOBAL_CONST unsigned short CMD_SHUTDOWN;
 _GLOBAL_CONST unsigned short CMD_ENABLED;
 _GLOBAL_CONST unsigned short CMD_DISABLE_VOLTAGE;
 _GLOBAL_CONST unsigned short CMD_SWITCHED_ON;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct DriveStateMachine
{
	/* VAR_INPUT (analog) */
	unsigned short STATE;
	/* VAR_OUTPUT (analog) */
	unsigned short COM;
	/* VAR_INPUT (digital) */
	plcbit ENABLE;
} DriveStateMachine_typ;

typedef struct DoorStateMachine
{
	/* VAR_INPUT (analog) */
	signed short state;
	/* VAR_OUTPUT (analog) */
	signed short speed;
	signed short state_out;
	/* VAR_INPUT (digital) */
	plcbit sw1;
	plcbit sw2;
	plcbit sw3;
	plcbit sw4;
	plcbit direction;
} DoorStateMachine_typ;

typedef struct LedStateMachine
{
	/* VAR_INPUT (analog) */
	signed short state;
	/* VAR (analog) */
	unsigned short timer;
	/* VAR_OUTPUT (digital) */
	plcbit led1;
	plcbit led2;
	plcbit led3;
	plcbit led4;
} LedStateMachine_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void DriveStateMachine(struct DriveStateMachine* inst);
_BUR_PUBLIC void DoorStateMachine(struct DoorStateMachine* inst);
_BUR_PUBLIC void LedStateMachine(struct LedStateMachine* inst);


#ifdef __cplusplus
};
#endif
#endif /* _LIBRARY_ */

