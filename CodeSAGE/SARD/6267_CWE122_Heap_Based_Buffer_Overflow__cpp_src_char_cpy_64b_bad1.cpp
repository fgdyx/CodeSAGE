#ifndef VAR1
void FUN1(void * VAR2)
{
 char * * VAR3 = (char * *)VAR2;
 char * VAR4 = (*VAR3);
 {
 char VAR5[50] = "";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 strcpy(VAR5, VAR4);
 FUN2(VAR4);
 delete [] VAR4;
 }
}
#endif
