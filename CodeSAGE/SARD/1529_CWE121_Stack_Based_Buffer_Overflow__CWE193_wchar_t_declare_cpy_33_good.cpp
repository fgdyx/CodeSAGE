#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * &VAR3 = VAR2;
 wchar_t VAR4[10];
 wchar_t VAR5[10+1];
 VAR2 = VAR5;
 VAR2[0] = VAR6'';
 {
 wchar_t * VAR2 = VAR3;
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
