#ifndef VAR1
void FUN1(short VAR2[])
{
 short VAR3 = VAR2[2];
 if (VAR3 < 100)
 {
 /* POTENTIAL FLAW: malloc() takes a size_t (unsigned int) as input and therefore if it is negative,
 * the conversion will cause malloc() to allocate a very large amount of data or fail */
 char * VAR4 = (char *)malloc(VAR3);
 memset(VAR4, '', VAR3-1);
 VAR4[VAR3-1] = '';
 FUN2(VAR4);
 free(VAR4);
 }
}
#endif
