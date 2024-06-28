#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 while(1)
 {
 wmemset(VAR2, VAR3'', 50-1);
 VAR2[50-1] = VAR3'';
 break;
 }
 {
 wchar_t VAR4[50] = VAR3"";
 wcsncat(VAR4, VAR2, wcslen(VAR2));
 VAR4[50-1] = VAR3'';
 FUN2(VAR2);
 free(VAR2);
 }
}
void FUN3()
{
 FUN1();
}
#endif
