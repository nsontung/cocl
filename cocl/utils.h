/*
 * utils.h
 *
 *  Created on: Jun 4, 2016
 *      Author: tungns
 */

#ifndef COCL_UTILS_H_
#define COCL_UTILS_H_

#include <stddef.h>
#include <time.h>

namespace cocl {

inline long long time_millis() {
	struct timeval tv;
	gettimeofday(&tv, NULL);
	return (long)((tv.tv_sec) * 1000 + (tv.tv_usec) / 1000); // convert tv_sec & tv_usec to millisecond
}

inline long long time_micros() {
	struct timeval tv;
	gettimeofday(&tv, NULL);
	return (tv.tv_sec) * 1000000 + (tv.tv_usec); // convert tv_sec & tv_usec to millisecond
}

inline long long time_secs(){
	return time(NULL);
}

}

#endif /* COCL_UTILS_H_ */
