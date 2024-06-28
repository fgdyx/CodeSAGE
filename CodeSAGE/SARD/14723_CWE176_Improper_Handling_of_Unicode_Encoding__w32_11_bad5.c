#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 VAR2 = VAR3;
 if(FUN2())
 {
 /* POTENTIAL FLAW: Initialize data as a large unicode string that will cause a buffer overflow in the bad sink */
 wcscpy(VAR2, VAR4"");
 }
 if(FUN2())
 {
 {
 char VAR5[10] = "";
 int VAR6;
 VAR6 = FUN3(VAR7, VAR8, VAR2, -1, VAR5, 0, 0, 0);
 /* POTENTIAL FLAW: Do not check that the size of the destination buffer for the conversion is large enough. */
 FUN3(VAR7, VAR8, VAR2, -1, VAR5, VAR6 , 0, 0);
 }
 }
}
#endif
