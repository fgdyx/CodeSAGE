#ifndef VAR1
void FUN1(wchar_t * &VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 FUN1(VAR2);
 {
 wchar_t VAR5[100] = VAR4"";
 FUN3(VAR5, 100-1, VAR2);
 FUN4(VAR5);
 }
}
void FUN5(wchar_t * &VAR2);
static void FUN6()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 FUN5(VAR2);
 {
 wchar_t VAR5[100] = VAR4"";
 FUN3(VAR5, 100-1, VAR4"", VAR2);
 FUN4(VAR5);
 }
}
void FUN7()
{
 FUN2();
 FUN6();
}
#endif
