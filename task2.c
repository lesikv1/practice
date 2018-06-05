/*
* Author: Onufriev Alexey
* varik 8
* task 2
* Created on 3 june 2018 y., 14:41
*/

#include <stdio.h>
 
#define VALUES_COUNT (10)
#define OPERATORS_COUNT ( (VALUES_COUNT) - 1 )
 
enum OPERATOR_TYPES { OT_PLUS = 0, OT_MINUS, OT_MUL, ALL_OPERATOR_TYPES };
 
int plus(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
 
const char OPERATOR_SIGNS[ALL_OPERATOR_TYPES] = { '+', '-', '*' };
 
typedef int (*opfunc_t)(int, int);
 
opfunc_t OPERATOR_FUNCTIONS[ALL_OPERATOR_TYPES] = { plus, minus, mul };
 
int main(void) {
    int values[VALUES_COUNT] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 9 };
    int operators[OPERATORS_COUNT] = { 0 };
    int needed_result = 100;
    int i, stop, result, solutions;
    
    solutions = 0;
    stop = 0;
    while ( ! stop ) {
        result = values[0];
        for ( i = 0; i < OPERATORS_COUNT; ++i )
            result = OPERATOR_FUNCTIONS[operators[i]](result, values[i + 1]);
            
        if ( result == needed_result ) {
            printf("Solution #%d: ", ++solutions);
            for ( i = 0; i < VALUES_COUNT; ++i )
                printf("%d %c ", values[i], ( i < OPERATORS_COUNT ) ? OPERATOR_SIGNS[operators[i]] : '=');
            printf("%d\n", result);
        }
        
        for ( i = 0; i < OPERATORS_COUNT; ++i ) {
            operators[i] += 1;
            if ( operators[i] == ALL_OPERATOR_TYPES ) {
                if ( i == OPERATORS_COUNT - 1 ) {
                    stop = 1;
                    break;
                }
                operators[i] = OT_PLUS;
            }
            else
                break;
        }
    }
    
    return 0;
}