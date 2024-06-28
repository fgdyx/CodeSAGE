#ifndef VAR1
void FUN1(int VAR2)
{
 if (VAR2 < 100)
 {
 /* POTENTIAL FLAW: malloc() takes a size_t (unsigned int) as input and therefore if it is negative,
 * the conversion will cause malloc() to allocate a very large amount of data or fail */
 char * VAR3 = (char *)malloc(VAR2);
 memset(VAR3, '', VAR2-1);
 VAR3[VAR2-1] = '';
 FUN2(VAR3);
 free(VAR3);
 }
}
void FUN3()
{
 int VAR2;
 VAR2 = -1;
 /* FLAW: Use a negative number */
 VAR2 = -1;
 FUN1(VAR2);
}
#endif
