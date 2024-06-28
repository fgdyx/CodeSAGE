#ifndef VAR1
static void FUN1(char * VAR2)
{
 /* POTENTIAL FLAW: Set a new environment variable with a path that is possibly insecure */
 FUN2(VAR2);
}
void FUN3()
{
 char * VAR2;
 void (*VAR3) (char *) = VAR4;
 char VAR5[250] = "";
 VAR2 = VAR5;
 {
 size_t VAR6 = strlen(VAR2);
 if (250-VAR6 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (fgets(VAR2+VAR6, (int)(250-VAR6), stdin) != NULL)
 {
 VAR6 = strlen(VAR2);
 if (VAR6 > 0 && VAR2[VAR6-1] == '')
 {
 VAR2[VAR6-1] = '';
 }
 }
 else
 {
 FUN4("");
 VAR2[VAR6] = '';
 }
 }
 }
 FUN5(VAR2);
}
#endif
