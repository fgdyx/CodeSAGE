#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 {
 wchar_t VAR3[50] = VAR4"";
 FUN2(VAR3, wcslen(VAR2), VAR4"", VAR2);
 FUN3(VAR2);
 delete [] VAR2;
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = new wchar_t[100];
 wmemset(VAR2, VAR4'', 50-1);
 VAR2[50-1] = VAR4'';
 FUN1(VAR2);
}
void FUN5()
{
 FUN4();
}
#endif
