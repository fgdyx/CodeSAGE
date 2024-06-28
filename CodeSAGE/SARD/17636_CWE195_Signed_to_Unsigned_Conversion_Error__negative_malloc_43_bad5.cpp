#ifndef VAR1
static void FUN1(int &VAR2)
{
 /* FLAW: Use a negative number */
 VAR2 = -1;
}
void FUN2()
{
 int VAR2;
 VAR2 = -1;
 FUN1(VAR2);
 if (VAR2 < 100)
 {
 /* POTENTIAL FLAW: malloc() takes a size_t (unsigned int) as input and therefore if it is negative,
 * the conversion will cause malloc() to allocate a very large amount of data or fail */
 char * VAR3 = (char *)malloc(VAR2);
 memset(VAR3, '', VAR2-1);
 VAR3[VAR2-1] = '';
 FUN3(VAR3);
 free(VAR3);
 }
}
#endif
