#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 {
 wchar_t VAR3[100];
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 /* POTENTIAL FLAW: Possible buffer overflow if source is larger than data */
 FUN2(VAR2, 100, VAR4"", VAR3);
 FUN3(VAR2);
 delete [] VAR2;
 }
}
#endif
