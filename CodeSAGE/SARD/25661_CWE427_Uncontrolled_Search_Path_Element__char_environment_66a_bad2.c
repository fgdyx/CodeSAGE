#ifndef VAR1
void FUN1(char * VAR2[]);
void FUN2()
{
 char * VAR3;
 char * VAR2[5];
 char VAR4[250] = "";
 VAR3 = VAR4;
 {
 size_t VAR5 = strlen(VAR3);
 char * VAR6 = FUN3(VAR7);
 if (VAR6 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 strncat(VAR3+VAR5, VAR6, 250-VAR5-1);
 }
 }
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
