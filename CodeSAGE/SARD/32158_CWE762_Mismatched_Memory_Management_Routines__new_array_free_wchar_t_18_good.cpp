#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 VAR2 = new wchar_t[100];
 goto VAR4;
VAR4:
 delete [] VAR2;
}
static void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 goto VAR4;
VAR4:
 free(VAR2);
}
void FUN3()
{
 FUN1();
 FUN2();
}
#endif
