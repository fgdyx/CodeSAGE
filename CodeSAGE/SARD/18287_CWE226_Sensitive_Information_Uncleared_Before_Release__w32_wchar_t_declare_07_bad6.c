#ifndef VAR1
void FUN1()
{
 if(VAR2==5)
 {
 {
 wchar_t VAR3[100] = VAR4"";
 size_t VAR5 = 0;
 HANDLE VAR6;
 wchar_t * VAR7 = VAR4"";
 wchar_t * VAR8 = VAR4"";
 if (FUN2(VAR3, 100, stdin) == NULL)
 {
 FUN3("");
 VAR3[0] = VAR4'';
 }
 VAR5 = wcslen(VAR3);
 if (VAR5 > 0)
 {
 VAR3[VAR5-1] = VAR4'';
 }
 if (FUN4(
 VAR7,
 VAR8,
 VAR3,
 VAR9,
 VAR10,
 &VAR6) != 0)
 {
 FUN3("");
 FUN5(VAR6);
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
