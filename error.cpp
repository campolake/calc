/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   error.cpp
 * Author: wangjw
 *
 * Created on 2016年4月26日, 上午10:09
 */

#include <stdlib.h>
#include <stdio.h>
#include "error.h"


void panic(const char * msg)
{
    printf("%p\r\n",msg);
    exit(1);
}
 
