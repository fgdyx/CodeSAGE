#ifndef VAR1
static wchar_t * FUN1(wchar_t * VAR2)
{
 {
 wchar_t * VAR3 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 VAR2 = VAR3;
 }
 return VAR2;
}
static void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = FUN1(VAR2);
 {
 wchar_t VAR5[100*2];
 wmemset(VAR5, VAR4'', 100*2-1);
 VAR5[100*2-1] = VAR4'';
 wcscpy(VAR5, VAR2);
 FUN3(VAR5);
 }
}
void FUN4()
{
 FUN2();
}
#endif
