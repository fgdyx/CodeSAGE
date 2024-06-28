#ifndef VAR1
static void FUN1(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN3(VAR2, VAR3);
 FUN4(VAR3);
 }
}
void FUN5()
{
 char * VAR2;
 char VAR4[100] = "";
 VAR2 = VAR4;
 if(1)
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
 if(1)
 {
 FUN1(VAR2, VAR2);
 }
}
#endif
