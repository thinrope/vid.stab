/*
 *  transformtype.h
 *
 *  Copyright (C) Georg Martius - July 2011
 *
 *  This file is part of transcode, a video stream processing tool
 *      
 *  transcode is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *   
 *  transcode is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *   
 *  You should have received a copy of the GNU General Public License
 *  along with GNU Make; see the file COPYING.  If not, write to
 *  the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA. 
 *
 */
#ifndef __BOXBLUR_H
#define __BOXBLUR_H

#include "frameinfo.h"

/** performs a boxblur operation on src and stores results in dest. 
 * It uses an accumulator method and separate horizontal and vertical runs
 * @param buffer may be given for intermediate results. 
 *            If 0 then it is locally malloced
 * @param size of bluring kernel, (min 3 and it is made odd)
 */
void boxblurYUV(const unsigned char* src, unsigned char* dest, 
		unsigned char* buffer, const DSFrameInfo* fi, 
		unsigned int size);

#endif 
