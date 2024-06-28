#ifndef VAR1
void FUN1(wchar_t * VAR2);
void FUN2(wchar_t * VAR2);
static void FUN3()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = new wchar_t;
 FUN1(VAR2);
}
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 {
 wchar_t VAR3[] = VAR4"";
 VAR2 = FUN5(VAR3);
 }
 FUN2(VAR2);
}
void FUN6()
{
 FUN3();
 FUN4();
}
#endif
