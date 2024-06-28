#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(5==5)
 {
 /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR2 = (char *)malloc(50*sizeof(char));
 VAR2[0] = '';
 }
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 /* POTENTIAL FLAW: Possible buffer overflow if source is larger than data */
 FUN2(VAR2, 100, "", VAR3);
 FUN3(VAR2);
 free(VAR2);
 }
}
#endif
