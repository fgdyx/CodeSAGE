#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * *VAR3 = &VAR2;
 wchar_t * *VAR4 = &VAR2;
 wchar_t * VAR5 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 wmemset(VAR5, VAR6'', 100-1);
 VAR5[100-1] = VAR6'';
 {
 wchar_t * VAR2 = *VAR3;
 VAR2 = VAR5;
 *VAR3 = VAR2;
 }
 {
 wchar_t * VAR2 = *VAR4;
 {
 wchar_t VAR7[100];
 wmemset(VAR7, VAR6'', 100-1);
 VAR7[100-1] = VAR6'';
 wcscpy(VAR2, VAR7);
 FUN3(VAR2);
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
