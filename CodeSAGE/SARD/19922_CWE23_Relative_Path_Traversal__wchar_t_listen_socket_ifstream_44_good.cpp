#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 {
 ifstream VAR3;
 VAR3.open((char *)VAR2);
 VAR3.close();
 }
}
static void FUN2()
{
 wchar_t * VAR2;
 void (*VAR4) (wchar_t *) = VAR5;
 wchar_t VAR6[VAR7] = VAR8;
 VAR2 = VAR6;
 wcscat(VAR2, VAR9"");
 FUN3(VAR2);
}
void FUN4()
{
 FUN2();
}
#endif
