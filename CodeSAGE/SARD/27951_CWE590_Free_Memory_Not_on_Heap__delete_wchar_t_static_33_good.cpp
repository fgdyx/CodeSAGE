#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * &VAR3 = VAR2;
 VAR2 = NULL;
 {
 wchar_t * VAR4 = new wchar_t;
 *VAR4 = VAR5'';
 VAR2 = VAR4;
 }
 {
 wchar_t * VAR2 = VAR3;
 FUN2(*VAR2);
 delete VAR2;
 }
}
void FUN3()
{
 FUN1();
}
#endif
