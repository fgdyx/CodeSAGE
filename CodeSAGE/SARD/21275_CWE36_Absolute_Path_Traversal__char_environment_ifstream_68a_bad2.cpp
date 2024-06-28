#ifndef VAR1
void FUN1();
void FUN2()
{
 char * VAR2;
 char VAR3[VAR4] = "";
 VAR2 = VAR3;
 {
 size_t VAR5 = strlen(VAR2);
 char * VAR6 = FUN3(VAR7);
 if (VAR6 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 strncat(VAR2+VAR5, VAR6, VAR4-VAR5-1);
 }
 }
 VAR8 = VAR2;
 FUN1();
}
#endif
