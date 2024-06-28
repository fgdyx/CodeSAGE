#ifndef VAR1
static void FUN1()
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 {
 wchar_t VAR3[100] = VAR4"";
 wchar_t * VAR5 = VAR3;
 if (fread((wchar_t *)VAR5, sizeof(wchar_t), (VAR6)(100-1), stdin) != 100-1)
 {
 FUN2("");
 }
 }
 }
}
static void FUN3()
{
 if(VAR7)
 {
 {
 wchar_t VAR3[100] = VAR4"";
 wchar_t * VAR5 = VAR3;
 if (fread((wchar_t *)VAR5, sizeof(wchar_t), (VAR6)(100-1), stdin) != 100-1)
 {
 FUN2("");
 }
 }
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
