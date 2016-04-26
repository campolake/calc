/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: wangjw
 *
 * Created on 2016年4月26日, 上午9:36
 */

#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>
#include "token.h"
#include "error.h"
using namespace std;

#define LINE_BUFFER_SIZE (1024)
#define LINE_MAX_TOKENS (100)

/*
 * 
 */

const char * current_line;
int pos = 0;


void set_line(char * line)
{
    current_line = line;
    pos  = 0;
}


Token* parse_line(char *line)
{
    Token * tokens = (Token *)malloc(sizeof(Token)*LINE_MAX_TOKENS);
    if (tokens == NULL)
    {
        panic("can't malloc memory Token");
    }
    while(line++)
    {
        pos ++;
        switch (*line)
        {
            
        }
    }
    return NULL;
}

void get_token(Token * token)
{
    token->kind = BAD_TOKEN;
    char cur_char;
    
    while(current_line[pos] != '\0')
    {
        cur_char = current_line[pos];
        
    }
}

//execute one line's tokens
double  exec_line(Token * tokens)
{
    
}

int main(int argc, char** argv) {

    char line[LINE_BUFFER_SIZE];
    
    while(fgets(line,LINE_BUFFER_SIZE,stdin) != NULL)
    {
        set_line(line);
        Token * tokens = parse_line(current_line);
        double result = exec_line(tokens);
        printf("%f\n",result);
    }
    
    return 0;
}

