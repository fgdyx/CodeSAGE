#ifndef VAR1
static void FUN1()
{
 int VAR2;
 wchar_t * VAR3;
 VAR3 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR3 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 }
 {
 wchar_t VAR5[100];
 wmemset(VAR5, VAR4'', 100-1);
 VAR5[100-1] = VAR4'';
 memmove(VAR5, VAR3, wcslen(VAR5)*sizeof(wchar_t));
 VAR5[100-1] = VAR4'';
 FUN2(VAR5);
 free(VAR3);
 }
}
void FUN3()
{
 FUN1();
}
#endif
