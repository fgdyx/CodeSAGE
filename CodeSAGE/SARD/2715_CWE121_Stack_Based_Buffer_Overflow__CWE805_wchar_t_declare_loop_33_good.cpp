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
 size_t VAR7;
 wchar_t VAR8[100];
 wmemset(VAR8, VAR6'', 100-1);
 VAR8[100-1] = VAR6'';
 for (VAR7 = 0; VAR7 < 100; VAR7++)
 {
 VAR2[VAR7] = VAR8[VAR7];
 }
 VAR2[100-1] = VAR6'';
 FUN2(VAR2);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
