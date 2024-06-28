#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 {
 wchar_t VAR3[50] = VAR4"";
 wcsncpy(VAR3, VAR2, wcslen(VAR2));
 VAR3[50-1] = VAR4'';
 FUN2(VAR2);
 delete [] VAR2;
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 VAR2 = new wchar_t[100];
 wmemset(VAR2, VAR4'', 50-1);
 VAR2[50-1] = VAR4'';
 FUN1(VAR2);
}
void FUN4()
{
 FUN3();
}
#endif
