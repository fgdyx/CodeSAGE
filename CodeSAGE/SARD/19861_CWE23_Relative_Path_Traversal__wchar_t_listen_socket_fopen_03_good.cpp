#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 wcscat(VAR2, VAR6"");
 }
 {
 VAR7 *VAR8 = NULL;
 VAR8 = FUN3(VAR2, VAR6"");
 if (VAR8 != NULL)
 {
 fclose(VAR8);
 }
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 if(5==5)
 {
 wcscat(VAR2, VAR6"");
 }
 {
 VAR7 *VAR8 = NULL;
 VAR8 = FUN3(VAR2, VAR6"");
 if (VAR8 != NULL)
 {
 fclose(VAR8);
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
