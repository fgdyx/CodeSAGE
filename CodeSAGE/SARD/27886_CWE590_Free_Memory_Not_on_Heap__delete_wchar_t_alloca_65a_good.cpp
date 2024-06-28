#ifndef VAR1
void FUN1(wchar_t * VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR4;
 VAR2 = NULL;
 {
 wchar_t * VAR5 = new wchar_t;
 *VAR5 = VAR6'';
 VAR2 = VAR5;
 }
 FUN3(VAR2);
}
void FUN4()
{
 FUN2();
}
#endif
