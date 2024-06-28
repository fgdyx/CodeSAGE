#ifndef VAR1
static void FUN1()
{
 int VAR2;
 wchar_t * VAR3;
 wchar_t VAR4[50];
 wchar_t VAR5[100];
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR3 = VAR5;
 VAR3[0] = VAR6'';
 }
 {
 wchar_t VAR7[100];
 wmemset(VAR7, VAR6'', 100-1);
 VAR7[100-1] = VAR6'';
 FUN2(VAR3, 100, VAR6"", VAR7);
 FUN3(VAR3);
 }
}
void FUN4()
{
 FUN1();
}
#endif
