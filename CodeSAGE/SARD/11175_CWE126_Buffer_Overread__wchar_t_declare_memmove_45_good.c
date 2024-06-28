#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 wchar_t VAR4[100];
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 memmove(VAR4, VAR2, wcslen(VAR4)*sizeof(wchar_t));
 VAR4[100-1] = VAR5'';
 FUN2(VAR4);
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 wchar_t VAR6[50];
 wchar_t VAR7[100];
 wmemset(VAR6, VAR5'', 50-1);
 VAR6[50-1] = VAR5'';
 wmemset(VAR7, VAR5'', 100-1);
 VAR7[100-1] = VAR5'';
 VAR2 = VAR7;
 VAR3 = VAR2;
 FUN1();
}
void FUN4()
{
 FUN3();
}
#endif
