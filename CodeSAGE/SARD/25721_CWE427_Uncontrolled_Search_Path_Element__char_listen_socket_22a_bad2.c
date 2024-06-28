#ifndef VAR1
int VAR2 = 0;
char * FUN1(char * VAR3);
void FUN2()
{
 char * VAR3;
 char VAR4[250] = "";
 VAR3 = VAR4;
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 /* POTENTIAL FLAW: Set a new environment variable with a path that is possibly insecure */
 FUN3(VAR3);
}
#endif
