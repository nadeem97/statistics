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
 * @file stats.c
 * @brief Implementation file for the stats project. Contains functions
 *        to calculate and print statistics for an array of unsigned chars.
 *
 * This file provides various functions to calculate and display statistics 
 * like minimum, maximum, mean, and median values of an array. It also 
 * includes functions to sort the array and print it.
 *
 * @date July 24, 2024
 * @author Nadeem Ahmed
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

    unsigned char test[SIZE] = {34, 201, 190, 154,   8, 194,   2,   6,
                                114, 88,   45,  76, 123,  87,  25,  23,
                                200, 122, 150, 90,   92,  87, 177, 244,
                                201,   6,  12,  60,   8,   2,   5,  67,
                                  7,  87, 250, 230,  99,   3, 100,  90};

    unsigned int length = SIZE;

    /* Print the array */
    print_array(test, length);

    /* Print statistics of the array */
    print_statistics(test, length);
}

/**
 * @brief Prints the statistics of an array including minimum, maximum, mean,
 *        and median.
 *
 * @param array An unsigned char pointer to an n-element data array.
 * @param length An unsigned integer as the size of the array.
 */
void print_statistics(unsigned char *array, unsigned int length) {
    printf("Statistics:\n");
    printf("Minimum: %d\n", find_minimum(array, length));
    printf("Maximum: %d\n", find_maximum(array, length));
    printf("Mean: %d\n", find_mean(array, length));
    printf("Median: %d\n", find_median(array, length));
}

/**
 * @brief Given an array of data and a length, prints the array to the screen.
 *
 * @param array An unsigned char pointer to an n-element data array.
 * @param length An unsigned integer as the size of the array.
 */
void print_array(unsigned char *array, unsigned int length) {
    printf("Array: ");
    for(unsigned int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

/**
 * @brief Given an array of data and a length, returns the median value.
 *
 * @param array An unsigned char pointer to an n-element data array.
 * @param length An unsigned integer as the size of the array.
 *
 * @return The median value of the array.
 */
unsigned char find_median(unsigned char *array, unsigned int length) {
    sort_array(array, length);
    if (length % 2 == 0) {
        return (array[length/2 - 1] + array[length/2]) / 2;
    } else {
        return array[length/2];
    }
}

/**
 * @brief Given an array of data and a length, returns the mean.
 *
 * @param array An unsigned char pointer to an n-element data array.
 * @param length An unsigned integer as the size of the array.
 *
 * @return The mean value of the array.
 */
unsigned char find_mean(unsigned char *array, unsigned int length) {
    unsigned int sum = 0;
    for(unsigned int i = 0; i < length; i++) {
        sum += array[i];
    }
    return sum / length;
}

/**
 * @brief Given an array of data and a length, returns the maximum.
 *
 * @param array An unsigned char pointer to an n-element data array.
 * @param length An unsigned integer as the size of the array.
 *
 * @return The maximum value of the array.
 */
unsigned char find_maximum(unsigned char *array, unsigned int length) {
    unsigned char max = array[0];
    for(unsigned int i = 1; i < length; i++) {
        if(array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

/**
 * @brief Given an array of data and a length, returns the minimum.
 *
 * @param array An unsigned char pointer to an n-element data array.
 * @param length An unsigned integer as the size of the array.
 *
 * @return The minimum value of the array.
 */
unsigned char find_minimum(unsigned char *array, unsigned int length) {
    unsigned char min = array[0];
    for(unsigned int i = 1; i < length; i++) {
        if(array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

/**
 * @brief Given an array of data and a length, sorts the array from largest to
 *        smallest. The zeroth Element should be the largest value, and the last
 *        element (n-1) should be the smallest value.
 *
 * @param array An unsigned char pointer to an n-element data array.
 * @param length An unsigned integer as the size of the array.
 */
void sort_array(unsigned char *array, unsigned int length) {
    for(unsigned int i = 0; i < length - 1; i++) {
        for(unsigned int j = 0; j < length - i - 1; j++) {
            if(array[j] < array[j + 1]) {
                unsigned char temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

