#ifndef VAR1
void FUN1()
{
 if(FUN2())
 {
 {
 char VAR2[100] = "";
 size_t VAR3 = 0;
 HANDLE VAR4;
 char * VAR5 = "";
 char * VAR6 = "";
 if (fgets(VAR2, 100, stdin) == NULL)
 {
 FUN3("");
 VAR2[0] = '';
 }
 VAR3 = strlen(VAR2);
 if (VAR3 > 0)
 {
 VAR2[VAR3-1] = '';
 }
 if (FUN4(
 VAR5,
 VAR6,
 VAR2,
 VAR7,
 VAR8,
 &VAR4) != 0)
 {
 FUN3("");
 FUN5(VAR4);
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
