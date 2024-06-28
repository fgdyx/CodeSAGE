#ifndef VAR1
void FUN1(void * VAR2)
{
 wchar_t * * VAR3 = (wchar_t * *)VAR2;
 wchar_t * VAR4 = (*VAR3);
 {
 wchar_t VAR5[100];
 wmemset(VAR5, VAR6'', 100-1);
 VAR5[100-1] = VAR6'';
 /* POTENTIAL FLAW: Possible buffer overflow if source is larger than data */
 wcsncpy(VAR4, VAR5, 100-1);
 VAR4[100-1] = VAR6'';
 FUN2(VAR4);
 delete [] VAR4;
 }
}
#endif
