#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR2 = (wchar_t *)malloc(50*sizeof(wchar_t));
 VAR2[0] = VAR4'';
 }
 {
 wchar_t VAR5[100];
 wmemset(VAR5, VAR4'', 100-1);
 VAR5[100-1] = VAR4'';
 /* POTENTIAL FLAW: Possible buffer overflow if source is larger than data */
 FUN2(VAR2, 100, VAR4"", VAR5);
 FUN3(VAR2);
 free(VAR2);
 }
}
#endif
