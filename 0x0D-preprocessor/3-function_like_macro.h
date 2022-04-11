#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

/**
 * File: 3-function_like_macro.h
 * Desc: header file that defines a function-like macro
 *     that computes the absolute value of a number x.
 *
 * @x: number to verify
 */

#define ABS(x) ((x) < 0 ? -(x) : (x))
/*#define ABS(x) ((x) > (-1) ? (x) : (x * -1))*/

#endif
