#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wcscpy(VAR2, VAR4"");
 FUN2(VAR2);
 goto VAR5;
VAR5:
 free(VAR2);
}
static void FUN3()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 VAR2 = (wchar_t *)FUN4(100*sizeof(wchar_t));
 wcscpy(VAR2, VAR4"");
 FUN2(VAR2);
 goto VAR5;
VAR5:
 ;
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
