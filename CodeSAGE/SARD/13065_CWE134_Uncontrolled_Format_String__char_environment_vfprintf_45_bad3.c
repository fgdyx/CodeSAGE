#ifndef VAR1
static void FUN1(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN3(VAR4, VAR2, VAR3);
 FUN4(VAR3);
 }
}
static void FUN5()
{
 char * VAR2 = VAR5;
 FUN1(VAR2, VAR2);
}
void FUN6()
{
 char * VAR2;
 char VAR6[100] = "";
 VAR2 = VAR6;
 {
 size_t VAR7 = strlen(VAR2);
 char * VAR8 = FUN7(VAR9);
 if (VAR8 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 strncat(VAR2+VAR7, VAR8, 100-VAR7-1);
 }
 }
 VAR5 = VAR2;
 FUN5();
}
#endif
