#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 char * VAR3;
 char VAR4[100] = "";
 VAR3 = VAR4;
 {
 size_t VAR5 = strlen(VAR3);
 if (100-VAR5 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (fgets(VAR3+VAR5, (int)(100-VAR5), stdin) != NULL)
 {
 VAR5 = strlen(VAR3);
 if (VAR5 > 0 && VAR3[VAR5-1] == '')
 {
 VAR3[VAR5-1] = '';
 }
 }
 else
 {
 FUN3("");
 VAR3[VAR5] = '';
 }
 }
 }
 FUN1(&VAR3);
}
#endif
