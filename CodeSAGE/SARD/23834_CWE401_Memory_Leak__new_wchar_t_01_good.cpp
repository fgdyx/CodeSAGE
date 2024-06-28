#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 wchar_t VAR3;
 VAR2 = &VAR3;
 *VAR2 = VAR4'';
 FUN2((char)*VAR2);
 ;
}
static void FUN3()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = new wchar_t;
 *VAR2 = VAR4'';
 FUN2((char)*VAR2);
 delete VAR2;
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
