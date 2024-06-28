#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 if(VAR6)
 {
 FUN2("");
 }
 else
 {
 wcscat(VAR2, VAR7"");
 }
 {
 VAR8 *VAR9 = NULL;
 VAR9 = FUN3(VAR2, VAR7"");
 if (VAR9 != NULL)
 {
 fclose(VAR9);
 }
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 if(VAR10)
 {
 wcscat(VAR2, VAR7"");
 }
 {
 VAR8 *VAR9 = NULL;
 VAR9 = FUN3(VAR2, VAR7"");
 if (VAR9 != NULL)
 {
 fclose(VAR9);
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
