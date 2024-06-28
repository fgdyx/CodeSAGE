#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[250] = "";
 VAR2 = VAR3;
 if(VAR4==5)
 {
 {
 size_t VAR5 = strlen(VAR2);
 char * VAR6 = FUN2(VAR7);
 if (VAR6 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 strncat(VAR2+VAR5, VAR6, 250-VAR5-1);
 }
 }
 }
 /* POTENTIAL FLAW: Set a new environment variable with a path that is possibly insecure */
 FUN3(VAR2);
}
#endif
