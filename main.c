#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    /*int len;
    //int len2;*/
    unsigned int ui,uim;
    long int res,l;
    /*void *addr;*/

    /*len = _printf("Let's try to printf a simple sentence.\n");
    //len2 = printf("Let's try to printf a simple sentence.\n");*/
    ui = (unsigned int)INT_MAX + 1024;
    uim = (unsigned int)INT_MAX;
    l = (long int)UINT_MAX + 1024;
    res = (long int)INT_MAX * 2;
    /*addr = (void *)0x7ffe637541f0;*/
    /*
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned bin:%b\n", ui);
    _printf("%b\n", ui);*/
   /*printf("Unsigned bin:[%b]\n", ui);*/
    /*_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);*/
    _printf("main_0_0 %u\n", 1024);
    _printf("main_0_1 %u\n", -1024);
    _printf("main_1 %u\n", 0);
    _printf("main_2 %u\n", uim);
    _printf("main_3 %u\n", UINT_MAX); 
    _printf("main_4 There is %u bytes in %u KB\n", 1024, 1);
    _printf("main_5 %u - %u = %u\n", 2048, 1024, 1024);
    _printf("main_6 %u + %u = %u\n", INT_MAX, INT_MAX, res); 
    _printf("main_7 %o\n", 1024);
    _printf("main_8 %o\n", -1024);
    _printf("main_9 %o\n", l);
    _printf("main_10 %o\n", uim);
    _printf("main_11 %o\n", ui); 
    _printf("main_12 There is %o bytes in %o KB\n", 1024, 1);
    _printf("main_13 %o - %o = %o\n", 2048, 1024, 1024);
    _printf("%o + %o = %o\n", INT_MAX, INT_MAX, res); 
    _printf("main_15 %x\n", 1024);
    _printf("main_16 %x\n", -1024);
    _printf("main_17 %x\n", 0);
    _printf("main_18 %x\n", ui);
    _printf("main_20 %x\n", ui); 
    _printf("main_21 There is %x bytes in %x KB\n", 1024, 1);
    _printf("main_22 %x - %x = %x\n", 2048, 1024, 1024);
    _printf("main_23 %x + %x = %x\n", INT_MAX, INT_MAX, res); 
    _printf("main_24 %X\n", 1024);
    _printf("main_25 %X\n", -1024);
    _printf("main_26 %X\n", 0);
    _printf("main_27 %X\n", uim);
    _printf("main_28 %X\n", ui); 
    _printf("main_29 There is %X bytes in %X KB\n", 1024, 1);
    _printf("main_30 %X - %X = %X\n", 2048, 1024, 1024);
    _printf("main_31 %X + %X = %X\n", INT_MAX, INT_MAX, res); 
    _printf("main_32 %u == %o == %x == %X\n", 1024, 1024, 1024, 1024);
    _printf("main_33 uuoxxX%xuoXo\n", 1024);

    return (0);
}
