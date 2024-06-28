#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN2(50*sizeof(wchar_t));
 wchar_t * VAR4 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 if(FUN3())
 {
 VAR2 = VAR4;
 VAR2[0] = VAR5'';
 }
 else
 {
 VAR2 = VAR4;
 VAR2[0] = VAR5'';
 }
 {
 size_t VAR6;
 wchar_t VAR7[100];
 wmemset(VAR7, VAR5'', 100-1);
 VAR7[100-1] = VAR5'';
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR2[VAR6] = VAR7[VAR6];
 }
 VAR2[100-1] = VAR5'';
 FUN4(VAR2);
 }
}
void FUN5()
{
 FUN1();
}
#endif
