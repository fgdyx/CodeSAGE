#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 wchar_t * VAR3;
 VAR3 = NULL;
 wchar_t VAR4;
 VAR3 = &VAR4;
 *VAR3 = VAR5'';
 FUN3((char)*VAR3);
 FUN1(&VAR3);
}
void FUN4(void * VAR2);
static void FUN5()
{
 wchar_t * VAR3;
 VAR3 = NULL;
 VAR3 = new wchar_t;
 *VAR3 = VAR5'';
 FUN3((char)*VAR3);
 FUN4(&VAR3);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
