#ifndef VAR1
static void FUN1(short &VAR2)
{
 {
 char VAR3[VAR4] = "";
 /* FLAW: Use a value input from the console using fgets() */
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = (short)FUN2(VAR3);
 }
 else
 {
 FUN3("");
 }
 }
}
void FUN4()
{
 short VAR2;
 VAR2 = 0;
 FUN1(VAR2);
 if (VAR2 < 100)
 {
 /* POTENTIAL FLAW: malloc() takes a size_t (unsigned int) as input and therefore if it is negative,
 * the conversion will cause malloc() to allocate a very large amount of data or fail */
 char * VAR5 = (char *)malloc(VAR2);
 memset(VAR5, '', VAR2-1);
 VAR5[VAR2-1] = '';
 FUN3(VAR5);
 free(VAR5);
 }
}
#endif
