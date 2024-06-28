#ifndef VAR1
void FUN1()
{
 goto VAR2;
VAR2:
 {
 char VAR3[100] = "";
 size_t VAR4 = 0;
 HANDLE VAR5;
 char * VAR6 = "";
 char * VAR7 = "";
 if (fgets(VAR3, 100, stdin) == NULL)
 {
 FUN2("");
 VAR3[0] = '';
 }
 VAR4 = strlen(VAR3);
 if (VAR4 > 0)
 {
 VAR3[VAR4-1] = '';
 }
 if (FUN3(
 VAR6,
 VAR7,
 VAR3,
 VAR8,
 VAR9,
 &VAR5) != 0)
 {
 FUN2("");
 FUN4(VAR5);
 }
 else
 {
 FUN2("");
 }
 /* FLAW: Release password from the stack without first clearing the buffer */
 }
}
#endif
