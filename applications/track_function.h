#ifndef _TRACK_FUNCTION_H
#define	_TRACK_FUNCTION_H

#include "stm32f4xx.h"
#include "include.h"

void forward_pitch(float T);
void forward_roll(void);

void backward_pitch(void);
void backward_roll(void);

void position_track_pitch(float T);
void position_track_roll(float T);

void speed_track_roll(void);
void speed_track_pitch(float T);


#endif
