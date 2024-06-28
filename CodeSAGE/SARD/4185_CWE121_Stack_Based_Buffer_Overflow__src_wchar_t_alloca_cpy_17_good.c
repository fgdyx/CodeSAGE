#ifndef VAR1
static void FUN1()
{
 int VAR2;
 wchar_t * VAR3;
 wchar_t * VAR4 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 VAR3 = VAR4;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 wmemset(VAR3, VAR5'', 50-1);
 VAR3[50-1] = VAR5'';
 }
 {
 wchar_t VAR6[50] = VAR5"";
 wcscpy(VAR6, VAR3);
 FUN3(VAR3);
 }
}
void FUN4()
{
 FUN1();
}
#endif
