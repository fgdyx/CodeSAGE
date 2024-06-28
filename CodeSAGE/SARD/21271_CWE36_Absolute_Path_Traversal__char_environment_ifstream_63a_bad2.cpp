#ifndef VAR1
void FUN1(char * * VAR2);
void FUN2()
{
 char * VAR3;
 char VAR4[VAR5] = "";
 VAR3 = VAR4;
 {
 size_t VAR6 = strlen(VAR3);
 char * VAR7 = FUN3(VAR8);
 if (VAR7 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 strncat(VAR3+VAR6, VAR7, VAR5-VAR6-1);
 }
 }
 FUN1(&VAR3);
}
#endif
