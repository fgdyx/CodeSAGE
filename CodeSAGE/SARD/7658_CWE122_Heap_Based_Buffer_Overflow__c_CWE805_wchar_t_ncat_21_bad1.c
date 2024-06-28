#ifndef VAR1
static int VAR2 = 0;
static wchar_t * FUN1(wchar_t * VAR3)
{
 if(VAR2)
 {
 /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR3 = (wchar_t *)malloc(50*sizeof(wchar_t));
 VAR3[0] = VAR4'';
 }
 return VAR3;
}
void FUN2()
{
 wchar_t * VAR3;
 VAR3 = NULL;
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 {
 wchar_t VAR5[100];
 wmemset(VAR5, VAR4'', 100-1);
 VAR5[100-1] = VAR4'';
 /* POTENTIAL FLAW: Possible buffer overflow if source is larger than sizeof(data)-strlen(data) */
 wcsncat(VAR3, VAR5, 100);
 FUN3(VAR3);
 free(VAR3);
 }
}
#endif
