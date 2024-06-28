#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * &VAR3 = VAR2;
 VAR2 = NULL;
 VAR2 = new wchar_t;
 {
 wchar_t * VAR2 = VAR3;
 delete VAR2;
 }
}
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t * &VAR3 = VAR2;
 VAR2 = NULL;
 {
 wchar_t VAR4[] = VAR5"";
 VAR2 = FUN3(VAR4);
 }
 {
 wchar_t * VAR2 = VAR3;
 free(VAR2);
 }
}
void FUN4()
{
 FUN1();
 FUN2();
}
#endif
