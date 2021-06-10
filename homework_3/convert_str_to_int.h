/**
 * Name: convert_str_to_int.h
 * Purpose: declaration of function that converts string to int values
 * @author Mateusz Bronislaw Wasilewski
**/


#pragma once
#include <string>

// function checks whether string can be converted to int and if so
// converts it
std::pair <bool, int> convert_str_to_int(std::string option);
