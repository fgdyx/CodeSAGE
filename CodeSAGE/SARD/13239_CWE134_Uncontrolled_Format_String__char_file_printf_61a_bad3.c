#ifndef VAR1
char * FUN1(char * VAR2);
void FUN2()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 VAR2 = FUN1(VAR2);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN3(VAR2);
}
#endif
