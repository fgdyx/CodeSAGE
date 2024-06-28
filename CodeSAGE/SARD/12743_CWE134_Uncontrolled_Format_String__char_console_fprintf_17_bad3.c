#ifndef VAR1
void FUN1()
{
 int VAR2,VAR3;
 char * VAR4;
 char VAR5[100] = "";
 VAR4 = VAR5;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 {
 size_t VAR6 = strlen(VAR4);
 if (100-VAR6 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (fgets(VAR4+VAR6, (int)(100-VAR6), stdin) != NULL)
 {
 VAR6 = strlen(VAR4);
 if (VAR6 > 0 && VAR4[VAR6-1] == '')
 {
 VAR4[VAR6-1] = '';
 }
 }
 else
 {
 FUN2("");
 VAR4[VAR6] = '';
 }
 }
 }
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 fprintf(VAR7, VAR4);
 }
}
#endif
