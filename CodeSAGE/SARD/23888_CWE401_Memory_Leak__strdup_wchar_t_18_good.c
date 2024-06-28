#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 {
 wchar_t VAR4[] = VAR5"";
 VAR2 = FUN2(VAR4);
 FUN3(VAR2);
 }
 goto VAR6;
VAR6:
 free(VAR2);
}
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 VAR2 = (wchar_t *)FUN5(100*sizeof(wchar_t));
 wcscpy(VAR2, VAR5"");
 FUN3(VAR2);
 goto VAR6;
VAR6:
 ;
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
