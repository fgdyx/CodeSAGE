#ifndef VAR1
void FUN1()
{
 int VAR2;
 CWE195_Signed_to_Unsigned_Conversion_Error__negative_malloc_34_unionType VAR3;
 VAR2 = -1;
 /* FLAW: Use a negative number */
 VAR2 = -1;
 VAR3.VAR4 = VAR2;
 {
 int VAR2 = VAR3.VAR5;
 if (VAR2 < 100)
 {
 /* POTENTIAL FLAW: malloc() takes a size_t (unsigned int) as input and therefore if it is negative,
 * the conversion will cause malloc() to allocate a very large amount of data or fail */
 char * VAR6 = (char *)malloc(VAR2);
 memset(VAR6, '', VAR2-1);
 VAR6[VAR2-1] = '';
 FUN2(VAR6);
 free(VAR6);
 }
 }
}
#endif
