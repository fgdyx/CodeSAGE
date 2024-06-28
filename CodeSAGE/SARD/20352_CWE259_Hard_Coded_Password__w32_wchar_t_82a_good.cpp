#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 {
 size_t VAR5 = 0;
 if (FUN2(VAR2, 100, stdin) == NULL)
 {
 FUN3("");
 VAR2[0] = VAR4'';
 }
 VAR5 = wcslen(VAR2);
 if (VAR5 > 0)
 {
 VAR2[VAR5-1] = VAR4'';
 }
 }
 VAR6* VAR7 = new VAR8;
 VAR7->FUN4(VAR2);
 delete VAR7;
}
void FUN5()
{
 FUN1();
}
#endif
