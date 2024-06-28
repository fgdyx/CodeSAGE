#ifndef VAR1
static char * FUN1(char * VAR2)
{
 {
 size_t VAR3 = strlen(VAR2);
 if (250-VAR3 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (fgets(VAR2+VAR3, (int)(250-VAR3), stdin) != NULL)
 {
 VAR3 = strlen(VAR2);
 if (VAR3 > 0 && VAR2[VAR3-1] == '')
 {
 VAR2[VAR3-1] = '';
 }
 }
 else
 {
 FUN2("");
 VAR2[VAR3] = '';
 }
 }
 }
 return VAR2;
}
void FUN3()
{
 char * VAR2;
 char VAR4[250] = "";
 VAR2 = VAR4;
 VAR2 = FUN1(VAR2);
 /* POTENTIAL FLAW: Set a new environment variable with a path that is possibly insecure */
 FUN4(VAR2);
}
#endif
