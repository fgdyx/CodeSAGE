#ifndef VAR1
void FUN1(char * &VAR2);
void FUN2()
{
 char * VAR2;
 char VAR3[250] = "";
 VAR2 = VAR3;
 FUN1(VAR2);
 /* POTENTIAL FLAW: Set a new environment variable with a path that is possibly insecure */
 FUN3(VAR2);
}
#endif
