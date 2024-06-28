#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 VAR2 = VAR3;
 if(VAR4!=5)
 {
 FUN3("");
 }
 else
 {
 wmemset(VAR2, VAR5'', 50-1);
 VAR2[50-1] = VAR5'';
 }
 {
 wchar_t VAR6[50] = VAR5"";
 size_t VAR7, VAR8;
 VAR8 = wcslen(VAR2);
 for (VAR7 = 0; VAR7 < VAR8; VAR7++)
 {
 VAR6[VAR7] = VAR2[VAR7];
 }
 VAR6[50-1] = VAR5'';
 FUN4(VAR2);
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 VAR2 = VAR3;
 if(VAR4==5)
 {
 wmemset(VAR2, VAR5'', 50-1);
 VAR2[50-1] = VAR5'';
 }
 {
 wchar_t VAR6[50] = VAR5"";
 size_t VAR7, VAR8;
 VAR8 = wcslen(VAR2);
 for (VAR7 = 0; VAR7 < VAR8; VAR7++)
 {
 VAR6[VAR7] = VAR2[VAR7];
 }
 VAR6[50-1] = VAR5'';
 FUN4(VAR2);
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
