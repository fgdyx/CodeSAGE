#ifndef VAR1
void FUN1()
{
 int VAR2,VAR3;
 char * VAR4;
 char VAR5[100] = "";
 VAR4 = VAR5;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 {
 size_t VAR6 = strlen(VAR4);
 char * VAR7 = FUN2(VAR8);
 if (VAR7 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 strncat(VAR4+VAR6, VAR7, 100-VAR6-1);
 }
 }
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 {
 char VAR9[100] = "";
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN3(VAR9, 100-1, VAR4);
 FUN4(VAR9);
 }
 }
}
#endif
