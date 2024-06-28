#ifndef VAR1
void FUN1(wchar_t * &VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 FUN1(VAR2);
 {
 wchar_t VAR3[10+1] = VAR4;
 size_t VAR5, VAR6;
 VAR6 = wcslen(VAR3);
 for (VAR5 = 0; VAR5 < VAR6 + 1; VAR5++)
 {
 VAR2[VAR5] = VAR3[VAR5];
 }
 FUN3(VAR2);
 delete [] VAR2;
 }
}
void FUN4()
{
 FUN2();
}
#endif
