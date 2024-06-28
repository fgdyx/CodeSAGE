#ifndef VAR1
void FUN1()
{
 if(VAR2)
 {
 {
 char * VAR3 = (char *)FUN2(100*sizeof(char));
 size_t VAR4 = 0;
 HANDLE VAR5;
 char * VAR6 = "";
 char * VAR7 = "";
 VAR3[0] = '';
 if (fgets(VAR3, 100, stdin) == NULL)
 {
 FUN3("");
 VAR3[0] = '';
 }
 VAR4 = strlen(VAR3);
 if (VAR4 > 0)
 {
 VAR3[VAR4-1] = '';
 }
 if (FUN4(
 VAR6,
 VAR7,
 VAR3,
 VAR8,
 VAR9,
 &VAR5) != 0)
 {
 FUN3("");
 FUN5(VAR5);
 }
 else
 {
 FUN3("");
 }
 /* FLAW: Release password from the stack without first clearing the buffer */
 }
 }
}
#endif
