#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
wchar_t * FUN1(wchar_t * VAR4);
static void FUN2()
{
 wchar_t * VAR4;
 wchar_t VAR5[VAR6] = VAR7"";
 VAR4 = VAR5;
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 {
 ofstream VAR8;
 VAR8.open((char *)VAR4);
 VAR8.close();
 }
 ;
}
wchar_t * FUN3(wchar_t * VAR4);
static void FUN4()
{
 wchar_t * VAR4;
 wchar_t VAR5[VAR6] = VAR7"";
 VAR4 = VAR5;
 VAR3 = 1;
 VAR4 = FUN3(VAR4);
 {
 ofstream VAR8;
 VAR8.open((char *)VAR4);
 VAR8.close();
 }
 ;
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
