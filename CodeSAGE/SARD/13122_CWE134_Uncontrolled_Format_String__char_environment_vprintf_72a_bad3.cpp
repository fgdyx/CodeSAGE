#ifndef VAR1
void FUN1(VAR2<char *> VAR3);
void FUN2()
{
 char * VAR4;
 VAR2<char *> VAR3;
 char VAR5[100] = "";
 VAR4 = VAR5;
 {
 size_t VAR6 = strlen(VAR4);
 char * VAR7 = FUN3(VAR8);
 if (VAR7 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 strncat(VAR4+VAR6, VAR7, 100-VAR6-1);
 }
 }
 VAR3.FUN4(VAR3.FUN5(), 1, VAR4);
 VAR3.FUN4(VAR3.FUN5(), 1, VAR4);
 VAR3.FUN4(VAR3.FUN5(), 1, VAR4);
 FUN1(VAR3);
}
#endif
