

#include <bur/plctypes.h>
#ifdef __cplusplus
	extern "C"
	{
#endif
#include "Library.h"
#ifdef __cplusplus
	};
#endif
/* State mashine for door control */
void DoorStateMachine(struct DoorStateMachine* inst)
{
	int high = 750;
	int mid = 500;
	int low = 250;
	int false = 0;
	int true = 1;
	switch(inst->state)
	{
		case 0:
			{
				inst->state = 1;
				break;
			}
		case 1:
			if (inst->direction==false && inst->sw1==true){
				inst->state = 2;
				inst->speed = 0;
				break;
			}
			if (inst->direction==true && inst->sw4==true){
				inst->state = 3;
				inst->speed = 0;
				break;
			}
			break;
		case 2:
			if (inst->direction==false){
				inst->state = 4;
				inst->speed = low;
				break;
			}
			break;
		case 3:
			if (inst->direction==true){
				inst->state = 5;
				inst->speed = -low;
				break;
			}
			break;
		case 4:
			if (inst->sw2==true){
				inst->state = 6;
				inst->speed = mid;
				break;
			}
			if (inst->direction==true){
				inst->state = 9;
				inst->speed = -high;
				break;	
			}
			break;
		case 5:
			if (inst->sw3==true){
				inst->state = 7;
				inst->speed = -mid;
				break;
			}
			if (inst->direction==false){
				inst->state = 8;
				inst->speed = high;
				break;	
			}
			break;
		case 6:
			if (inst->sw3==true){
				inst->state = 8;
				inst->speed = high;
				break;
			}
			if (inst->direction==true){
				inst->state = 7;
				inst->speed = -mid;
				break;	
			}
			break;
		case 7:
			if (inst->sw2==true){
				inst->state = 9;
				inst->speed = -high;
				break;
			}
			if (inst->direction==false){
				inst->state = 6;
				inst->speed = mid;
				break;	
			}
			break;
		case 8:
			if (inst->sw4==true){
				inst->state = 3;
				inst->speed = 0;
				break;
			}
				break;
		case 9:
			if (inst->sw1==true){
				inst->state = 2;
				inst->speed = 0;
				break;
			}
			
				
					
	}
	inst->state_out = inst->state;
	/*TODO: Add your code here*/
}



