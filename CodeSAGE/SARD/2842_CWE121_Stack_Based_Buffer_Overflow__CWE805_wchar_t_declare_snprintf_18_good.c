#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[50];
 wchar_t VAR4[100];
 goto VAR5;
VAR5:
 VAR2 = VAR4;
 VAR2[0] = VAR6'';
 {
 wchar_t VAR5[100];
 wmemset(VAR5, VAR6'', 100-1);
 VAR5[100-1] = VAR6'';
 FUN2(VAR2, 100, VAR6"", VAR5);
 FUN3(VAR2);
 }
}
void FUN4()
{
 FUN1();
}
#endif
