#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(0)
 {
 FUN2("");
 }
 else
 {
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wmemset(VAR2, VAR3'', 100-1);
 VAR2[100-1] = VAR3'';
 }
 {
 wchar_t VAR4[100];
 wmemset(VAR4, VAR3'', 100-1);
 VAR4[100-1] = VAR3'';
 memmove(VAR4, VAR2, wcslen(VAR4)*sizeof(wchar_t));
 VAR4[100-1] = VAR3'';
 FUN3(VAR4);
 free(VAR2);
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(1)
 {
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wmemset(VAR2, VAR3'', 100-1);
 VAR2[100-1] = VAR3'';
 }
 {
 wchar_t VAR4[100];
 wmemset(VAR4, VAR3'', 100-1);
 VAR4[100-1] = VAR3'';
 memmove(VAR4, VAR2, wcslen(VAR4)*sizeof(wchar_t));
 VAR4[100-1] = VAR3'';
 FUN3(VAR4);
 free(VAR2);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
