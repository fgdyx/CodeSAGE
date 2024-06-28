#ifndef VAR1
void FUN1(char * VAR2);
void FUN2()
{
 char * VAR2;
 void (*VAR3) (char *) = VAR4;
 char VAR5[100] = "";
 VAR2 = VAR5;
 {
 size_t VAR6 = strlen(VAR2);
 char * VAR7 = FUN3(VAR8);
 if (VAR7 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 strncat(VAR2+VAR6, VAR7, 100-VAR6-1);
 }
 }
 FUN4(VAR2);
}
#endif
