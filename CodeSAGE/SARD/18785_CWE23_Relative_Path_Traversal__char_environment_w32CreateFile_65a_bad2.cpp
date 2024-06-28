#ifndef VAR1
void FUN1(char * VAR2);
void FUN2()
{
 char * VAR2;
 void (*VAR3) (char *) = VAR4;
 char VAR5[VAR6] = VAR7;
 VAR2 = VAR5;
 {
 size_t VAR8 = strlen(VAR2);
 char * VAR9 = FUN3(VAR10);
 if (VAR9 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 strncat(VAR2+VAR8, VAR9, VAR6-VAR8-1);
 }
 }
 FUN4(VAR2);
}
#endif
