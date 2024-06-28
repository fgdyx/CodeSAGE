#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[250] = "";
 VAR2 = VAR3;
 {
 size_t VAR4 = strlen(VAR2);
 if (250-VAR4 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (fgets(VAR2+VAR4, (int)(250-VAR4), stdin) != NULL)
 {
 VAR4 = strlen(VAR2);
 if (VAR4 > 0 && VAR2[VAR4-1] == '')
 {
 VAR2[VAR4-1] = '';
 }
 }
 else
 {
 FUN2("");
 VAR2[VAR4] = '';
 }
 }
 }
 const VAR5& VAR6 = FUN3();
 VAR6.FUN4(VAR2);
}
#endif
