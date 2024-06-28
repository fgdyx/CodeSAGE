#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 {
 wchar_t VAR3[50] = VAR4"";
 size_t VAR5, VAR6;
 VAR6 = wcslen(VAR2);
 for (VAR5 = 0; VAR5 < VAR6; VAR5++)
 {
 VAR3[VAR5] = VAR2[VAR5];
 }
 VAR3[50-1] = VAR4'';
 FUN2(VAR2);
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 void (*VAR7) (wchar_t *) = VAR8;
 wchar_t VAR9[100];
 VAR2 = VAR9;
 wmemset(VAR2, VAR4'', 50-1);
 VAR2[50-1] = VAR4'';
 FUN4(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
