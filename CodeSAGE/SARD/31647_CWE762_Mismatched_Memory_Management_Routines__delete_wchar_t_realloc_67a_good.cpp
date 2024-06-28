#ifndef VAR1
void FUN1(structType VAR2);
static void FUN2()
{
 wchar_t * VAR3;
 structType VAR2;
 VAR3 = NULL;
 VAR3 = new wchar_t;
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
void FUN3(structType VAR2);
static void FUN4()
{
 wchar_t * VAR3;
 structType VAR2;
 VAR3 = NULL;
 VAR3 = NULL;
 VAR3 = (wchar_t *)realloc(VAR3, 100*sizeof(wchar_t));
 VAR2.VAR4 = VAR3;
 FUN3(VAR2);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
