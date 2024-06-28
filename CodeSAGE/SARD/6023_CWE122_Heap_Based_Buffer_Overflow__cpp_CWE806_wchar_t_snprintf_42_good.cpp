#ifndef VAR1
static wchar_t * FUN1(wchar_t * VAR2)
{
 wmemset(VAR2, VAR3'', 50-1);
 VAR2[50-1] = VAR3'';
 return VAR2;
}
static void FUN2()
{
 wchar_t * VAR2;
 VAR2 = new wchar_t[100];
 VAR2 = FUN1(VAR2);
 {
 wchar_t VAR4[50] = VAR3"";
 FUN3(VAR4, wcslen(VAR2), VAR3"", VAR2);
 FUN4(VAR2);
 delete [] VAR2;
 }
}
void FUN5()
{
 FUN2();
}
#endif
