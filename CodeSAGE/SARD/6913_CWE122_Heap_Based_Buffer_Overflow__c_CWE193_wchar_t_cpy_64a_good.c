#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 wchar_t * VAR3;
 VAR3 = NULL;
 VAR3 = (wchar_t *)malloc((10+1)*sizeof(wchar_t));
 FUN1(&VAR3);
}
void FUN3()
{
 FUN2();
}
#endif
