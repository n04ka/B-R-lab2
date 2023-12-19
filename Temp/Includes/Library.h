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
 #define ST_SWITCH_ON 35U
 #define ST_READY 33U
 #define ST_DISABLE 64U
 #define CMD_SWITCH_ON 7U
 #define CMD_SHUTDOWN 6U
 #define CMD_ENABLE 15U
 #define LowSpeed 400U
 #define HighSpeed 400U
 #define NormalSpeed 750U
 #define StartSpeed 300U
#else
 _GLOBAL_CONST unsigned short ST_SWITCH_ON;
 _GLOBAL_CONST unsigned short ST_READY;
 _GLOBAL_CONST unsigned short ST_DISABLE;
 _GLOBAL_CONST unsigned short CMD_SWITCH_ON;
 _GLOBAL_CONST unsigned short CMD_SHUTDOWN;
 _GLOBAL_CONST unsigned short CMD_ENABLE;
 _GLOBAL_CONST unsigned short LowSpeed;
 _GLOBAL_CONST unsigned short HighSpeed;
 _GLOBAL_CONST unsigned short NormalSpeed;
 _GLOBAL_CONST unsigned short StartSpeed;
#endif




/* Datatypes and datatypes of function blocks */
typedef enum states
{	ST_INIT,
	ST_UNKNOWN,
	ST_OPEN,
	ST_CLOSE,
	ST_ACC_POS,
	ST_ACC_NEG,
	ST_POS,
	ST_NEG,
	ST_DEC_POS,
	ST_DEC_NEG
} states;

typedef enum drivestates
{	ST_SWITCH = 3,
	ST_RDY = 7,
	ST_DIS = 17
} drivestates;

typedef struct FB_DriveSM
{
	/* VAR_INPUT (analog) */
	unsigned short state;
	/* VAR_OUTPUT (analog) */
	unsigned short command;
	signed short speed;
	/* VAR (analog) */
	unsigned short temp;
	/* VAR_INPUT (digital) */
	plcbit enable;
} FB_DriveSM_typ;

typedef struct FB_DoorSM
{
	/* VAR_INPUT (analog) */
	enum states state;
	/* VAR_OUTPUT (analog) */
	signed short speed;
	/* VAR_INPUT (digital) */
	plcbit sw0;
	plcbit sw1;
	plcbit sw2;
	plcbit sw3;
	plcbit direction;
} FB_DoorSM_typ;

typedef struct FB_LedSM
{
	/* VAR_INPUT (analog) */
	enum states state;
	/* VAR (analog) */
	signed short timer;
	/* VAR_OUTPUT (digital) */
	plcbit led0;
	plcbit led1;
	plcbit led2;
	plcbit led3;
} FB_LedSM_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void FB_DriveSM(struct FB_DriveSM* inst);
_BUR_PUBLIC void FB_DoorSM(struct FB_DoorSM* inst);
_BUR_PUBLIC void FB_LedSM(struct FB_LedSM* inst);


#ifdef __cplusplus
};
#endif
#endif /* _LIBRARY_ */

