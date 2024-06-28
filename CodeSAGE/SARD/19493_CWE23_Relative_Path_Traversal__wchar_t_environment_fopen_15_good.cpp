#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 wcscat(VAR2, VAR6"");
 break;
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
 switch(6)
 {
 case 6:
 wcscat(VAR2, VAR6"");
 break;
 default:
 FUN2("");
 break;
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
