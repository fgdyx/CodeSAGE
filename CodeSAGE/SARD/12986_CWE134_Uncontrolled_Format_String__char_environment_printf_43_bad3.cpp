#ifndef VAR1
static void FUN1(char * &VAR2)
{
 {
 size_t VAR3 = strlen(VAR2);
 char * VAR4 = FUN2(VAR5);
 if (VAR4 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 strncat(VAR2+VAR3, VAR4, 100-VAR3-1);
 }
 }
}
void FUN3()
{
 char * VAR2;
 char VAR6[100] = "";
 VAR2 = VAR6;
 FUN1(VAR2);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN4(VAR2);
}
#endif
