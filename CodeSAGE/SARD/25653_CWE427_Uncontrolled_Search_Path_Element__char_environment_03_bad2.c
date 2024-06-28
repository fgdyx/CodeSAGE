#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[250] = "";
 VAR2 = VAR3;
 if(5==5)
 {
 {
 size_t VAR4 = strlen(VAR2);
 char * VAR5 = FUN2(VAR6);
 if (VAR5 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 strncat(VAR2+VAR4, VAR5, 250-VAR4-1);
 }
 }
 }
 /* POTENTIAL FLAW: Set a new environment variable with a path that is possibly insecure */
 FUN3(VAR2);
}
#endif
