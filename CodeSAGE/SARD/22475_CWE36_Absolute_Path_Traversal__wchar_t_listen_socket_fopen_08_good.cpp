#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5"";
 VAR2 = VAR3;
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
#ifdef VAR6
 wcscat(VAR2, VAR5"");
#else
 wcscat(VAR2, VAR5"");
#endif
 }
 {
 VAR7 *VAR8 = NULL;
 VAR8 = FUN4(VAR2, VAR5"");
 if (VAR8 != NULL)
 {
 fclose(VAR8);
 }
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5"";
 VAR2 = VAR3;
 if(FUN6())
 {
#ifdef VAR6
 wcscat(VAR2, VAR5"");
#else
 wcscat(VAR2, VAR5"");
#endif
 }
 {
 VAR7 *VAR8 = NULL;
 VAR8 = FUN4(VAR2, VAR5"");
 if (VAR8 != NULL)
 {
 fclose(VAR8);
 }
 }
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
