#ifndef VAR1
void FUN1(structType VAR2)
{
 char * VAR3 = VAR2.VAR4;
 {
 char VAR5[50] = "";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 strcpy(VAR5, VAR3);
 FUN2(VAR3);
 delete [] VAR3;
 }
}
#endif
