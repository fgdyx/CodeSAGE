#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static wchar_t * FUN1(wchar_t * VAR4)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
#ifdef VAR5
 wcscat(VAR4, VAR6"");
#else
 wcscat(VAR4, VAR6"");
#endif
 }
 return VAR4;
}
static void FUN3()
{
 wchar_t * VAR4;
 wchar_t VAR7[VAR8] = VAR6"";
 VAR4 = VAR7;
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 {
 VAR9 *VAR10 = NULL;
 VAR10 = FUN4(VAR4, VAR6"");
 if (VAR10 != NULL)
 {
 fclose(VAR10);
 }
 }
 ;
}
static wchar_t * FUN5(wchar_t * VAR4)
{
 if(VAR3)
 {
#ifdef VAR5
 wcscat(VAR4, VAR6"");
#else
 wcscat(VAR4, VAR6"");
#endif
 }
 return VAR4;
}
static void FUN6()
{
 wchar_t * VAR4;
 wchar_t VAR7[VAR8] = VAR6"";
 VAR4 = VAR7;
 VAR3 = 1;
 VAR4 = FUN5(VAR4);
 {
 VAR9 *VAR10 = NULL;
 VAR10 = FUN4(VAR4, VAR6"");
 if (VAR10 != NULL)
 {
 fclose(VAR10);
 }
 }
 ;
}
void FUN7()
{
 FUN3();
 FUN6();
}
#endif
