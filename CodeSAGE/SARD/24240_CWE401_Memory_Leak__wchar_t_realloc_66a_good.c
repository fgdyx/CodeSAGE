#ifndef VAR1
void FUN1(wchar_t * VAR2[]);
static void FUN2()
{
 wchar_t * VAR3;
 wchar_t * VAR2[5];
 VAR3 = NULL;
 VAR3 = (wchar_t *)FUN3(100*sizeof(wchar_t));
 wcscpy(VAR3, VAR4"");
 FUN4(VAR3);
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
void FUN5(wchar_t * VAR2[]);
static void FUN6()
{
 wchar_t * VAR3;
 wchar_t * VAR2[5];
 VAR3 = NULL;
 VAR3 = (wchar_t *)realloc(VAR3, 100*sizeof(wchar_t));
 wcscpy(VAR3, VAR4"");
 FUN4(VAR3);
 VAR2[2] = VAR3;
 FUN5(VAR2);
}
void FUN7()
{
 FUN2();
 FUN6();
}
#endif
