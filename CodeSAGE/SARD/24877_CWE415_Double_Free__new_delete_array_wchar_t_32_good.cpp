#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * *VAR3 = &VAR2;
 wchar_t * *VAR4 = &VAR2;
 VAR2 = NULL;
 {
 wchar_t * VAR2 = *VAR3;
 VAR2 = new wchar_t[100];
 *VAR3 = VAR2;
 }
 {
 wchar_t * VAR2 = *VAR4;
 delete [] VAR2;
 }
}
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t * *VAR3 = &VAR2;
 wchar_t * *VAR4 = &VAR2;
 VAR2 = NULL;
 {
 wchar_t * VAR2 = *VAR3;
 VAR2 = new wchar_t[100];
 delete [] VAR2;
 *VAR3 = VAR2;
 }
 {
 wchar_t * VAR2 = *VAR4;
 ;
 }
}
void FUN3()
{
 FUN1();
 FUN2();
}
#endif
