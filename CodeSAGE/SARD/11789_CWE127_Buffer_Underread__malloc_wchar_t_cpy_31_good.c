#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 {
 wchar_t * VAR3 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 VAR2 = VAR3;
 }
 {
 wchar_t * VAR5 = VAR2;
 wchar_t * VAR2 = VAR5;
 {
 wchar_t VAR6[100*2];
 wmemset(VAR6, VAR4'', 100*2-1);
 VAR6[100*2-1] = VAR4'';
 wcscpy(VAR6, VAR2);
 FUN2(VAR6);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
