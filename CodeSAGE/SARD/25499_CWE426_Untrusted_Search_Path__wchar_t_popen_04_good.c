#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(VAR5)
 {
 FUN2("");
 }
 else
 {
 wcscpy(VAR2, VAR6);
 }
 {
 VAR7 *VAR8;
 VAR8 = FUN3(VAR2, VAR4"");
 if (VAR8 != NULL)
 {
 FUN4(VAR8);
 }
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(VAR9)
 {
 wcscpy(VAR2, VAR6);
 }
 {
 VAR7 *VAR8;
 VAR8 = FUN3(VAR2, VAR4"");
 if (VAR8 != NULL)
 {
 FUN4(VAR8);
 }
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
