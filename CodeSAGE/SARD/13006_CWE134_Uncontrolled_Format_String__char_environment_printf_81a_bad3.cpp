#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 {
 size_t VAR4 = strlen(VAR2);
 char * VAR5 = FUN2(VAR6);
 if (VAR5 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 strncat(VAR2+VAR4, VAR5, 100-VAR4-1);
 }
 }
 const VAR7& VAR8 = FUN3();
 VAR8.FUN4(VAR2);
}
#endif
