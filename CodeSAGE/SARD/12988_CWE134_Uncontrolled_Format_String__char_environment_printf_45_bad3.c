#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN2(VAR2);
}
void FUN3()
{
 char * VAR2;
 char VAR4[100] = "";
 VAR2 = VAR4;
 {
 size_t VAR5 = strlen(VAR2);
 char * VAR6 = FUN4(VAR7);
 if (VAR6 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 strncat(VAR2+VAR5, VAR6, 100-VAR5-1);
 }
 }
 VAR3 = VAR2;
 FUN1();
}
#endif
