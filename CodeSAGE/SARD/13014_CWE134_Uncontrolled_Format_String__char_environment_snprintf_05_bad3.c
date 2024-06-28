#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(VAR4)
 {
 {
 size_t VAR5 = strlen(VAR2);
 char * VAR6 = FUN2(VAR7);
 if (VAR6 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 strncat(VAR2+VAR5, VAR6, 100-VAR5-1);
 }
 }
 }
 if(VAR4)
 {
 {
 char VAR8[100] = "";
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN3(VAR8, 100-1, VAR2);
 FUN4(VAR8);
 }
 }
}
#endif
