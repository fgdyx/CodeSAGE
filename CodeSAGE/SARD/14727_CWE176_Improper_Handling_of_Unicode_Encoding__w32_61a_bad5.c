#ifndef VAR1
wchar_t * FUN1(wchar_t * VAR2);
void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 VAR2 = VAR3;
 VAR2 = FUN1(VAR2);
 {
 char VAR4[10] = "";
 int VAR5;
 VAR5 = FUN3(VAR6, VAR7, VAR2, -1, VAR4, 0, 0, 0);
 /* POTENTIAL FLAW: Do not check that the size of the destination buffer for the conversion is large enough. */
 FUN3(VAR6, VAR7, VAR2, -1, VAR4, VAR5 , 0, 0);
 }
}
#endif
