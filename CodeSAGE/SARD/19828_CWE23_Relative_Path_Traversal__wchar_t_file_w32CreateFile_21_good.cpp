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
 wcscat(VAR4, VAR5"");
 }
 return VAR4;
}
static void FUN3()
{
 wchar_t * VAR4;
 wchar_t VAR6[VAR7] = VAR8;
 VAR4 = VAR6;
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 {
 HANDLE VAR9;
 VAR9 = FUN4(VAR4,
 (VAR10|VAR11),
 0,
 NULL,
 VAR12,
 VAR13,
 NULL);
 if (VAR9 != VAR14)
 {
 FUN5(VAR9);
 }
 }
 ;
}
static wchar_t * FUN6(wchar_t * VAR4)
{
 if(VAR3)
 {
 wcscat(VAR4, VAR5"");
 }
 return VAR4;
}
static void FUN7()
{
 wchar_t * VAR4;
 wchar_t VAR6[VAR7] = VAR8;
 VAR4 = VAR6;
 VAR3 = 1;
 VAR4 = FUN6(VAR4);
 {
 HANDLE VAR9;
 VAR9 = FUN4(VAR4,
 (VAR10|VAR11),
 0,
 NULL,
 VAR12,
 VAR13,
 NULL);
 if (VAR9 != VAR14)
 {
 FUN5(VAR9);
 }
 }
 ;
}
void FUN8()
{
 FUN3();
 FUN7();
}
#endif
