#ifndef VAR1
wchar_t * FUN1(wchar_t * VAR2)
{
 /* POTENTIAL FLAW: Initialize data as a large unicode string that will cause a buffer overflow in the bad sink */
 wcscpy(VAR2, VAR3"");
 return VAR2;
}
#endif
