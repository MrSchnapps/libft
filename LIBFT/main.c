#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include "libft.h"

char *fonction(char *a)
{
	char *t;
	t = (char *)a;
	int i = -1;
	while (t[++i])
		t[i] = ft_toupper(t[i]);
	return (t);
}

int		main()
{
	/*
// FT_ATOI
	char *sat = "\t\n\r\v\f 9223372036854775808edwo 1 e";
	printf("FT_ATOI\n");
	printf(" ft_atoi  ==> %d", ft_atoi(sat));
	printf("\n atoi     ==> %d", atoi(sat));

// FT_STRLCAT
	char *src_ftstrlcat = " Pouic";
	char dest_ftstrlcat[20] = "po";
	char *src_strlcat = " Pouic";
	char dest_strlcat[20] = "po";
	printf("\n\nFT_STRLCAT\n");
	printf(" ft_strlcat coucou dans size 5 ==> %zu", ft_strlcat(dest_ftstrlcat, src_ftstrlcat, 4));
	printf("\n DST ==> %s", dest_ftstrlcat);
	printf(" \n strlcat    coucou dans size 5 ==> %zu", strlcat(dest_strlcat, src_strlcat, 4));
	printf("\n DST ==> %s", dest_strlcat);	
*/
// FT_STRLCPY
	/*char src_ftstrlcpy[] = "\0Coucou";
	char dest_ftstrlcpy[20] = "\0lesamis";
	char src_strlcpy[] = "\0Coucou";
	char dest_strlcpy[20] = "\0lesamis";
	char r[] = "coucoucou";
	char m[] = "coucoucou";
	printf("\n\nFT_STRLCPY\n");
	printf(" ft_strlcpy coucou dans lesamis size 5 ==> %zu", ft_strlcpy(r, r, 5));
	//printf("\n DST ==> %s", dest_ftstrlcpy);
	printf(" \n strlcpy    coucou dans lesamis size 5 ==> %zu", strlcpy(m, m, 5));
	//printf("\n DST ==> %s", dest_strlcpy);
	free(r);
	free(m);

// FT_STRNSTR
	char little_ft[] = "abcdefgh";
	char big_ft[] = "abcdwxyz";
	char s2[] = "abcdefgh";
	char s1[] = "abcdwxyz";
	printf("\n\nFT_STRNSTR\n");
	printf(" ft_strnstr ==> %s", ft_strnstr(big_ft, little_ft, 6));
	printf("\n strnstr    ==> %s", strnstr(s1, s2, 6));	

// FT_STRNCMP
	char s1cmp[] = "abcdefgh";
	char s2cmp[] = "abcdwxyz";
	printf("\n\nFT_STRNCMP\n");
	printf(" ft_strncmp %s et %s 4 ==> %d", s1cmp, s2cmp, ft_strncmp(s1cmp, s2cmp, 4));
	printf("\n strncmp    %s et %s 4 ==> %d", s1cmp, s2cmp, strncmp(s1cmp, s2cmp, 4));

// FT_STRRCHR
	char ess[] = "coucoulolocikou";
	int ce = 'c';
	printf("\n\nFT_STRRCHR\n");
	printf(" ft_strrchr str : %s et char %c  ==> %s", ess, ce, ft_strrchr(ess, ce));
	printf("\n strrchr    str : %s et char %c  ==> %s", ess, ce, strrchr(ess, ce));

// FT_STRCHR
	char *es = "yoyoyoo";
	int cee = '\0';
	printf("\n\nFT_STRCHR\n");
	printf(" ft_strchr str : %s et char %c  ==> %s", es, cee, ft_strchr(es, cee));
//	printf("\n strchr    str : %s et char %c  ==> %s", es, cee, strchr(es, cee)); 

// FT_TOLOWER
	printf("\n\nFT_TOLOWER\n");
	printf(" ft_tolower c, C, + ==> %c, %c, %c", ft_tolower('c'), ft_tolower('C'), ft_tolower('+'));
	printf("\n tolower    c, C, + ==> %c, %c, %c", tolower('c'), tolower('C'), tolower('+'));

// FT_TOLOWER
	printf("\n\nFT_TOUPPER\n");
	printf(" ft_toupper c, C, + ==> %c, %c, %c", ft_toupper('c'), ft_toupper('C'), ft_toupper('+'));
	printf("\n toupper    c, C, + ==> %c, %c, %c", toupper('c'), toupper('C'), toupper('+'));

// FT_ISPRINT
	printf("\n\nFT_ISPRINT\n");
	printf(" ft_isprint c, C, bn ==> %d, %d, %d", ft_isprint('c'), ft_isprint('C'), ft_isprint('\n'));
	printf("\n isprint    c, C, bn ==> %d, %d, %d", isprint('c'), isprint('C'), isprint('\n'));

// FT_ISASCII
	printf("\n\nFT_ISASCII\n");
	printf(" ft_isascii c, C, 129 ==> %d, %d, %d", ft_isascii('c'), ft_isascii('C'), ft_isascii(129));
	printf("\n isascii    c, C, 129 ==> %d, %d, %d", isascii('c'), isascii('C'), isascii(129));

// FT_ISALNUM
	printf("\n\nFT_ISALNUM\n");
	printf(" ft_isalnum c, 9, + ==> %d, %d, %d", ft_isalnum('c'), ft_isalnum('9'), ft_isalnum('+'));
	printf("\n isalnum    c, 9, + ==> %d, %d, %d", isalnum('c'), isalnum('9'), isalnum('+'));

//FT_ISDIGIT
	printf("\n\nFT_ISDIGIT\n");
	printf(" ft_isdigit 0, 9, c ==> %d, %d, %d", ft_isdigit('0'), ft_isdigit('9'), ft_isdigit('c'));
	printf("\n isdigit    0, 9, c ==> %d, %d, %d", isdigit('0'), isdigit('9'), isdigit('c'));

//FT_STRLEN
	printf("\n\nFT_STRLEN\n");
	printf(" ft_strlen salutles (8) ==> %zu", ft_strlen("salutles"));
	printf("\n ft_strlen   salutles (8) ==> %lu", strlen("salutles"));

//FT_MEMCMP
	char *mcs1 = "to5u";
	char *mcs2 = "toZzu";
	size_t mcssize = 3;
	printf("\n\nFT_MEMCMP\n");
	printf(" ft_memcmp s1 = %s, s2 = %s, size = %zu ==> %d", mcs1, mcs2, mcssize, ft_memcmp(mcs1, mcs2, mcssize));
	printf("\n memcmp    s1 = %s, s2 = %s, size = %zu ==> %d", mcs1, mcs2, mcssize, memcmp(mcs1, mcs2, mcssize));

// FT_MEMCHR
	char *mchr = "salutcouzzz";
	char cchr = 'u';
	size_t nchr = 8;
	printf("\n\nFT_MEMCHR\n");
	printf(" ft_memchr %s, %c, %zu ==> %s", mchr, cchr, nchr, ft_memchr(mchr, cchr, nchr));
	printf("\n memchr    %s, %c, %zu ==> %s", mchr, cchr, nchr, memchr(mchr, cchr, nchr));

// FT_MEMMOVE
	char mm[] = "coucoulesamis!";
	char mmv[] = "cavabien?";
	char mm1[] = "coucoulesamis!";
	char mmv1[] = "cavabien?";
	size_t ms = 10;
	printf("\n\nFT_MEMMOVE\n");
	printf(" ft_memmove  %s, %zu ==> %s", mmv1, ms, ft_memmove(mm1 + 2, mm1, ms));
	printf("\n dest %s", mm1);
	printf("\n memmove     %s, %zu ==> %s", mmv, ms, memmove(mm + 2, mm, ms));
	printf("\n dest %s", mm); 

// FT_MEMCPY
 	char mc[] = "coucoulesamis!";
 	char mcs[] = "cavabien?";
 	char mc1[] = "coucoulesamis!";
 	char mcs11[] = "cavabien?";
 	size_t msc = 7;
 	printf("\n\nFT_MEMCPY\n");
 	printf(" ft_memcpy  %s, %zu ==> %s", mcs, msc, ft_memcpy(mc, mcs, msc));
 	printf("\n dest %s", mc);
 	printf("\n memcpy     %s, %zu ==> %s", mcs11, msc, memcpy(mc1, mcs11, msc));
 	printf("\n dest %s", mc1);

// FT_MEMCCPY
	char dmcc[] = "hellocava?";
	char smcc[] = "laforme";
	char cmcc = 'o';
	char dmcc1[] = "hellocava?";
	char smcc1[] = "laforme";
	size_t nmcc = 5;
	printf("\n\nFT_MEMCCPY\n");
	printf(" ft_memccpy ==> %s", ft_memccpy(dmcc1, smcc1, cmcc, nmcc));
	printf("\n dest : %s", dmcc1);
	printf("\n memccpy ==> %s", memccpy(dmcc, smcc, cmcc, nmcc));
	printf("\n dest : %s", dmcc);

// FT_MEMSET
	char bms[] = "coucoulesamis";
	char bms1[] = "coucoulesamis";
	char cms = 'z';
	size_t lms = 5;
	printf("\n\nFT_MEMSET\n");
	printf(" ft_memset ==> %s", ft_memset(bms1, cms, lms));
	printf("\n String b : %s", bms1);
	printf("\n memset    ==> %s", memset(bms, cms, lms));
	printf("\n String b : %s", bms);

// FT_BZERO
	char sbz[] = "yolesamis";
	size_t nbz = 5;
	printf("\n\nFT_BZERO\n");
	bzero(sbz, nbz);
	printf("bzero ==> %s", sbz);

// FT_STRDUP
	char *s1dup = "Yolesamis";
	char *s2dup = ft_strdup(s1dup);
	char *s3dup = strdup(s1dup);
	printf("\n\nFT_STRDUP\n");
	printf(" ft_strdup ==> %s", s2dup);
	printf("\n strdup    ==> %s", s3dup);

// FT_CALLOC
	size_t countc = 5;
    size_t sizec = 4;
    char *tcal1 = ft_calloc(countc, sizec);
    char *tcal2 = calloc(countc, sizec);
	printf("\n\nFT_CALLOC\n");
    printf("%s", tcal1);
    printf("%s", tcal2);
    
// FT_PUTNBR_FD
    int nbput = 2147384648;
    int fdput = 1;
    ft_putnbr_fd(nbput, fdput);
    
// FT_PUTSTR_FD
    char *strtest = "coucoulesamis";
    ft_putstr_fd(strtest, 1);
    
// FT_PUTENDL_FD
    char *strtest2 = "coucoulesamis";
    ft_putendl_fd(strtest2, 1);

// FT_ITOA
	int nbitoa = 0;
	printf("\n ft_itoa ==> %s", ft_itoa(nbitoa));

// FT_SPLIT
		
	char *ssplit = "coucaujjjiu\0les\0amis\0cava";
	printf("\n\nFT_SPLIT\n");
	char **test;
	test = ft_split(ssplit, '\0');
	while (*test)
	{	printf("\n %s\n", *test);
		test++; 
	}

// FT_STRTRIM
	char *s1 = "coucou";
	//char *s2 = "";
	char *ret = ft_strtrim(s1, " cou");
	//char *strim = "          \t  \n ";
	//char *strimres = ft_strtrim(strim, "");
	printf("\n\nFT_STRTRIM\n");
	printf(" %s", ret);
*/
// FT_SUBSTR
/*
	char *ssub = "\0";
	printf("\n\nFT_SUBSTR\n");
	printf(" %s\n", ft_substr(ssub, 0, 0)); 
	*//*
	puts("** Part 2");
	puts("* ft_substr");

	write(1, "test0\n", 6);
free(ft_substr(NULL, 631561802, 313071226));
	write(1, "test1\n", 6);
free(ft_substr("6uy0chRyZZWpu5NYfMlxKsrRpJXQu6982UafTeDENjOFujWzWb24iuu76S8EtDN54HyUxOdueKf4jO", 1329041569, 740758163));
write(1, "test2\n", 6);
free(ft_substr("2FhVigsao4MXhkYA4lRKpWnQcypM9qGggv79SkiI1hJgg75oCMgkKupi", 994616530, 594349892));
write(1, "test3\n", 6);
free(ft_substr("", 1703705577, 1942969750));
write(1, "test4\n", 6);
free(ft_substr("YqwZjKeN3zkMDkunWm8f7Wlm11ayzqAGZW5xreuvcbpnXOfRBJj62mJY0EMZB9l1hVLJyqr0cPpt3tGgKfea00I", 2053544156, 213700744));
write(1, "test5\n", 6);
free(ft_substr(NULL, 1466894444, 732038820));
write(1, "test6\n", 6);
free(ft_substr("hkjLaVTdQ8eM4Y6T9XlNeHAETVHgOTBLy4gHFxZkpna8s9TyVnyaMZgEYEQjLMXW4evdqUuifI9ZU8j1xZxxat7r1UoQ81p9jW00", 1191773165, 234444709));
write(1, "test7\n", 6);
free(ft_substr("gE1XfvYMdVPHaxnlXKhSvCAhRgASdfxtFuEVNazBtRHCPVoLLYHcRSWgCCtUeLEgeKvOf60Rn79Gi1wOy", 2050971765, 710324448));
write(1, "test8\n", 6);
free(ft_substr("", 1292438530, 70043979));
write(1, "test9\n", 6);
free(ft_substr("rzdIkNB9u", 1102817, 1889894653));
write(1, "test10\n", 7);
free(ft_substr("qRqOYYwAPNgXULJArmfEuRI6QwOxxjnX4TizWPh0yQiHGWTbENaTCnZilbO5GWl2sDyneg0Xdy7vh945AmK3Jvzrd", 53083339, 127485596));
write(1, "test11\n", 7);
free(ft_substr("", 143132129, 2044443794));
write(1, "test12\n", 7);
free(ft_substr("", 783361996, 47858933));
write(1, "test13\n", 7);
free(ft_substr("ExFreEjWqTYkmDRyGp682T84uToQsKTDmXaM6lwUIPkY71qWOZY0hdE0BkWj2", 1170180432, 1139393766));
write(1, "test14\n", 7);
free(ft_substr("", 1737996265, 1245923590));
write(1, "test15\n", 7);
free(ft_substr(NULL, 1744572977, 293969332));
free(ft_substr("", 143739764, 1159533123));
free(ft_substr("", 1767790266, 114753451));
free(ft_substr("", 2043186265, 245079578));
free(ft_substr(NULL, 933694911, 1404608993));
free(ft_substr("2Iew6q98YHonHSUm6YF4nkAX9CS5mN3ehh22wZY9LYxIifb44qKba9srayWNKM37", 183176252, 142708401));
free(ft_substr("", 833550679, 1066532749));
free(ft_substr(NULL, 1162118979, 262357637));
free(ft_substr(NULL, 1358054923, 1705418827));
free(ft_substr("", 646693862, 1672764776));
free(ft_substr("", 136984893, 977003927));
free(ft_substr(NULL, 1280507867, 1391698528));
free(ft_substr(NULL, 1943664846, 164083219));
free(ft_substr("", 898483019, 1400450275));
free(ft_substr("OYozEIN4nem", 1448753633, 1023691670));
	*/
/*
// FT_STRJOIN
	char *sj1 = "my favorite animal is ";
	char *sj2 = sj1 + 20;
	char *res = ft_strjoin(sj1, sj2);
	printf("\n\nFT_STRJOIN\n %s", res); */
/*
	int		main(int argc, const char *argv[])
{
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
		ft_print_result(ft_strncmp("salut", "salut", 5));
	else if (arg == 2)
		ft_print_result(ft_strncmp("test", "testss", 7));
	else if (arg == 3)
		ft_print_result(ft_strncmp("testss", "test", 7));
	else if (arg == 4)
		ft_print_result(ft_strncmp("test", "tEst", 4));
	else if (arg == 5)
		ft_print_result(ft_strncmp("", "test", 4));
	else if (arg == 6)
		ft_print_result(ft_strncmp("test", "", 4));
	else if (arg == 7)
		ft_print_result(ft_strncmp("abcdefghij", "abcdefgxyz", 3));
	else if (arg == 8)
		ft_print_result(ft_strncmp("abcdefgh", "abcdwxyz", 4));
	else if (arg == 9)
		ft_print_result(ft_strncmp("zyxbcdefgh", "abcdwxyz", 0));
	else if (arg == 10)
		ft_print_result(ft_strncmp("abcdefgh", "", 0));
	else if (arg == 11)
		ft_print_result(ft_strncmp("test\200", "test\0", 6));
	return (0);
} */
t_list *l = ft_lstnew(strdup(" 1 2 3 "), 8);

l->next = ft_lstnew(strdup("ss"), 3);
l->next->next = ft_lstnew(strdup("-_-"), 4);
ft_lstiter(l, lstiter_f);
}
