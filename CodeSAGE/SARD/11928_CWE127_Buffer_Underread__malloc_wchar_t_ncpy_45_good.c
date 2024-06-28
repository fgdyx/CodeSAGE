#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 wchar_t VAR4[100];
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 wcsncpy(VAR4, VAR2, wcslen(VAR4));
 VAR4[100-1] = VAR5'';
 FUN2(VAR4);
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 {
 wchar_t * VAR6 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wmemset(VAR6, VAR5'', 100-1);
 VAR6[100-1] = VAR5'';
 VAR2 = VAR6;
 }
 VAR3 = VAR2;
 FUN1();
}
void FUN4()
{
 FUN3();
}
#endif
