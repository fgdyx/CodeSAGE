#ifndef VAR1
void FUN1()
{
 while(1)
 {
 {
 wchar_t VAR2[100] = VAR3"";
 size_t VAR4 = 0;
 HANDLE VAR5;
 wchar_t * VAR6 = VAR3"";
 wchar_t * VAR7 = VAR3"";
 if (FUN2(VAR2, 100, stdin) == NULL)
 {
 FUN3("");
 VAR2[0] = VAR3'';
 }
 VAR4 = wcslen(VAR2);
 if (VAR4 > 0)
 {
 VAR2[VAR4-1] = VAR3'';
 }
 if (FUN4(
 VAR6,
 VAR7,
 VAR2,
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
 break;
 }
}
#endif
