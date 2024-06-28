#ifndef VAR1
void FUN1();
static void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = new wchar_t[10+1];
 VAR3 = VAR2;
 FUN1();
}
void FUN3()
{
 FUN2();
}
#endif
