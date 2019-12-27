/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhaouhao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/23 08:19:55 by dhaouhao          #+#    #+#             */
/*   Updated: 2019/12/27 03:10:14 by dhaouhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
	char s2[] = "ceci est un test du printf";
	char c = 'a';
	char *s1;
	s1 = &c;

	ft_printf("|%.*d|\n", -20, 20);
	printf("|%.*d|\n\n", -20, 20);
	ft_printf("|%.*i|\n", -20, 20);
	printf("|%.*i|\n\n", -20, 20);
	ft_printf("|%.*u|\n", -20, 20);
	printf("|%.*u|\n\n", -20, 20);
	ft_printf("|%.*x|\n", -20, 20);
	printf("|%.*x|\n\n", -20, 20);
	ft_printf("pointer : |%p|\n", NULL);
	printf("pointer : |%p|\n\n", NULL);
	ft_printf("|%.*s|\n", -20, "abcd");
	printf("|%.*s|\n\n", -20, "abcd");
	// ft_printf("|%.*c|\n", -20, 'a');
	// printf("|%.*c|\n\n", -20, 'a');
	ft_printf("|%*%|\n", -20);
	printf("|%*%|\n\n", -20);

	// char *output;
	// output = "";
	// read(1, output, 50);
	// output[51] = '\0';


	ft_printf("%0*.*x|%%|\n", -10, 5, 0xda0);
	printf("%0*.*x|%%|\n\n", -10, 5, 0xda0);

	ft_printf("%0*.*d|%%|\n", -10, 5, 123);
	printf("%0*.*d|%%|\n\n", -10, 5, 123);

	ft_printf("%0*.*i|%%|\n", -10, 5, 345);
	printf("%0*.*i|%%|\n\n", -10, 5, 345);

	ft_printf("%0*.*u|%%|\n", -10, 5, 546);
	printf("%0*.*u|%%|\n\n", -10, 5, 546);


	printf("\n\n----------NUMBERS----------\n");

	printf("\n\n----------test1----------\n");
	ft_printf("|%-.10d|\n", 50);
	printf("|%-.10d|\n", 50);

	printf("\n\n----------test2----------\n");
	ft_printf("|%0.10d|\n", 50);
	printf("|%0.10d|\n", 50);

	printf("\n\n----------test3----------\n");
	ft_printf("|%.010d|\n", 50);
	printf("|%.010d|\n", 50);

	printf("\n\n----------test4----------\n");
	ft_printf("|%-*d|\n", 10, 50);
	printf("|%-*d|\n", 10, 50);

	printf("\n\n----------test5----------\n");
	ft_printf("|%.*d|\n", 10, 50);
	printf("|%.*d|\n", 10, 50);

	printf("\n\n----------test6----------\n");
	ft_printf("|%*.d|\n", 10, 50);
	printf("|%*.d|\n", 10, 50);

	printf("\n\n----------test7----------\n");
	ft_printf("|%0*d|\n", 10, 50);
	printf("|%0*d|\n", 10, 50);

	printf("\n\n----------test8----------\n");
	ft_printf("|%-.010d|\n", 50);
	printf("|%-.010d|\n", 50);

	printf("\n\n----------test9----------\n");
	ft_printf("|%-.010d|\n", 50);
	printf("|%-.010d|\n", 50);

	printf("\n\n----------test10----------\n");
	ft_printf("|%*.0d|\n", 10, 50);
	printf("|%*.0d|\n", 10, 50);

	printf("\n\n----------test11----------\n");
	ft_printf("|%0*.d|\n", 10, 50);
	printf("|%0*.d|\n", 10, 50);


	printf("\n\n----------STRINGS----------\n");

	printf("\n\n----------test12----------\n");
	ft_printf("|%.s|\n", "hi low\0don't print me lol\0");
	printf("|%.s|\n", "hi low\0don't print me lol\0");

	printf("\n\n----------test12----------\n");
	ft_printf("|%.10s|\n", s2);
	printf("|%.10s|\n", s2);

	printf("\n\n----------test13----------\n");
 	ft_printf("|%-10s|\n", s2);
	printf("|%-10s|\n", s2);

	printf("\n\n----------test14----------\n");
	ft_printf("|%-.10s|\n", s2);
	printf("|%-.10s|\n", s2);

	printf("\n\n----------test15----------\n");
	ft_printf("|%.010s|\n", s2);
	printf("|%.010s|\n", s2);

	printf("\n\n----------test16----------\n");
	ft_printf("|%.40s|\n", s2);
	printf("|%.40s|\n", s2);

	printf("\n\n----------test17----------\n");
	ft_printf("|%-40s|\n", s2);
	printf("|%-40s|\n", s2);

	printf("\n\n----------test18----------\n");
	ft_printf("|%-.40s|\n", s2);
	printf("|%-.40s|\n", s2);

	printf("\n\n----------test19----------\n");
	ft_printf("|%.040s|\n", s2);
	printf("|%.040s|\n", s2);

	printf("\n\n----------test20----------\n");
	ft_printf("|%.*s|\n", 10, s2);
	printf("|%.*s|\n", 10, s2);

	printf("\n\n----------test21----------\n");
	ft_printf("|%-*s|\n", 10, s2);
	printf("|%-*s|\n", 10, s2);

	printf("\n\n----------test21----------\n");
	ft_printf("|%*.s|\n", 10, s2);
	printf("|%*.s|\n", 10, s2);

	printf("\n\n----------test23----------\n");
	ft_printf("|%.*s|\n", 10, s2);
	printf("|%.*s|\n", 10, s2);

	printf("\n\n----------test24----------\n");
	ft_printf("|%.50s|\n", s2);
	printf("|%.50s|\n", s2);

	printf("\n\n----------test25----------\n");
	ft_printf("|%-50s|\n", s2);
	printf("|%-50s|\n", s2);

	printf("\n\n----------test26----------\n");
	ft_printf("|%-.50s|\n", s2);
	printf("|%-.50s|\n", s2);

	printf("\n\n----------test27----------\n");
	ft_printf("|%.050s|\n", s2);
	printf("|%.050s|\n", s2);

	printf("\n\n----------test28----------\n");
	ft_printf("|%.*s|\n", 50, s2);
	printf("|%.*s|\n", 50, s2);

	printf("\n\n----------test29----------\n");
	ft_printf("|%-*s|\n", 50, s2);
	printf("|%-*s|\n", 50, s2);

	printf("\n\n----------test30----------\n");
	ft_printf("|%*.s|\n", 50, s2);
	printf("|%*.s|\n", 50, s2);

	printf("\n\n----------test31----------\n");
	ft_printf("|%.*s|\n", 10, s2);
	printf("|%.*s|\n", 10, s2);

	printf("\n\n----------CHARS----------\n");

	printf("\n\n----------test32----------\n");
	ft_printf("|%*c|\n", 50, c);
	printf("|%*c|\n", 50, c);

	printf("\n\n----------test33----------\n");
	ft_printf("|%-10c|\n", c);
	printf("|%-10c|\n", c);

	printf("\n\n----------test34----------\n");
	ft_printf("|%*.c|\n", 50, c);
	printf("|%*.c|\n", 50, c);

	//printf("\n\n----------HEXA UNSIGNED INT----------\n");
	printf("\n\n----------HEXA----------\n");

	printf("\n\n----------test35----------\n");
	ft_printf("|%x|\n", -42);
	printf("|%x|\n", -42);

	printf("\n\n----------test36----------\n");
	ft_printf("|%.10X|\n", 42);
	printf("|%.10X|\n", 42);

	printf("\n\n----------test37----------\n");
	ft_printf("|%-10X|\n", 42);
	printf("|%-10X|\n", 42);

	printf("\n\n----------test38----------\n");
	ft_printf("|%*x|\n", 10, 42);
	printf("|%*x|\n", 10, 42);

	printf("\n\n----------test39----------\n");
	ft_printf("|%-.10X|\n", 42);
	printf("|%-.10X|\n", 42);

	printf("\n\n----------test40----------\n");
	ft_printf("|%0.X|\n", 42);
	printf("|%0.X|\n", 42);

	printf("\n\n----------test41----------\n");
	ft_printf("|%15.*x|\n", 10, -42);
	printf("|%15.*x|\n", 10, -42);

	printf("\n\n----------test42----------\n");
	ft_printf("|%X|\n", 9999999);
	printf("|%X|\n", 9999999);

	printf("\n\n----------UNSIGNED INT----------\n");

	printf("\n\n----------test43----------\n");
	ft_printf("|%-.10u|\n", 2000546511);
	printf("|%-.10u|\n", 2000546511);

	printf("\n\n----------test44----------\n");
	ft_printf("|%0.10u|\n", 2000546511);
	printf("|%0.10u|\n", 2000546511);

	printf("\n\n----------test45----------\n");
	ft_printf("|%.030u|\n", 2000546511);
	printf("|%.030u|\n", 2000546511);

	printf("\n\n----------test46----------\n");
	ft_printf("|%-*u|\n", 30, 2000546511);
	printf("|%-*u|\n", 30, 2000546511);

	printf("\n\n----------POINTER INT----------\n");

	printf("\n\n----------test47----------\n");
	ft_printf("|%p|\n", s1);
	printf("|%p|\n", s1);

	printf("\n\n----------test48----------\n");
	ft_printf("|%30p|\n", s1);
	printf("|%30p|\n", s1);


	printf("\n\n----------%%----------\n");

	printf("\n\n----------test49----------\n");
	ft_printf("|%%|\n");
	printf("|%%|\n");

	printf("\n\n----------test50----------\n");
	ft_printf("|%30%|\n");
	printf("|%30%|\n");

	printf("\n\n----------test51----------\n");
	ft_printf("|%020%|\n");
	printf("|%020%|\n");

//Null specifier tests
	// ft_printf("%");
	// ft_printf("%5");
	// ft_printf("%05");
	// ft_printf("%-05");
	// ft_printf("%-5");

	return (0);
}

//gcc -Wall -Werror -Wextra ft_format_char.c ft_init_struct.c ft_set_nbr_width.c ft_substr.c ft_format_nbr.c ft_is_type.c ft_printf.c ft_convert_str.c ft_set_prec.c ft_apply_nbr_precision.c ft_format_string.c ft_isdigit.c ft_set_width.c ft_apply_nbr_width.c ft_lltoa.c ft_putchar.c ft_strdup.c ft_atoi.c ft_get_formated.c ft_memcpy.c ft_putstr.c ft_strjoin.c ft_fill_struct.c ft_memset.c ft_strlen.c ft_hex_to_str.c ft_nbr_precision_n_width.c ft_set_nbr_precision.c ft_strupcase.c main.c && ./a.out

//cc -o ./a.out main.c libftprintf.a
//gcc -Wall -Werror -Wextra libftprintf.a main.c && ./a.out


int main11(void)
{
	int t;
	char c;

	c = 'a';
	t = 50;
	ft_printf("pp %.50d\n", 10000);
	ft_printf("p1 %.4s\n", "cccc");
	ft_printf("p2 %.10s\n", "cccc");

	// ft_printf("\n\n");
	// printf("neg1 %*s\n", -9, "coucou");
	// ft_printf("neg1 %.*s\n", -9, "coucou");
	// //printf("p3 %.2s\n", NULL);
	// printf("%p\n", NULL);
	// ft_printf("%p\n", NULL);
	// printf("\n\n");

	ft_printf("p3 %.4s\n", NULL);
	ft_printf("p4 %.5s\n", "aaaaa");
	ft_printf("p5 %.3d\n", 100);
	ft_printf("p6 %.0d\n", 100);
	ft_printf("p7 %.4d\n", 100);
	ft_printf("p8 %.10d\n", 100);
	ft_printf("p9 %.50d\n", 100);
	ft_printf("p10 %.1d\n", 100);
	ft_printf("p11 %.3d\n", 100);
	ft_printf("p12 %.0d\n", 0);
	ft_printf("p13 %.3i\n", 100);
	ft_printf("p14 %.0i\n", 100);
	ft_printf("p15 %.4i\n", 100);
	ft_printf("p16 %.10i\n", 100);
	ft_printf("p17 %.50i\n", 100);
	ft_printf("p18 %.1i\n", 100);
	ft_printf("p19 %.3x\n", 100);
	ft_printf("p20 %.0x\n", 0);
	ft_printf("p21 %.3x\n", 100);
	ft_printf("p22 %.0x\n", 100);
	ft_printf("p23 %.4x\n", 100);
	ft_printf("p24 %.10x\n", 100);
	ft_printf("p25 %.50x\n", 100);
	ft_printf("p26 %.1x\n", 100);
	ft_printf("p27 %.3x\n", 100);
	ft_printf("p28 %.0x\n", 0);
	ft_printf("p29 %.3u\n", 100);
	ft_printf("p30 %.0u\n", 100);
	ft_printf("p31 %.4u\n", 100);
	ft_printf("p32 %.10u\n", 100);
	ft_printf("p33 %.50u\n", 100);
	ft_printf("p34 %.1u\n", 100);
	ft_printf("p35 %.3u\n", 100);
	ft_printf("p36 %.0u\n", 0);
	ft_printf("%%\n");
	ft_printf("Hello 42 school! %s\n", NULL);
	ft_printf("%010%\n");
	ft_printf("%d\n", 2147483647);
	ft_printf("%x\n", 2147483647);
	ft_printf("%X\n", 2147483647);
	ft_printf("%x\n", 0);
	ft_printf("%010x\n", 0);
	ft_printf("%010x\n", 20);
	ft_printf("%010x\n", -20);
	ft_printf("%10x\n", 20);
	ft_printf("%10.2x\n", -20);
	ft_printf("%-10x\n", 50);
	ft_printf("%-15x\n", 0);
	ft_printf("%.1x\n", 500);
	ft_printf("%*.*x\n", 50, 10, 2);
	ft_printf("%x\n", -1);
	ft_printf("%40.50d\n", 50);
    ft_printf("%d\n", -589);
    ft_printf("%-4d\n", -2464);
    ft_printf("%.5d\n", -2372);
	ft_printf("%p\n", NULL);
	ft_printf("%15p\n", NULL);
	ft_printf("%-15p\n", NULL);
    ft_printf("ret = %d\n", ft_printf("%%p::[%010d]\n", -8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%10d]\n", -8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%.5d]\n", -8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%01.1d]\n", -8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%010.1d]\n", -8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%01.50d]\n", -8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%1.50d]\n", -8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%0100.50d]\n", -8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%010d]\n", 8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%10d]\n", 8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%.5d]\n", 8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%01.1d]\n", 8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%010.1d]\n", 8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%01.50d]\n", 8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%1.50d]\n", 8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%0100.50d]\n", 8473));
	ft_printf("%c\n", 'a');
	ft_printf("%10c\n", 't');
	ft_printf("%1c\n", 'y');
	ft_printf("%50.2s\n", "Coucou");
	ft_printf("%50.2s\n", NULL);
	ft_printf("%5.0s\n", "Hello");
	ft_printf("%.1s\n", "Test");
	ft_printf("%10s\n", NULL);
	ft_printf("%10s\n", "Ok");
	ft_printf("%d\n", ft_printf("1chiffre 1 %d chiffre 2 %d\n", 42, -42));
	ft_printf("%d\n", ft_printf("4chiffre 1 %-12d chiffre 2 %-12d\n", 42, -42));
	ft_printf("t1 %050d\n", 10);
	ft_printf("t2 %-50d\n", 10);
	ft_printf("t3 %50.0d\n", 10);
	ft_printf("t4 %50.50d\n", 10);
	ft_printf("t5 %50.10d\n", 10);
	ft_printf("t6 %*.*d\n", 50,  5, 10);
	ft_printf("t7 %1.50d\n", -10);
	ft_printf("t8 %1.50d\n", 10);
	ft_printf("t9 %2.2d\n", 10);
	ft_printf("t10 %2.2d\n", -10);
	ft_printf("t12 %.0d\n", 0);
	ft_printf("t13 %01d\n", -20);
	ft_printf("t14 %10d\n", 1000);
	ft_printf("%d\n", ft_printf("5chiffre 1 %0d chiffre 2 %0d\n", 42, -42));
	ft_printf("%d\n", ft_printf("6chiffre 1 %012d chiffre 2 %012d\n", 42, -42));
	ft_printf("%d\n", ft_printf("8chiffre 1 %*d chiffre 2 %*d\n", 42, 6, 6, 6));
	ft_printf("%d\n", ft_printf("15chiffre 1 %.d chiffre 2 %.d\n", 42, -42));
	ft_printf("%d\n", ft_printf("4caractere 1 %12c caractere 2 %12c\n", 'a', 'c'));
	ft_printf("1caractere 1 %c caractere 2 %c\n", 'a', 'c');
	ft_printf("%d\n", ft_printf("1hexa-maj 1 %X hexa-maj 2 %X\n", 42, -42));
	ft_printf("%d\n", ft_printf("4hexa-maj 1 %12X hexa-maj 2 %int12X\n", 42, -42));
	ft_printf("%d\n", ft_printf("4hexa-maj 1 %-12X hexa-maj 2 %-12X\n", 42, -42));
	ft_printf("%d\n", ft_printf("5hexa-maj 1 %0X hexa-maj 2 %0X\n", 42, -42));
	ft_printf("%d\n", ft_printf("6hexa-maj 1 %012X hexa-maj 2 %012X\n", 42, -42));
	ft_printf("%d\n", ft_printf("8hexa-maj 1 %*X hexa-maj 2 %*X\n", 42, 6, 6, 6));
	ft_printf("%d\n", ft_printf("1unsigned 1 %u unsigned 2 %u\n", 42, -42));
	ft_printf("%d\n", ft_printf("4unsigned 1 %12u unsigned 2 %12u\n", 42, -42));
	ft_printf("%d\n", ft_printf("4unsigned 1 %-12u unsigned 2 %-12u\n", 42, -42));
	ft_printf("%d\n", ft_printf("5unsigned 1 %0u unsigned 2 %0u\n", 42, -42));
	ft_printf("%d\n", ft_printf("6unsigned 1 %012u unsigned 2 %012u\n", 42, -42));
	ft_printf("%d\n", ft_printf("8unsigned 1 %*u unsigned 2 %*u\n", 42, 6, 6, 6));
	ft_printf("%d\n", ft_printf("15unsigned 1 %.u unsigned 2 %.u\n", 42, -42));
	ft_printf("%d\n", ft_printf("%%\n"));
	ft_printf("%d\n", ft_printf("%-.12u\n", -20000000));
	ft_printf("%d\n", ft_printf("%-.12i\n", -20000000));
	ft_printf("%d\n", ft_printf("truc\n"));
	ft_printf("04 Test de chiffre sans h : %d, et %d\n", 432767, -432767);
	ft_printf("31 This is an int : %.0d\n", 0);
	ft_printf("32 This is an int : %0d\n", 0);
	ft_printf("percent 1 %012%\n");
	ft_printf("percent 2 %12%\n");
	ft_printf("percent 3 %-12%\n");
	ft_printf("percent 4 %0%\n");
	ft_printf("%d\n", t);
	ft_printf("%d\n", t);
	ft_printf("%d\n", t);
	ft_printf("%d\n", t);
	ft_printf("%d\n", t);
	ft_printf("%d\n", t);
	ft_printf("%d\n", t);
	ft_printf("%d\n", t);
	ft_printf("%d\n", ft_printf("1string 1 %s string 2 %s\n", "toto", "bonjour"));
	ft_printf("%d\n", ft_printf("4string 1 %12s string 2 %12s\n", "toto", "bonjour"));
	ft_printf("%d\n", ft_printf("4string 1 %-12s string 2 %-12s\n", "toto", "bonjour"));
	ft_printf("st1 %*.*d\n", 10, 10, 50);
	ft_printf("st2 %*.*d\n", 1, 50, 50);
	ft_printf("st3 %*.*d\n", 0, 0, 50);
	ft_printf("st4 %*.*d\n", 0, 50, 50);
	ft_printf("st5 %*.*d\n", 10, 0, 50);
	ft_printf("st6 %*.*d\n", 10, 10, 50);
	ft_printf("st12 %*d\n", 10, 50);
	ft_printf("st13 %*d\n", 0, 0);
	ft_printf("st14 %.*d\n", 0, 0);
	ft_printf("st15 %*d\n", 50, 5);
	ft_printf("st16 %0.*d\n", 50, 5);
	ft_printf("st17 %0.*d\n", 0, 0);
	ft_printf("st7 %*.*s\n", 1, 50, "hey");
	ft_printf("st8 %*.*s\n", 0, 0, "coucou");
	ft_printf("st9 %*.*s\n", 0, 50, "hey");
	ft_printf("st10 %*.*s\n", 10, 0, "dsa");
	ft_printf("st11 %*.*s\n", 10, 10, "hello");
	ft_printf("st8 %.*s\n", 0, "coucou");
	ft_printf("st9 %*s\n", 0, "hey");
	ft_printf("st10 %*s\n", 10, "dsa");
	ft_printf("st118 %*s\n", 100, "hello");
	ft_printf("st119 %*s\n", 1000, "hello");
	ft_printf("st120 %*s\n", 10000, "hello");
	ft_printf("st121 %*s\n", 100000, "hello");
	ft_printf("st118 %*d\n", 100, 0);
	ft_printf("st119 %*d\n", 1000, 10);
	ft_printf("st120 %*d\n", 10000, 467);
	ft_printf("st121 %*d\n", 100000, -589);
	ft_printf("ultimate1 %*d        %*i\n", 500, 0, 10, 10);
	ft_printf("ultimate2 %*d %*s %*x %*X %*i %*u\n", 1, 5000, 1, "hey", 10, 54700, 1, 300, 10000, -55, 1, -60);
	ft_printf("ultimate3 %*.*d %*.*s\n", 1, 50, 5000, 1, 0, "hey");
	ft_printf("ultimate4 %*.*x %*.*X\n", 1, 50, 5000, 1, 0, 10);
	ft_printf("ultimate5 %*.*u\n", 1, 50, 5000);
	ft_printf("neg1 %*s\n", -9, "coucou");
	ft_printf("neg2 %*.*s\n", -9, 4, "coucou");
	ft_printf("neg3 %*s\n", -9, NULL);
	ft_printf("neg4 %*.*s\n", 0, 0, "coucou");
	ft_printf("neg5 %*s\n", -100, "coucou");
	ft_printf("neg6 %*s\n", -156, "coucou");
	ft_printf("neg7 %*.*s\n", -1586, 15, "coucou");
	ft_printf("neg8 %*.*s\n", -1586, 15, "coucou");
	ft_printf("neg9 %*.*s\n", 15856, 155, "coucou");
	ft_printf("neg10 %*.*s\n", -15586, 15, "coucou");
	ft_printf("neg11 %*.*s\n", -15586, 15, "coucou");
	ft_printf("neg1 %*d\n", -9, 150);
	ft_printf("neg2 %*.*d\n", -9, 4, 1555);
	ft_printf("neg3 %*d\n", -9, -255);
	ft_printf("neg4 %*.*d\n", 0, 0, -30);
	ft_printf("neg5 %*d\n", -100, -589);
	ft_printf("neg6 %*d\n", -156, 15555);
	ft_printf("neg7 %*.*d\n", -1586, 15, 0);
	ft_printf("neg8 %*.*d\n", -1586, 15, 300);
	ft_printf("neg9 %*.*d\n", 15856, 155, -3000);
	ft_printf("neg10 %*.*d\n", -15586, 15, 150);
	ft_printf("neg11 %*.*d\n", -15586, 15, 0);
	ft_printf("***************%*s%*d**************%*u*************\n", 10, "coucou", 10, 10, -50, 20);
	ft_printf("taaa %100s\n", "hello");
	return (0);
}
