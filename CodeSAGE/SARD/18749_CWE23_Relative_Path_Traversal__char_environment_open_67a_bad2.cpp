#ifndef VAR1
void FUN1(structType VAR2);
void FUN2()
{
 char * VAR3;
 structType VAR2;
 char VAR4[VAR5] = VAR6;
 VAR3 = VAR4;
 {
 size_t VAR7 = strlen(VAR3);
 char * VAR8 = FUN3(VAR9);
 if (VAR8 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 strncat(VAR3+VAR7, VAR8, VAR5-VAR7-1);
 }
 }
 VAR2.VAR10 = VAR3;
 FUN1(VAR2);
}
#endif
