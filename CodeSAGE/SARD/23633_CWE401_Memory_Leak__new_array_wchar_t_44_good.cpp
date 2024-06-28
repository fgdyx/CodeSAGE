#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 ;
}
static void FUN2()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR4;
 VAR2 = NULL;
 wchar_t VAR5[100];
 VAR2 = VAR5;
 wcscpy(VAR2, VAR6"");
 FUN3(VAR2);
 FUN4(VAR2);
}
static void FUN5(wchar_t * VAR2)
{
 delete[] VAR2;
}
static void FUN6()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR7;
 VAR2 = NULL;
 VAR2 = new wchar_t[100];
 wcscpy(VAR2, VAR6"");
 FUN3(VAR2);
 FUN4(VAR2);
}
void FUN7()
{
 FUN2();
 FUN6();
}
#endif
