#ifndef VAR1
int VAR2 = 0;
short FUN1(short VAR3);
void FUN2()
{
 short VAR3;
 VAR3 = 0;
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 if (VAR3 < 100)
 {
 /* POTENTIAL FLAW: malloc() takes a size_t (unsigned int) as input and therefore if it is negative,
 * the conversion will cause malloc() to allocate a very large amount of data or fail */
 char * VAR4 = (char *)malloc(VAR3);
 memset(VAR4, '', VAR3-1);
 VAR4[VAR3-1] = '';
 FUN3(VAR4);
 free(VAR4);
 }
}
#endif
