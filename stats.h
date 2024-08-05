/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h 
 * @brief Header file for statistics functions
 *
 * This header file provides function declarations for statistics functions 
 * including mean, median, maximum, minimum, and sorting.
 *
 * @author
 * @date
 *
 */

#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * This function takes an array of unsigned characters and its length, and prints
 * the minimum, maximum, mean, and median values.
 *
 * @param array The array of data.
 * @param length The length of the array.
 *
 * @return void
 */
void print_statistics(unsigned char *array, unsigned int length);

/**
 * @brief Prints the array to the screen.
 *
 * This function takes an array of unsigned characters and its length, and prints
 * the array elements to the screen.
 *
 * @param array The array of data.
 * @param length The length of the array.
 *
 * @return void
 */
void print_array(unsigned char *array, unsigned int length);

/**
 * @brief Returns the median value of the array.
 *
 * This function takes an array of unsigned characters and its length, sorts the
 * array, and returns the median value.
 *
 * @param array The array of data.
 * @param length The length of the array.
 *
 * @return The median value.
 */
unsigned char find_median(unsigned char *array, unsigned int length);

/**
 * @brief Returns the mean value of the array.
 *
 * This function takes an array of unsigned characters and its length, and returns
 * the mean value.
 *
 * @param array The array of data.
 * @param length The length of the array.
 *
 * @return The mean value.
 */
unsigned char find_mean(unsigned char *array, unsigned int length);

/**
 * @brief Returns the maximum value of the array.
 *
 * This function takes an array of unsigned characters and its length, and returns
 * the maximum value.
 *
 * @param array The array of data.
 * @param length The length of the array.
 *
 * @return The maximum value.
 */
unsigned char find_maximum(unsigned char *array, unsigned int length);

/**
 * @brief Returns the minimum value of the array.
 *
 * This function takes an array of unsigned characters and its length, and returns
 * the minimum value.
 *
 * @param array The array of data.
 * @param length The length of the array.
 *
 * @return The minimum value.
 */
unsigned char find_minimum(unsigned char *array, unsigned int length);

/**
 * @brief Sorts the array from largest to smallest.
 *
 * This function takes an array of unsigned characters and its length, and sorts
 * the array from largest to smallest.
 *
 * @param array The array of data.
 * @param length The length of the array.
 *
 * @return void
 */
void sort_array(unsigned char *array, unsigned int length);

#endif /* __STATS_H__ */

