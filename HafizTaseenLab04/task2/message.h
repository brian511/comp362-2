/**
 * Name: Taseen Hafiz
 * Lab/task: Lab 04 - Task 2
 * Date: 02/24/2020
 **/

#ifndef _MESSG_H
#define _MESSG_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <mqueue.h>
#include <stdbool.h>

typedef struct messg {
bool stable;
int nodeId;
float temperature;
} MESSG;

typedef struct temperature {
    mqd_t msqid;
    float previousTemperature;
} TEMPERATURE;

#define oops(ermsg,erno) {perror(ermsg); exit(erno); }

#endif