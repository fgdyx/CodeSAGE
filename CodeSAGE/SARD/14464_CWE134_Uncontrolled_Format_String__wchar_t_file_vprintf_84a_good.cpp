#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 VAR5 * VAR6 = new FUN2(VAR2);
 delete VAR6;
}
static void FUN3()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 VAR7 * VAR8 = new FUN4(VAR2);
 delete VAR8;
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
