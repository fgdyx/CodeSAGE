#ifndef VAR1
void FUN1()
{
 while(1)
 {
 {
 char VAR2[100] = "";
 size_t VAR3 = 0;
 HANDLE VAR4;
 char * VAR5 = "";
 char * VAR6 = "";
 if (fgets(VAR2, 100, stdin) == NULL)
 {
 FUN2("");
 VAR2[0] = '';
 }
 VAR3 = strlen(VAR2);
 if (VAR3 > 0)
 {
 VAR2[VAR3-1] = '';
 }
 if (FUN3(
 VAR5,
 VAR6,
 VAR2,
 VAR7,
 VAR8,
 &VAR4) != 0)
 {
 FUN2("");
 FUN4(VAR4);
 }
 else
 {
 FUN2("");
 }
 /* FLAW: Release password from the stack without first clearing the buffer */
 }
 break;
 }
}
#endif
