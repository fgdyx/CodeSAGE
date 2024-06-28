#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 {
 wchar_t VAR3[10+1] = VAR4;
 wcscpy(VAR2, VAR3);
 FUN2(VAR2);
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 void (*VAR5) (wchar_t *) = VAR6;
 wchar_t VAR7[10];
 wchar_t VAR8[10+1];
 VAR2 = VAR8;
 VAR2[0] = VAR9'';
 FUN4(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
