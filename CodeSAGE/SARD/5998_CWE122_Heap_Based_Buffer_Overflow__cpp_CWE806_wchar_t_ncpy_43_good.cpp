#ifndef VAR1
static void FUN1(wchar_t * &VAR2)
{
 wmemset(VAR2, VAR3'', 50-1);
 VAR2[50-1] = VAR3'';
}
static void FUN2()
{
 wchar_t * VAR2;
 VAR2 = new wchar_t[100];
 FUN1(VAR2);
 {
 wchar_t VAR4[50] = VAR3"";
 wcsncpy(VAR4, VAR2, wcslen(VAR2));
 VAR4[50-1] = VAR3'';
 FUN3(VAR2);
 delete [] VAR2;
 }
}
void FUN4()
{
 FUN2();
}
#endif
