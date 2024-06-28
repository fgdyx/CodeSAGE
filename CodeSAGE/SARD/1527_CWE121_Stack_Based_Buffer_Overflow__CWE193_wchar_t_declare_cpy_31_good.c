#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[10];
 wchar_t VAR4[10+1];
 VAR2 = VAR4;
 VAR2[0] = VAR5'';
 {
 wchar_t * VAR6 = VAR2;
 wchar_t * VAR2 = VAR6;
 {
 wchar_t VAR7[10+1] = VAR8;
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
