#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(1)
 {
 {
 size_t VAR4 = strlen(VAR2);
 if (100-VAR4 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (fgets(VAR2+VAR4, (int)(100-VAR4), stdin) != NULL)
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
 }
 if(1)
 {
 {
 char VAR5[100] = "";
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN3(VAR5, 100-1, VAR2);
 FUN2(VAR5);
 }
 }
}
#endif
