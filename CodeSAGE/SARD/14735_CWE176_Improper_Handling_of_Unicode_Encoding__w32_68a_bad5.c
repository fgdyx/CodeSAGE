#ifndef VAR1
void FUN1();
void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 VAR2 = VAR3;
 /* POTENTIAL FLAW: Initialize data as a large unicode string that will cause a buffer overflow in the bad sink */
 wcscpy(VAR2, VAR4"");
 VAR5 = VAR2;
 FUN1();
}
#endif
