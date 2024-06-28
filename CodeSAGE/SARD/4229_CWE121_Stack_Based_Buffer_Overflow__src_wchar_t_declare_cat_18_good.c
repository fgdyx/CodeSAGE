#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 VAR2 = VAR3;
 goto VAR4;
VAR4:
 wmemset(VAR2, VAR5'', 50-1);
 VAR2[50-1] = VAR5'';
 {
 wchar_t VAR6[50] = VAR5"";
 wcscat(VAR6, VAR2);
 FUN2(VAR2);
 }
}
void FUN3()
{
 FUN1();
}
#endif
