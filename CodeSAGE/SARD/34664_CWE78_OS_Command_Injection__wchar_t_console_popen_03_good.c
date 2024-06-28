#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4;
 VAR2 = VAR3;
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 wcscat(VAR2, VAR5"");
 }
 {
 VAR6 *VAR7;
 VAR7 = FUN3(VAR2, VAR5"");
 if (VAR7 != NULL)
 {
 FUN4(VAR7);
 }
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4;
 VAR2 = VAR3;
 if(5==5)
 {
 wcscat(VAR2, VAR5"");
 }
 {
 VAR6 *VAR7;
 VAR7 = FUN3(VAR2, VAR5"");
 if (VAR7 != NULL)
 {
 FUN4(VAR7);
 }
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
