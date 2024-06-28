#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5"";
 VAR2 = VAR3;
 if(VAR6!=5)
 {
 FUN2("");
 }
 else
 {
#ifdef VAR7
 wcscat(VAR2, VAR5"");
#else
 wcscat(VAR2, VAR5"");
#endif
 }
 {
 VAR8 *VAR9 = NULL;
 VAR9 = FUN3(VAR2, VAR5"");
 if (VAR9 != NULL)
 {
 fclose(VAR9);
 }
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5"";
 VAR2 = VAR3;
 if(VAR6==5)
 {
#ifdef VAR7
 wcscat(VAR2, VAR5"");
#else
 wcscat(VAR2, VAR5"");
#endif
 }
 {
 VAR8 *VAR9 = NULL;
 VAR9 = FUN3(VAR2, VAR5"");
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
