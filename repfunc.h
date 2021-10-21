/*******************************************************************************
 * librepfunc - a collection of common functions, classes and tools.
 * See the README file for copyright information and how to reach the author.
 ******************************************************************************/
#pragma once
#include <string>  // std::string, size_t
#include <cstdint> // std::intmax_t


/*******************************************************************************
 * number conversion to std::string
 *   n      - number
 *   digits - minimum number of digits to print
 *   left   - left or right text padding
 ******************************************************************************/
std::string IntToStr(std::intmax_t n);
std::string IntToStr(std::intmax_t n, size_t digits, bool left);



/*******************************************************************************
 * number conversion to std::wstring
 *   n      - number
 *   digits - minimum number of digits to print
 *   left   - left or right text padding
 ******************************************************************************/
std::wstring IntToStrW(std::intmax_t n);
std::wstring IntToStrW(std::intmax_t n, size_t digits, bool left);