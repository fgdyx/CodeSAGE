#ifndef VAR1
void FUN1()
{
 int VAR2;
 int *VAR3 = &VAR2;
 int *VAR4 = &VAR2;
 VAR2 = -1;
 {
 int VAR2 = *VAR3;
 /* FLAW: Use a negative number */
 VAR2 = -1;
 *VAR3 = VAR2;
 }
 {
 int VAR2 = *VAR4;
 if (VAR2 < 100)
 {
 /* POTENTIAL FLAW: malloc() takes a size_t (unsigned int) as input and therefore if it is negative,
 * the conversion will cause malloc() to allocate a very large amount of data or fail */
 char * VAR5 = (char *)malloc(VAR2);
 memset(VAR5, '', VAR2-1);
 VAR5[VAR2-1] = '';
 FUN2(VAR5);
 free(VAR5);
 }
 }
}
#endif
