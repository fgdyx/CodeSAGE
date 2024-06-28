#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 wchar_t * VAR3;
 VAR3 = NULL;
 VAR3 = new wchar_t[10+1];
 FUN1(&VAR3);
}
void FUN3()
{
 FUN2();
}
#endif
