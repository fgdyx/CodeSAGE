#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN2((10)*sizeof(wchar_t));
 wchar_t * VAR4 = (wchar_t *)FUN2((10+1)*sizeof(wchar_t));
 VAR2 = VAR4;
 VAR2[0] = VAR5'';
 {
 wchar_t * VAR6 = VAR2;
 wchar_t * VAR2 = VAR6;
 {
 wchar_t VAR7[10+1] = VAR8;
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
