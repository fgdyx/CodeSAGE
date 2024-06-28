#ifndef VAR1
void FUN1(VAR2<char *> VAR3);
void FUN2()
{
 char * VAR4;
 VAR2<char *> VAR3;
 char VAR5[VAR6] = "";
 VAR4 = VAR5;
 {
 size_t VAR7 = strlen(VAR4);
 char * VAR8 = FUN3(VAR9);
 if (VAR8 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 strncat(VAR4+VAR7, VAR8, VAR6-VAR7-1);
 }
 }
 VAR3.FUN4(VAR4);
 VAR3.FUN4(VAR4);
 VAR3.FUN4(VAR4);
 FUN1(VAR3);
}
#endif
