#ifndef UTILITIES_H
#define UTILITIES_H

#include <string>
#include <iostream>
#include <cstdio>
#include <windows.h>
#include <iomanip>
#include <conio.h>

/**
* @brief Color's codes
*/
#define BLACK 0
#define BLUE 1
#define GREEN 2
#define CYAN 3
#define RED 4
#define MAGENTA 5
#define BROWN 6
#define LIGHTGRAY 7
#define DARKGRAY 8
#define LIGHTBLUE 9
#define LIGHTGREEN 10
#define LIGHTCYAN 11
#define LIGHTRED 12
#define LIGHTMAGENTA 13
#define YELLOW 14
#define WHITE 15
#define ARROW_UP 328
#define ARROW_DOWN 336

/**
 * @brief Comparing definitions
 */
#define CMP_STUDENTNAME 0
#define CMP_ROADNAME 1

using namespace std;

/**
* @brief Cleans screen
*/
void clrscr();

/**
*@brief Sets a color for use
*/
void setColor(unsigned int color, unsigned int background_color);

/**
* @brief Prints App's name
*/
void printAppName();

/**
 * @brief Makes the console wait for a key input to take action
 */
void pressKeyToContinue();

/**
* @brief Prints App's exiting message
*/
void exiting();

/**
* @brief Cleans the buffer
*/
void cleanBuffer();

#endif // UTILITIES_H
