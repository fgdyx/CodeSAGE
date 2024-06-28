#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 wcscpy(VAR2, VAR4"");
 VAR5* VAR6 = new VAR7;
 VAR6->FUN2(VAR2);
 delete VAR6;
}
static void FUN3()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 {
 size_t VAR8 = wcslen(VAR2);
 wchar_t * VAR9 = FUN4(VAR10);
 if (VAR9 != NULL)
 {
 wcsncat(VAR2+VAR8, VAR9, 100-VAR8-1);
 }
 }
 VAR5* VAR6 = new VAR11;
 VAR6->FUN2(VAR2);
 delete VAR6;
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
