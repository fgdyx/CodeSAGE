#ifndef VAR1
void FUN1(structType VAR2);
static void FUN2()
{
 wchar_t * VAR3;
 structType VAR2;
 VAR3 = NULL;
 {
 wchar_t * VAR4 = new wchar_t;
 *VAR4 = VAR5'';
 VAR3 = VAR4;
 }
 VAR2.VAR6 = VAR3;
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
