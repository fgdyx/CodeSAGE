#ifndef VAR1
static wchar_t * FUN1(wchar_t * VAR2)
{
 VAR2 = new wchar_t[10+1];
 return VAR2;
}
static void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = FUN1(VAR2);
 {
 wchar_t VAR3[10+1] = VAR4;
 wcsncpy(VAR2, VAR3, wcslen(VAR3) + 1);
 FUN3(VAR2);
 delete [] VAR2;
 }
}
void FUN4()
{
 FUN2();
}
#endif
