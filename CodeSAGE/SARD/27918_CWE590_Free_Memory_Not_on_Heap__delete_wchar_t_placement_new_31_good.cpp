#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 {
 wchar_t * VAR3 = new wchar_t;
 *VAR3 = VAR4'';
 VAR2 = VAR3;
 }
 {
 wchar_t * VAR5 = VAR2;
 wchar_t * VAR2 = VAR5;
 FUN2(*VAR2);
 delete VAR2;
 }
}
void FUN3()
{
 FUN1();
}
#endif
