#ifndef VAR1
void FUN1(VAR2<int, wchar_t *> VAR3);
static void FUN2()
{
 wchar_t * VAR4;
 VAR2<int, wchar_t *> VAR3;
 VAR4 = NULL;
 {
 wchar_t * VAR5 = new wchar_t;
 *VAR5 = VAR6'';
 VAR4 = VAR5;
 }
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
void FUN3()
{
 FUN2();
}
#endif
