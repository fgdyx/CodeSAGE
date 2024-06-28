#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 {
 char VAR3[10] = "";
 int VAR4;
 VAR4 = FUN2(VAR5, VAR6, VAR2, -1, VAR3, 0, 0, 0);
 /* POTENTIAL FLAW: Do not check that the size of the destination buffer for the conversion is large enough. */
 FUN2(VAR5, VAR6, VAR2, -1, VAR3, VAR4 , 0, 0);
 }
}
void FUN3()
{
 wchar_t * VAR2;
 wchar_t VAR7[100];
 VAR2 = VAR7;
 /* POTENTIAL FLAW: Initialize data as a large unicode string that will cause a buffer overflow in the bad sink */
 wcscpy(VAR2, VAR8"");
 FUN1(VAR2);
}
#endif
