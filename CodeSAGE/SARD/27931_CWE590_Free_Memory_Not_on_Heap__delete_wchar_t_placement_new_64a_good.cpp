#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 wchar_t * VAR3;
 VAR3 = NULL;
 {
 wchar_t * VAR4 = new wchar_t;
 *VAR4 = VAR5'';
 VAR3 = VAR4;
 }
 FUN1(&VAR3);
}
void FUN3()
{
 FUN2();
}
#endif
