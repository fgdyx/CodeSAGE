#ifndef VAR1
static void FUN1(char * VAR2)
{
 {
 char VAR3[50] = "";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 strcpy(VAR3, VAR2);
 FUN2(VAR2);
 }
}
void FUN3()
{
 char * VAR2;
 void (*VAR4) (char *) = VAR5;
 char * VAR6 = (char *)FUN4(100*sizeof(char));
 VAR2 = VAR6;
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 FUN5(VAR2);
}
#endif
