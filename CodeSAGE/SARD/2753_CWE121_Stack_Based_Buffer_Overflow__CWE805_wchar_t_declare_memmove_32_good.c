#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * *VAR3 = &VAR2;
 wchar_t * *VAR4 = &VAR2;
 wchar_t VAR5[50];
 wchar_t VAR6[100];
 {
 wchar_t * VAR2 = *VAR3;
 VAR2 = VAR6;
 VAR2[0] = VAR7'';
 *VAR3 = VAR2;
 }
 {
 wchar_t * VAR2 = *VAR4;
 {
 wchar_t VAR8[100];
 wmemset(VAR8, VAR7'', 100-1);
 VAR8[100-1] = VAR7'';
 memmove(VAR2, VAR8, 100*sizeof(wchar_t));
 VAR2[100-1] = VAR7'';
 FUN2(VAR2);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
