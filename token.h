/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   token.h
 * Author: wangjw
 *
 * Created on 2016年4月26日, 上午9:42
 */

#ifndef TOKEN_H
#define TOKEN_H

#define MAX_TOKEN_SIZE (100)

typedef enum 
{
    BAD_TOKEN,
    NUMBER_TOKEN,
    ADD_OPERATOR_TOKEN,
    SUB_OPERATOR_TOKEN,
    MUL_OPERATOR_TOKEN,
    DIV_OPERATOR_TOKEN,
    END_OF_LINE_TOKEN
}TokenKind;


typedef struct 
{
    TokenKind kind;
    double value;
    char str[MAX_TOKEN_SIZE];
}Token;


void set_line(char * line);
void parse_line(char * line);
void exec_line();

#endif /* TOKEN_H */

