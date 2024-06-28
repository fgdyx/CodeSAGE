#ifndef VAR1
void FUN1(wchar_t * VAR2[]);
static void FUN2()
{
 wchar_t * VAR3;
 wchar_t * VAR2[5];
 VAR3 = NULL;
 VAR3 = new wchar_t[100];
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
void FUN3(wchar_t * VAR2[]);
static void FUN4()
{
 wchar_t * VAR3;
 wchar_t * VAR2[5];
 VAR3 = NULL;
 {
 wchar_t VAR4[] = VAR5"";
 VAR3 = FUN5(VAR4);
 }
 VAR2[2] = VAR3;
 FUN3(VAR2);
}
void FUN6()
{
 FUN2();
 FUN4();
}
#endif
