#ifndef VAR1
static void FUN1(char * &VAR2)
{
 /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR2 = (char *)malloc(50*sizeof(char));
 VAR2[0] = '';
}
void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 FUN1(VAR2);
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 /* POTENTIAL FLAW: Possible buffer overflow if source is larger than data */
 strncpy(VAR2, VAR3, 100-1);
 VAR2[100-1] = '';
 FUN3(VAR2);
 free(VAR2);
 }
}
#endif
