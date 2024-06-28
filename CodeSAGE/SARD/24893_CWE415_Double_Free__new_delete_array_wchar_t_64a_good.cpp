#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 wchar_t * VAR3;
 VAR3 = NULL;
 VAR3 = new wchar_t[100];
 FUN1(&VAR3);
}
void FUN3(void * VAR2);
static void FUN4()
{
 wchar_t * VAR3;
 VAR3 = NULL;
 VAR3 = new wchar_t[100];
 delete [] VAR3;
 FUN3(&VAR3);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
