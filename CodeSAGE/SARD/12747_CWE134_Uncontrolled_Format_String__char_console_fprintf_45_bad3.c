#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 fprintf(VAR4, VAR2);
}
void FUN2()
{
 char * VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 {
 size_t VAR6 = strlen(VAR2);
 if (100-VAR6 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (fgets(VAR2+VAR6, (int)(100-VAR6), stdin) != NULL)
 {
 VAR6 = strlen(VAR2);
 if (VAR6 > 0 && VAR2[VAR6-1] == '')
 {
 VAR2[VAR6-1] = '';
 }
 }
 else
 {
 FUN3("");
 VAR2[VAR6] = '';
 }
 }
 }
 VAR3 = VAR2;
 FUN1();
}
#endif
