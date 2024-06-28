#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 wchar_t * VAR3;
 VAR3 = NULL;
 VAR3 = (wchar_t *)FUN3(100*sizeof(wchar_t));
 wcscpy(VAR3, VAR4"");
 FUN4(VAR3);
 FUN1(&VAR3);
}
void FUN5(void * VAR2);
static void FUN6()
{
 wchar_t * VAR3;
 VAR3 = NULL;
 VAR3 = (wchar_t *)realloc(VAR3, 100*sizeof(wchar_t));
 wcscpy(VAR3, VAR4"");
 FUN4(VAR3);
 FUN5(&VAR3);
}
void FUN7()
{
 FUN2();
 FUN6();
}
#endif
