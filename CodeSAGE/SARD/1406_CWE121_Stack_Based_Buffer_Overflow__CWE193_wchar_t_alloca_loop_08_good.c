#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN2((10)*sizeof(wchar_t));
 wchar_t * VAR4 = (wchar_t *)FUN2((10+1)*sizeof(wchar_t));
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 VAR2 = VAR4;
 VAR2[0] = VAR5'';
 }
 {
 wchar_t VAR6[10+1] = VAR7;
 size_t VAR8, VAR9;
 VAR9 = wcslen(VAR6);
 for (VAR8 = 0; VAR8 < VAR9 + 1; VAR8++)
 {
 VAR2[VAR8] = VAR6[VAR8];
 }
 FUN5(VAR2);
 }
}
static void FUN6()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN2((10)*sizeof(wchar_t));
 wchar_t * VAR4 = (wchar_t *)FUN2((10+1)*sizeof(wchar_t));
 if(FUN7())
 {
 VAR2 = VAR4;
 VAR2[0] = VAR5'';
 }
 {
 wchar_t VAR6[10+1] = VAR7;
 size_t VAR8, VAR9;
 VAR9 = wcslen(VAR6);
 for (VAR8 = 0; VAR8 < VAR9 + 1; VAR8++)
 {
 VAR2[VAR8] = VAR6[VAR8];
 }
 FUN5(VAR2);
 }
}
void FUN8()
{
 FUN1();
 FUN6();
}
#endif
