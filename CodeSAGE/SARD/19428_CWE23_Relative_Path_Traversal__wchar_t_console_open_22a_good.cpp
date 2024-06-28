#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
wchar_t * FUN1(wchar_t * VAR4);
static void FUN2()
{
 wchar_t * VAR4;
 wchar_t VAR5[VAR6] = VAR7;
 VAR4 = VAR5;
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 {
 int VAR8;
 VAR8 = FUN3(VAR4, VAR9|VAR10, VAR11|VAR12);
 if (VAR8 != -1)
 {
 FUN4(VAR8);
 }
 }
 ;
}
wchar_t * FUN5(wchar_t * VAR4);
static void FUN6()
{
 wchar_t * VAR4;
 wchar_t VAR5[VAR6] = VAR7;
 VAR4 = VAR5;
 VAR3 = 1;
 VAR4 = FUN5(VAR4);
 {
 int VAR8;
 VAR8 = FUN3(VAR4, VAR9|VAR10, VAR11|VAR12);
 if (VAR8 != -1)
 {
 FUN4(VAR8);
 }
 }
 ;
}
void FUN7()
{
 FUN2();
 FUN6();
}
#endif
