#ifndef VAR1
char * FUN1(char * VAR2);
static void FUN2(char * VAR2, ...)
{
 {
 char VAR3[100] = "";
 va_list VAR4;
 FUN3(VAR4, VAR2);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 vsnprintf(VAR3, 100-1, VAR2, VAR4);
 FUN4(VAR4);
 FUN5(VAR3);
 }
}
void FUN6()
{
 char * VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 VAR2 = FUN1(VAR2);
 FUN2(VAR2, VAR2);
}
#endif
