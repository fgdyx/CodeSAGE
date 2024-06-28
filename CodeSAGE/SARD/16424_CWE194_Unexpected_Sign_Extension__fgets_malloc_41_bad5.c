#ifndef VAR1
void FUN1(short VAR2)
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
 short VAR2;
 VAR2 = 0;
 {
 char VAR4[VAR5] = "";
 /* FLAW: Use a value input from the console using fgets() */
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR2 = (short)FUN4(VAR4);
 }
 else
 {
 FUN2("");
 }
 }
 FUN1(VAR2);
}
#endif
