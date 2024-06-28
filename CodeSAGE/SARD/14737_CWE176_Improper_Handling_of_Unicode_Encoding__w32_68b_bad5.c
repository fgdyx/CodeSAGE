#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 char VAR4[10] = "";
 int VAR5;
 VAR5 = FUN2(VAR6, VAR7, VAR2, -1, VAR4, 0, 0, 0);
 /* POTENTIAL FLAW: Do not check that the size of the destination buffer for the conversion is large enough. */
 FUN2(VAR6, VAR7, VAR2, -1, VAR4, VAR5 , 0, 0);
 }
}
#endif
