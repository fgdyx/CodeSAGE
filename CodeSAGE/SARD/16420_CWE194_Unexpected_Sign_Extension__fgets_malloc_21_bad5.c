#ifndef VAR1
static int VAR2 = 0;
static short FUN1(short VAR3)
{
 if(VAR2)
 {
 {
 char VAR4[VAR5] = "";
 /* FLAW: Use a value input from the console using fgets() */
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR3 = (short)FUN2(VAR4);
 }
 else
 {
 FUN3("");
 }
 }
 }
 return VAR3;
}
void FUN4()
{
 short VAR3;
 VAR3 = 0;
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 if (VAR3 < 100)
 {
 /* POTENTIAL FLAW: malloc() takes a size_t (unsigned int) as input and therefore if it is negative,
 * the conversion will cause malloc() to allocate a very large amount of data or fail */
 char * VAR6 = (char *)malloc(VAR3);
 memset(VAR6, '', VAR3-1);
 VAR6[VAR3-1] = '';
 FUN3(VAR6);
 free(VAR6);
 }
}
#endif
