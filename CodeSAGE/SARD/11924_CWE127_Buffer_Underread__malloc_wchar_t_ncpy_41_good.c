#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 {
 wchar_t VAR3[100];
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 wcsncpy(VAR3, VAR2, wcslen(VAR3));
 VAR3[100-1] = VAR4'';
 FUN2(VAR3);
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 {
 wchar_t * VAR5 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wmemset(VAR5, VAR4'', 100-1);
 VAR5[100-1] = VAR4'';
 VAR2 = VAR5;
 }
 FUN1(VAR2);
}
void FUN4()
{
 FUN3();
}
#endif
