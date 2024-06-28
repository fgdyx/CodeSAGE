#ifndef VAR1
static char * FUN1(char * VAR2)
{
 {
 size_t VAR3 = strlen(VAR2);
 if (100-VAR3 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (fgets(VAR2+VAR3, (int)(100-VAR3), stdin) != NULL)
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
 char VAR4[100] = "";
 VAR2 = VAR4;
 VAR2 = FUN1(VAR2);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 fprintf(VAR5, VAR2);
}
#endif
