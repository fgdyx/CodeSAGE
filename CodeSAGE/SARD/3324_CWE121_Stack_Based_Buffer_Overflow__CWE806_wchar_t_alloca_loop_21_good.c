#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static wchar_t * FUN1(wchar_t * VAR4)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 wmemset(VAR4, VAR5'', 50-1);
 VAR4[50-1] = VAR5'';
 }
 return VAR4;
}
static void FUN3()
{
 wchar_t * VAR4;
 wchar_t * VAR6 = (wchar_t *)FUN4(100*sizeof(wchar_t));
 VAR4 = VAR6;
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 {
 wchar_t VAR7[50] = VAR5"";
 size_t VAR8, VAR9;
 VAR9 = wcslen(VAR4);
 for (VAR8 = 0; VAR8 < VAR9; VAR8++)
 {
 VAR7[VAR8] = VAR4[VAR8];
 }
 VAR7[50-1] = VAR5'';
 FUN5(VAR4);
 }
}
static wchar_t * FUN6(wchar_t * VAR4)
{
 if(VAR3)
 {
 wmemset(VAR4, VAR5'', 50-1);
 VAR4[50-1] = VAR5'';
 }
 return VAR4;
}
static void FUN7()
{
 wchar_t * VAR4;
 wchar_t * VAR6 = (wchar_t *)FUN4(100*sizeof(wchar_t));
 VAR4 = VAR6;
 VAR3 = 1;
 VAR4 = FUN6(VAR4);
 {
 wchar_t VAR7[50] = VAR5"";
 size_t VAR8, VAR9;
 VAR9 = wcslen(VAR4);
 for (VAR8 = 0; VAR8 < VAR9; VAR8++)
 {
 VAR7[VAR8] = VAR4[VAR8];
 }
 VAR7[50-1] = VAR5'';
 FUN5(VAR4);
 }
}
void FUN8()
{
 FUN3();
 FUN7();
}
#endif
