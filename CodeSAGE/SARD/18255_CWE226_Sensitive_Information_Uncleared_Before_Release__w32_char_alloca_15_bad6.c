#ifndef VAR1
void FUN1()
{
 switch(6)
 {
 case 6:
 {
 char * VAR2 = (char *)FUN2(100*sizeof(char));
 size_t VAR3 = 0;
 HANDLE VAR4;
 char * VAR5 = "";
 char * VAR6 = "";
 VAR2[0] = '';
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
 break;
 default:
 FUN3("");
 break;
 }
}
#endif
