#ifndef VAR1
void FUN1(wchar_t * &VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 VAR2 = new wchar_t[100];
 FUN1(VAR2);
 {
 wchar_t VAR3[50] = VAR4"";
 size_t VAR5, VAR6;
 VAR6 = wcslen(VAR2);
 for (VAR5 = 0; VAR5 < VAR6; VAR5++)
 {
 VAR3[VAR5] = VAR2[VAR5];
 }
 VAR3[50-1] = VAR4'';
 FUN3(VAR2);
 delete [] VAR2;
 }
}
void FUN4()
{
 FUN2();
}
#endif
