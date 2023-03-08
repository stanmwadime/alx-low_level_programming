#include <stdio.h>
#include "main.h"
/**
 * wildcmp - compares two strings
 * @s1: 1st string
 * @s2: 2nd string caintaing '*' or not
 * Return: 1 if the strings can be considered as identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2) {
    
    if (*s1 == '\0' && *s2 == '\0') {
        return 1;
    }
    
    if (*s2 == '*') {
        
        if (wildcmp(s1, s2 + 1)) {
            return 1;
        }
        
        while (*s1 != '\0') {
            if (wildcmp(s1 + 1, s2)) {
                return 1;
            }
            s1++;
        }
    }
    
    if (*s1 == *s2) {
        return wildcmp(s1 + 1, s2 + 1);
    }
    return 0;
}
