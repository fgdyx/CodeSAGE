#ifndef VAR1
void FUN1()
{
 switch(6)
 {
 case 6:
 {
 wchar_t * VAR2 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 size_t VAR3 = 0;
 HANDLE VAR4;
 wchar_t * VAR5 = VAR6"";
 wchar_t * VAR7 = VAR6"";
 VAR2[0] = VAR6'';
 if (FUN3(VAR2, 100, stdin) == NULL)
 {
 FUN4("");
 VAR2[0] = VAR6'';
 }
 VAR3 = wcslen(VAR2);
 if (VAR3 > 0)
 {
 VAR2[VAR3-1] = VAR6'';
 }
 if (FUN5(
 VAR5,
 VAR7,
 VAR2,
 VAR8,
 VAR9,
 &VAR4) != 0)
 {
 FUN4("");
 FUN6(VAR4);
 }
 else
 {
 FUN4("");
 }
 /* FLAW: Release password from the stack without first clearing the buffer */
 }
 break;
 default:
 FUN4("");
 break;
 }
}
#endif
