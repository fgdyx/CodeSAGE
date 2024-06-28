#ifndef VAR1
static void FUN1()
{
 int VAR2;
 wchar_t * VAR3;
 wchar_t * VAR4 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 VAR3 = VAR4;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 wmemset(VAR3, VAR5'', 50-1);
 VAR3[50-1] = VAR5'';
 }
 {
 wchar_t VAR6[50] = VAR5"";
 size_t VAR7, VAR8;
 VAR8 = wcslen(VAR3);
 for (VAR7 = 0; VAR7 < VAR8; VAR7++)
 {
 VAR6[VAR7] = VAR3[VAR7];
 }
 VAR6[50-1] = VAR5'';
 FUN3(VAR3);
 }
}
void FUN4()
{
 FUN1();
}
#endif
