#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * &VAR3 = VAR2;
 wchar_t VAR4[50];
 wchar_t VAR5[100];
 VAR2 = VAR5;
 VAR2[0] = VAR6'';
 {
 wchar_t * VAR2 = VAR3;
 {
 wchar_t VAR7[100];
 wmemset(VAR7, VAR6'', 100-1);
 VAR7[100-1] = VAR6'';
 wcscpy(VAR2, VAR7);
 FUN2(VAR2);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
