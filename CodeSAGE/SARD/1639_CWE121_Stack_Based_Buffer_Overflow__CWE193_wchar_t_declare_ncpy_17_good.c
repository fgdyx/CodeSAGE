#ifndef VAR1
static void FUN1()
{
 int VAR2;
 wchar_t * VAR3;
 wchar_t VAR4[10];
 wchar_t VAR5[10+1];
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR3 = VAR5;
 VAR3[0] = VAR6'';
 }
 {
 wchar_t VAR7[10+1] = VAR8;
 wcsncpy(VAR3, VAR7, wcslen(VAR7) + 1);
 FUN2(VAR3);
 }
}
void FUN3()
{
 FUN1();
}
#endif
