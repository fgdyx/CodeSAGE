#ifndef VAR1
static void FUN1(char * VAR2)
{
 {
 char VAR3[50] = "";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 FUN2(VAR3, strlen(VAR2), "", VAR2);
 FUN3(VAR2);
 free(VAR2);
 }
}
void FUN4()
{
 char * VAR2;
 void (*VAR4) (char *) = VAR5;
 VAR2 = (char *)malloc(100*sizeof(char));
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 FUN5(VAR2);
}
#endif
