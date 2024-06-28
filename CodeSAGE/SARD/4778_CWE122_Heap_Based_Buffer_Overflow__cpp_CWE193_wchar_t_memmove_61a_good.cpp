#ifndef VAR1
wchar_t * FUN1(wchar_t * VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = FUN1(VAR2);
 {
 wchar_t VAR3[10+1] = VAR4;
 memmove(VAR2, VAR3, (wcslen(VAR3) + 1) * sizeof(wchar_t));
 FUN3(VAR2);
 delete [] VAR2;
 }
}
void FUN4()
{
 FUN2();
}
#endif
