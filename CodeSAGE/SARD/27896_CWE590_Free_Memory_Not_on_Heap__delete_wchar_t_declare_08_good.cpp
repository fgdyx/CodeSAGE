#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 {
 wchar_t * VAR3 = new wchar_t;
 *VAR3 = VAR4'';
 VAR2 = VAR3;
 }
 }
 FUN4(*VAR2);
 delete VAR2;
}
static void FUN5()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(FUN6())
 {
 {
 wchar_t * VAR3 = new wchar_t;
 *VAR3 = VAR4'';
 VAR2 = VAR3;
 }
 }
 FUN4(*VAR2);
 delete VAR2;
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
