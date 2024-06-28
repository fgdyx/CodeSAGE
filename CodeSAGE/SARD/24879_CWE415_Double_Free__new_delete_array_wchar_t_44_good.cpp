#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 delete [] VAR2;
}
static void FUN2()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR4;
 VAR2 = NULL;
 VAR2 = new wchar_t[100];
 FUN3(VAR2);
}
static void FUN4(wchar_t * VAR2)
{
 ;
}
static void FUN5()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR5;
 VAR2 = NULL;
 VAR2 = new wchar_t[100];
 delete [] VAR2;
 FUN3(VAR2);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
