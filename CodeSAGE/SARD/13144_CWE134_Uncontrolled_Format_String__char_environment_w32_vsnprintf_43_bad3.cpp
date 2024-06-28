#ifndef VAR1
static void FUN1(char * VAR2, ...)
{
 {
 char VAR3[100] = "";
 va_list VAR4;
 FUN2(VAR4, VAR2);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 vsnprintf(VAR3, 100-1, VAR2, VAR4);
 FUN3(VAR4);
 FUN4(VAR3);
 }
}
static void FUN5(char * &VAR2)
{
 {
 size_t VAR5 = strlen(VAR2);
 char * VAR6 = FUN6(VAR7);
 if (VAR6 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 strncat(VAR2+VAR5, VAR6, 100-VAR5-1);
 }
 }
}
void FUN7()
{
 char * VAR2;
 char VAR8[100] = "";
 VAR2 = VAR8;
 FUN5(VAR2);
 FUN1(VAR2, VAR2);
}
#endif
