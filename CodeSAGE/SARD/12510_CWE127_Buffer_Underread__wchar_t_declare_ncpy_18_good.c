#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 goto VAR5;
VAR5:
 VAR2 = VAR3;
 {
 wchar_t VAR6[100];
 wmemset(VAR6, VAR4'', 100-1);
 VAR6[100-1] = VAR4'';
 wcsncpy(VAR6, VAR2, wcslen(VAR6));
 VAR6[100-1] = VAR4'';
 FUN2(VAR6);
 }
}
void FUN3()
{
 FUN1();
}
#endif
