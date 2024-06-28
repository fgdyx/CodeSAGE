#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * &VAR3 = VAR2;
 VAR2 = NULL;
 VAR2 = new wchar_t[100];
 {
 wchar_t * VAR2 = VAR3;
 delete [] VAR2;
 }
}
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t * &VAR3 = VAR2;
 VAR2 = NULL;
 VAR2 = NULL;
 VAR2 = (wchar_t *)realloc(VAR2, 100*sizeof(wchar_t));
 {
 wchar_t * VAR2 = VAR3;
 free(VAR2);
 }
}
void FUN3()
{
 FUN1();
 FUN2();
}
#endif
